/* Host coroutines for OS threads: one per OSContext, switched cooperatively (ucontext / Win32 fibers). */
#ifndef FFC_CORO_H
#define FFC_CORO_H

struct ffc_coro;
/* The coroutine running now (the host main context until the first switch). */
struct ffc_coro *ffc_coro_self(void);
/* A new coroutine that runs fn(arg) on its own stack; fn must never return. */
struct ffc_coro *ffc_coro_new(void (*fn)(void *), void *arg, unsigned stack_size);
/* Switch from the running coroutine to `to`; returns when something switches back. */
void ffc_coro_switch(struct ffc_coro *to);
/* Free a coroutine that is not running. */
void ffc_coro_free(struct ffc_coro *c);

#endif
