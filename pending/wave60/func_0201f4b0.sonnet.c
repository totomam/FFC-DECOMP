#include "ffc/types.h"
typedef struct { uint16_t h[17]; } H;
typedef struct {
    uint32_t a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11;
    H h;
    uint16_t pad;
    uint32_t b, c, d;
} E;
typedef struct { uint8_t pad[0x58]; E *arr; } S;
extern uint32_t func_020363b4(void *p);
extern void func_02035f58(E *t);
extern void *func_02035fd0(void *object);
extern void func_02036438(void *object, uint32_t value);
extern void func_0201c1c0(void *self, uint32_t v);
void func_0201f4b0(S *self, uint32_t idx, uint8_t flag) {
    E t;
    uint32_t r;
    E *d;
    r = func_020363b4(&self->arr[idx]);
    func_02035f58(&t);
    d = &self->arr[idx];
    d->a0 = t.a0;
    d->a2 = t.a2;
    d->a4 = t.a4;
    d->a6 = t.a6;
    d->a8 = t.a8;
    d->a10 = t.a10;
    d->a11 = t.a11;
    d->h = t.h;
    d->b = t.b;
    d->c = t.c;
    d->d = t.d;
    func_02035fd0(&t);
    func_02036438(&self->arr[idx], idx);
    if (flag != 0) func_0201c1c0(self, r);
}
