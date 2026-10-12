#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t x);
extern uint32_t *func_ov003_021464f4(uint32_t x, uint32_t y);
extern uint32_t *func_ov003_02155b40(uint32_t *p);
extern uint32_t func_ov003_02148ae4(uint32_t x, uint32_t y, uint32_t z);
extern void func_02016448(uint32_t *out, uint32_t v);
extern uint32_t *func_02052d90(uint32_t a, uint32_t b);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

int func_ov003_021654f8(uint32_t *a, uint32_t b, uint32_t *c)
{
    uint32_t loc[4];
    uint32_t *p;
    uint32_t *r6;
    uint32_t r5;

    r6 = func_ov003_021464f4(func_020424e0(a[5]), b);
    if (r6 == 0) {
        return 0;
    }
    c[0] = func_ov003_02155b40(r6)[2];
    c[2] = func_ov003_02155b40(r6)[3];
    r5 = func_ov003_02148ae4(func_020424e0(a[5]), c[0], c[2]);
    if (r5 == 0x80000000) {
        r5 = 0;
    }
    p = loc;
    func_02016448(p, data_020b8e44);
    c[1] = r5 + func_02052d90(p[1], p[2])[11];
    if (p[1] != 0) {
        if (((uint8_t *)p)[12] != 0) {
            func_02052d3c(p[1], p[2]);
        }
        func_02052c04(p[1]);
    }
    func_02053290(p);
    return 1;
}
