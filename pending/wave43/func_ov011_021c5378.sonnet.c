#include "ffc/types.h"

extern void func_02056bf4(void *object);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0203bb94(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov011_021cb5d8[];

typedef void (*Fn1)(void *);
typedef void (*Fn2)(void *, uint32_t);

void func_ov011_021c5378(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint8_t buf[0x44];
    void *o;
    uint32_t *r6;
    uint8_t st;

    if (s[0x117] > 2) {
        o = *(void **)(s + 0xdc);
        if (o != 0) {
            ((Fn1)((void **)*(void **)o)[11])(o);
        }
        return;
    }

    { void *q = *(void **)(s + 0xdc);
    if (q != 0) {
        func_02056bf4(s + 0x48);
        o = *(void **)(s + 0xdc);
        if (o != 0) {
            if (o != 0) {
                ((Fn1)((void **)*(void **)o)[1])(o);
            }
            *(void **)(s + 0xdc) = 0;
        }
    }
    }

    st = s[0x117];
    r6 = *(uint32_t **)(s + 0xf4);
    func_02091b10(buf, (uint32_t)data_ov011_021cb5d8, (uint32_t)st, r6[st]);
    o = func_0203bb94(buf, 1, 0, 0);
    *(void **)(s + 0xdc) = o;
    ((Fn1)((void **)*(void **)o)[10])(o);
    o = *(void **)(s + 0xdc);
    ((Fn2)((void **)*(void **)o)[8])(o, 1);
    func_02056bc0(s + 0x48, *(void **)(s + 0xdc));
}
