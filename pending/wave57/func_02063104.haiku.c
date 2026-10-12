#include "ffc/types.h"

extern void func_0208763c(void *p);
extern uint32_t func_0204f078(void *p);
extern void func_0206303c(void *p, uint32_t x);
extern void *func_02052d90(void *mar, uint32_t index);
extern void *func_02056830(uint32_t size);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern void *func_0205fc78(void *a, int32_t b, void *c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02087678(void *p);

void *func_02063104(uint8_t *self, uint8_t *arg1)
{
    struct { void *p; volatile uint8_t f; } g;
    uint32_t idx, n, i, old, off, w, b, r6, sz;
    uint32_t *r7;
    uint8_t *r5;
    void *ret;
    void *mar;

    g.p = self + 0x58;
    g.f = 1;
    if (g.f != 0) {
        func_0208763c(g.p);
    }
    idx = func_0204f078(arg1);
    func_0206303c(self, 1);
    off = idx << 2;
    old = *(uint32_t *)(self + 0x40 + off);
    *(uint32_t *)(self + 0x40 + off) = old + 1;
    if (old == 0) {
        mar = func_02052d90(*(void **)(self + 4), *(void **)(self + 8));
        n = *(uint32_t *)((uint8_t *)mar + 0x30);
        r5 = *(uint8_t **)(*(uint8_t **)(arg1 + 0x18) + 8);
        *(void **)(self + 0x50 + off) = func_02056830(n << 2);
        for (i = 0; i < n; i++) {
            uint8_t *ent = *(uint8_t **)(self + 0x1c) + i * 12;
            r7 = (uint32_t *)func_02052d90(*(void **)ent, *(void **)(ent + 4));
            w = r7[0];
            r6 = *(uint32_t *)(r5 + 0x4c);
            b = (w << 16) >> 24;
            if (*(uint32_t *)(r5 + 0x40) == 0) {
                sz = r6 * func_0209a978(b + r6 - 1, r6);
            } else {
                sz = (r6 * func_0209a978((b << 1) + r6 - 1, r6)) >> 1;
            }
            ret = func_0205fc78(r5, (int8_t)w, r7 + 1, sz, 0, 1);
            ((void **)(*(void **)(self + 0x50 + off)))[i] = ret;
        }
    }
    ret = *(void **)(self + 0x50 + off);
    if (g.f != 0) {
        func_02087678(g.p);
    }
    return ret;
}
