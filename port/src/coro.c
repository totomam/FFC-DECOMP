/* Host coroutines (see coro.h). */
#include <stdio.h>
#include <stdlib.h>

#include "coro.h"

#if defined(_WIN32)
#include <windows.h>

struct ffc_coro {
    void *fiber;
    void (*fn)(void *);
    void *arg;
};

static struct ffc_coro main_coro, *running;

struct ffc_coro *ffc_coro_self(void)
{
    if (!running) {
        main_coro.fiber = ConvertThreadToFiber(NULL);
        running = &main_coro;
    }
    return running;
}

static void WINAPI fiber_entry(void *p)
{
    struct ffc_coro *c = p;
    c->fn(c->arg);
    fprintf(stderr, "ffc: coroutine returned\n");
    abort();
}

struct ffc_coro *ffc_coro_new(void (*fn)(void *), void *arg, unsigned stack_size)
{
    struct ffc_coro *c = calloc(1, sizeof *c);
    ffc_coro_self();
    c->fn = fn;
    c->arg = arg;
    c->fiber = CreateFiber(stack_size, fiber_entry, c);
    return c;
}

void ffc_coro_switch(struct ffc_coro *to)
{
    ffc_coro_self();
    if (to == running)
        return;
    running = to;
    SwitchToFiber(to->fiber);
}

void ffc_coro_free(struct ffc_coro *c)
{
    if (c && c != &main_coro) {
        DeleteFiber(c->fiber);
        free(c);
    }
}

#elif defined(__EMSCRIPTEN__)
#include <emscripten/fiber.h>

struct ffc_coro {
    emscripten_fiber_t fiber;
    void *stack, *astack;
};

static struct ffc_coro main_coro, *running;
static char main_astack[1 << 16];

struct ffc_coro *ffc_coro_self(void)
{
    if (!running) {
        emscripten_fiber_init_from_current_context(&main_coro.fiber, main_astack, sizeof main_astack);
        running = &main_coro;
    }
    return running;
}

struct ffc_coro *ffc_coro_new(void (*fn)(void *), void *arg, unsigned stack_size)
{
    struct ffc_coro *c = calloc(1, sizeof *c);
    ffc_coro_self();
    c->stack = malloc(stack_size);
    c->astack = malloc(1 << 16);
    emscripten_fiber_init(&c->fiber, (em_arg_callback_func)fn, arg, c->stack, stack_size, c->astack, 1 << 16);
    return c;
}

void ffc_coro_switch(struct ffc_coro *to)
{
    struct ffc_coro *from = ffc_coro_self();
    if (to == from)
        return;
    running = to;
    emscripten_fiber_swap(&from->fiber, &to->fiber);
}

void ffc_coro_free(struct ffc_coro *c)
{
    if (c && c != &main_coro) {
        free(c->stack);
        free(c->astack);
        free(c);
    }
}

#else
#include <ucontext.h>

struct ffc_coro {
    ucontext_t uc;
    void *stack;
    void (*fn)(void *);
    void *arg;
};

static struct ffc_coro main_coro, *running;

struct ffc_coro *ffc_coro_self(void)
{
    if (!running)
        running = &main_coro;
    return running;
}

static void uc_entry(void)
{
    struct ffc_coro *c = running;
    c->fn(c->arg);
    fprintf(stderr, "ffc: coroutine returned\n");
    abort();
}

struct ffc_coro *ffc_coro_new(void (*fn)(void *), void *arg, unsigned stack_size)
{
    struct ffc_coro *c = calloc(1, sizeof *c);
    ffc_coro_self();
    c->fn = fn;
    c->arg = arg;
    c->stack = malloc(stack_size);
    getcontext(&c->uc);
    c->uc.uc_stack.ss_sp = c->stack;
    c->uc.uc_stack.ss_size = stack_size;
    c->uc.uc_link = NULL;
    makecontext(&c->uc, uc_entry, 0);
    return c;
}

void ffc_coro_switch(struct ffc_coro *to)
{
    struct ffc_coro *from = ffc_coro_self();
    if (to == from)
        return;
    running = to;
    swapcontext(&from->uc, &to->uc);
}

void ffc_coro_free(struct ffc_coro *c)
{
    if (c && c != &main_coro) {
        free(c->stack);
        free(c);
    }
}
#endif
