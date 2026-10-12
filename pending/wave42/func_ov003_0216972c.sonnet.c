#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } ov003_pair;

extern uint32_t func_020424e0(uint32_t x);
extern uint32_t func_ov003_0214649c(uint32_t x);
extern uint32_t func_ov003_02154ff4(uint32_t x);
extern uint32_t func_ov003_0215501c(uint32_t x);
extern int func_ov003_02149904(uint32_t x);
extern void *func_02056aec(void *obj);
extern uint32_t func_ov003_021697c4(uint32_t a, ov003_pair s, uint32_t d, uint32_t e);
extern uint32_t func_02021660(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern ov003_pair data_ov003_0217b24c;

void func_ov003_0216972c(uint32_t *p)
{
    uint32_t a = func_020424e0(p[32]);
    uint32_t b = func_ov003_0214649c(a);
    uint32_t c = func_ov003_02154ff4(b);
    uint32_t d = func_ov003_0215501c(b);

    if (c == 0) {
        p[3] = (p[3] & ~0xffu) | 2;
        return;
    }
    if (func_ov003_02149904(a) == 0) {
        void *x = func_02056aec(p);
        uint32_t e = func_ov003_021697c4(a, data_ov003_0217b24c, c, p[33]);
        uint32_t f = func_02021660(d);
        uint8_t *q = (uint8_t *)p + 0x14;
        func_02056bc0(q, (void *)f);
        func_02056bc0(q, (void *)e);
        func_02056bc0(q, x);
        return;
    }
    p[3] = (p[3] & 0xffffff00u) | 2;
}
