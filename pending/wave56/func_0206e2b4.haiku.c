#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_020553c4(void *p);
extern void func_020553e8(void *p);
extern uint32_t func_02056830(void);
extern void func_02056858(uint32_t x);
extern void *func_0205681c(uint32_t size);
extern void func_0206e38c(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_0206f3fc(void *arr, void *item);
extern void func_02087678(void *p);

typedef struct {
    void *ptr;
    volatile uint8_t owned;
} Guard;

typedef struct {
    void *node;
    uint16_t id;
} Elem;

typedef struct {
    uint8_t pad[0x4c];
    Elem *arr;
    uint32_t count;
    uint32_t cap;
} Owner;

typedef struct {
    uint32_t w0;
    uint32_t arg1;
    uint32_t x;
    uint32_t blk[4];
    uint32_t xv;
    uint32_t w24;
    Elem e;
    Guard g;
} Frame;

void func_0206e2b4(Owner *self, uint32_t arg1, void *p)
{
    Frame f;
    uint32_t v;
    void *n;

    f.arg1 = arg1;
    f.g.ptr = (uint8_t *)self + 0x284;
    f.g.owned = 1;
    if (f.g.owned) {
        func_0208763c(f.g.ptr);
    }

    func_020553c4(p);
    v = ((uint32_t (*)(void *))((void **)(*(void **)p))[2])(p);
    f.x = func_02056830();
    ((void (*)(void *, uint32_t))((void **)(*(void **)p))[3])(p, f.x);

    n = func_0205681c(12);
    f.e.node = n;
    if (n != 0) {
        ((uint32_t *)n)[0] = 0;
        ((uint32_t *)n)[1] = 0;
        ((uint32_t *)n)[2] = 0;
        func_0206e38c(n, f.x, f.x + v, f.arg1, 0);
    }

    f.e.id = (uint16_t)f.arg1;

    if (self->count < self->cap) {
        uint32_t idx = self->count;
        self->count = idx + 1;
        self->arr[idx] = f.e;
    } else {
        func_0206f3fc(&self->arr, &f.e);
    }

    func_02056858(f.x);
    func_020553e8(p);
    if (f.g.owned) {
        func_02087678(f.g.ptr);
    }
}
