#include "ffc/types.h"

typedef struct { uint32_t x, y; } V;
typedef struct { uint32_t a, b, c, d; } W;

extern uint32_t data_020ae3b0[];
extern uint32_t data_020ae3c0[];
extern uint32_t data_021394fc[];
extern uint32_t data_020ae394[];
extern V data_020ae3a0;

extern void func_02056c9c(void *obj, uint32_t v);
extern void *func_0203b77c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0206133c(void *object);
extern void *func_0203b81c(void);
extern void func_0205f818(void *obj, uint32_t v);
extern void *func_0203ba60(void *o, V v, void *z, uint32_t flag);
extern void *func_0203b9cc(V v, void *z, uint32_t flag);
extern void *func_0203b884(void *r, void *obj, V cd);
extern void func_02056bc0(void *object, void *node);

void *func_020349e0(void *this_, W w, uint32_t e, uint32_t f, uint8_t g)
{
    uint8_t *self = (uint8_t *)this_;
    void *obj;
    void *r;
    void *tmp;
    uint32_t i;
    volatile uint32_t z[3];
    V t;
    uint8_t *slot;

    func_02056c9c(this_, 0);
    *(uint32_t **)self = data_020ae3b0;
    *(uint32_t *)(self + 0xc8) = w.a;
    *(uint32_t *)(self + 0xcc) = w.b;
    *(uint32_t *)(self + 0xd0) = w.c;
    *(uint32_t *)(self + 0xd4) = w.d;
    *(uint32_t *)(self + 0xd8) = 0;
    *(uint32_t *)(self + 0xdc) = 0;
    *(uint32_t *)(self + 0xe0) = 0;
    *(uint32_t *)(self + 0xe4) = f;
    *(uint8_t *)(self + 0x80) = g;
    *(void **)(self + 0x84) = func_0203b77c(data_020ae3c0, 0, 0, 0);
    func_0206133c(*(void **)(self + 0x84));

    if (e == 0) {
        if (f != 0) {
            *(void **)(self + 0x88) = func_0203b81c();
            func_0205f818(*(void **)(self + 0x88), 7);
        } else {
            e = 1;
        }
    }

    for (i = 0; i < f; i++) {
        if (!(data_021394fc[0] & 1)) {
            data_020ae394[3] = 0x40;
            data_020ae394[4] = 0x20;
            data_021394fc[0] |= 1;
        }
        slot = self + i * 4;
        if (e == 0) {
            obj = *(void **)(self + 0x84);
            tmp = (*(void *(**)(void *))(((uint32_t **)(*(uint32_t **)obj))[8]))(obj);
            r = func_0203ba60(*(void **)(self + 0x88), data_020ae3a0, tmp, 1);
        } else {
            obj = *(void **)(self + 0x84);
            tmp = (*(void *(**)(void *))(((uint32_t **)(*(uint32_t **)obj))[8]))(obj);
            r = func_0203b9cc(data_020ae3a0, tmp, 1);
        }
        z[0] = 0;
        t = *(V *)&w.c;
        r = func_0203b884(r, obj, t);
        *(void **)(slot + 0x8c) = r;
        (*(void (**)(void *, uint32_t))(((uint32_t **)(*(uint32_t **)r))[8]))(r, 0);
        func_02056bc0(self + 0x48, *(void **)(slot + 0x8c));
    }

    if (e == 0) {
        func_02056bc0(self + 0x48, *(void **)(self + 0x88));
    }
    return this_;
}
