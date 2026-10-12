#include "ffc/types.h"

extern void func_02056c4c(uint32_t x);
extern void func_ov003_02155adc(uint32_t x);
extern void func_ov003_02155d64(uint32_t x);
extern uint32_t *func_ov003_02153470(uint32_t x);
extern void func_ov003_021489d8(uint32_t *p, uint32_t x);
extern uint32_t func_02018014(uint32_t x);
extern void func_0201d014(uint32_t a, uint32_t b, void *c);
extern int func_02036ba8(void *x);
extern void func_0201d14c(uint32_t a, uint32_t b, void *c);
extern uint32_t func_02036bfc(void *x);
extern void func_02036c80(void *x, uint32_t y);
extern uint32_t func_02036c0c(void *x);
extern void func_02036ca8(void *x, uint32_t y);
extern uint32_t func_02036c04(void *x);
extern void func_02036c94(void *x, uint32_t y);
extern void func_0201cff8(uint32_t a, uint32_t b, void *c);
extern void func_ov003_02148254(uint32_t *p, uint32_t i);
extern void func_ov003_02148398(uint32_t *p);
extern void func_ov003_02148908(uint32_t *p);
extern void func_ov003_021489c8(uint32_t *p);
extern void func_ov003_02148c28(uint32_t *p);
extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;

void func_ov003_02148ca0(uint32_t *p)
{
    uint32_t i;
    uint32_t v;
    uint8_t a[0x10];
    uint8_t b[0x28];
    uint8_t c[0x10];
    uint8_t d[0x10];

    func_02056c4c(p[0x6a]);
    p[0x107] = (uint32_t)-1;
    for (i = 0; i < 0x32; i++) {
        func_ov003_02155adc(p[0x28 + i]);
        func_ov003_02155d64(p[0x28 + i]);
    }
    v = *func_ov003_02153470(p[0x27]);
    func_ov003_021489d8(p, v);

    for (i = 1; i < func_02018014(data_020b8e44); i++) {
        func_0201d014(data_020b93b8, i, a);
        if (func_02036ba8(a)) {
            func_0201d14c(data_020b93b8, i, b);
            if (b[2] == 1) {
                func_0201d014(data_020b93b8, *(uint16_t *)(b + 4), c);
                if (func_02036ba8(c)) {
                    func_02036c80(a, func_02036bfc(c));
                    func_02036ca8(a, func_02036c0c(c));
                    func_02036c94(a, func_02036c04(c));
                    func_0201cff8(data_020b93b8, i, a);
                }
            }
        }
    }

    for (i = 1; i < func_02018014(data_020b8e44); i++) {
        func_0201d014(data_020b93b8, i, d);
        if (func_02036ba8(d)) {
            if (func_02036bfc(d) == v) {
                func_ov003_02148254(p, i);
            }
        }
    }

    func_ov003_02148398(p);
    func_ov003_02148908(p);
    func_ov003_021489c8(p);
    func_ov003_02148c28(p);
}
