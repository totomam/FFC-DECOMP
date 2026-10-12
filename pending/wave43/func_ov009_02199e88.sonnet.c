#include "ffc/types.h"

extern void func_020095b8(void *dst, void *src);
extern void func_02068ddc(void *obj, void *arg);
extern void func_020059cc(void *object);
extern void func_0206139c(void *out, void *obj, void *arg, uint32_t z1, uint32_t z2);
extern uint32_t func_0209a978(uint32_t x);
extern void func_ov009_02199d98(void *self, uint8_t v);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Pair4;

void func_ov009_02199e88(uint8_t *self, void *a1, uint8_t a2)
{
    uint32_t tA[3];
    uint32_t tB[3];
    Pair4 p;
    uint32_t r;
    void *obj88;
    void **vt;
    void *o80;
    uint32_t n1, n2;
    void (*fn)(uint32_t *, void *);

    func_020095b8(tA, a1);
    func_02068ddc(*(void **)(self + 0x88), tA);
    func_020059cc(tA);

    func_020095b8(tB, a1);
    func_0206139c(&p.c, *(void **)(self + 0x80), tB, 0, 0);
    func_020059cc(tB);

    o80 = *(void **)(self + 0x80);
    fn = (void (*)(uint32_t *, void *))(*(void ***)o80)[1];
    fn(&p.a, o80);

    n1 = p.a;
    n2 = p.c;
    r = func_0209a978(n2 + (n1 - 1));
    if (r > 8) {
        r = 8;
    }
    *(uint8_t *)(self + 0xa0) = (uint8_t)r;

    func_ov009_02199d98(self, a2);

    obj88 = *(void **)(self + 0x88);
    if (obj88 != 0) {
        vt = *(void ***)obj88;
        ((void (*)(void *))vt[11])(obj88);
    }

    *(uint8_t *)(self + 0xa1) = (uint8_t)(*(uint8_t *)(self + 0xa0) + 0xf);
    *(uint8_t *)(self + 0xa2) = a2;
}
