#include "ffc/types.h"

extern void *func_020424e0(void *a);
extern void *func_ov003_021464f4(void *a, uint32_t b);
extern void *func_ov003_0214649c(void *a);
extern uint32_t *func_ov003_02153470(void *a);
extern uint32_t *func_ov003_02155b40(void *a);
extern void func_0201d014(void *a, uint32_t b, void *c);
extern uint16_t func_02036bfc(void *a);
extern uint32_t *func_02036c0c(void *a);
extern uint16_t func_02036c04(void *a);
extern void *func_02056aec(void *a);
extern void *func_0205681c(uint32_t n);
extern void *func_ov003_02164114(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i);
extern void func_02056bc0(void *a, void *b);
extern void *data_020b93b8;

void func_ov003_0216e450(uint8_t *p) {
    uint8_t v7 = *(p + 0x88);
    uint16_t v18 = *(uint16_t *)(p + 0x84);
    uint16_t v4 = *(uint16_t *)(p + 0x86);
    void *sp14;
    uint32_t a1c;
    uint32_t a20;
    uint32_t a24;
    uint32_t tmp[4];
    uint32_t r6;
    uint32_t *q;
    void *res;

    r6 = (uint32_t)func_ov003_021464f4(func_020424e0(*(void **)(p + 0x80)), v4);
    if (r6 != 0) {
        a1c = (uint16_t)*(uint32_t *)func_ov003_02153470(func_ov003_0214649c(func_020424e0(*(void **)(p + 0x80))));
        q = func_ov003_02155b40((void *)r6);
        a20 = q[2];
        r6 = 1 << 14;
        a24 = q[3];
    } else {
        func_0201d014(data_020b93b8, v4, tmp);
        a1c = func_02036bfc(tmp);
        q = func_02036c0c(tmp);
        a20 = q[0];
        a24 = q[1];
        r6 = func_02036c04(tmp);
    }
    sp14 = func_02056aec(p);
    res = func_0205681c(0x2c);
    if (res != 0) {
        res = func_ov003_02164114(res, *(void **)(p + 0x80), v18, a1c, a20, a24, r6, v4, v7);
    }
    func_02056bc0(p + 0x14, res);
    func_02056bc0(p + 0x14, sp14);
}
