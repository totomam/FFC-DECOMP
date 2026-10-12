#include "ffc/types.h"

extern int func_ov000_02159000(void);
extern int func_ov000_0215b5f8(void);
extern void *func_ov000_02163634(int x);
extern uint32_t func_ov000_0215b6a0(uint8_t x);
extern void *func_ov000_0215917c(int a, int b);
extern void func_020928f0(void *dst, void *src, int n);
extern uint8_t func_ov000_0215b4b0(void);
extern void func_02084ca4(void *a, void *b, int c);
extern void func_ov001_02180728(int a, void *b, int c, int d);
extern void func_ov000_021591a8(int a, void *b, int c);
extern uint8_t *data_ov000_0217096c;
extern uint8_t data_ov000_0216b2c0[];

int func_ov000_02164544(uint32_t a0, void *a1, int32_t a2)
{
    uint8_t *base;
    uint8_t *p;
    int r4 = 0;
    uint8_t i;

    if (func_ov000_02159000() != 0) {
        return 0;
    }
    if (func_ov000_0215b5f8() == 1) {
        return 0;
    }
    base = data_ov000_0217096c;
    if (a2 > (int32_t)*(uint16_t *)(base + 0x720) - 8) {
        return 0;
    }
    p = func_ov000_02163634(0);
    if (p != 0) {
        r4 = func_ov000_0215b6a0(p[0x16]);
    }
    if (p == 0 || r4 == 0) {
        return 0;
    }
    p = func_ov000_0215917c(4, a2 + 8);
    if (p == 0) {
        return 0;
    }
    func_020928f0(p, data_ov000_0216b2c0, 3);
    p[3] = func_ov000_0215b4b0();
    *(uint32_t *)(p + 4) = a0;
    func_02084ca4(a1, p + 8, a2);
    func_ov001_02180728(r4, p, a2 + 8, 0);
    r4 = 0;
    if (p != 0) {
        func_ov000_021591a8(4, p, r4);
    }
    base = data_ov000_0217096c;
    if (*(uint32_t *)(base + 0x700) != 0) {
        for (i = 0; i < 0x20; i++) {
            if (a0 & (1u << i)) {
                base = data_ov000_0217096c;
                ((void (*)(int32_t, uint32_t, uint32_t))*(uint32_t *)(base + 0x700))(
                    a2, i, *(uint32_t *)(base + 0x710));
            }
        }
    }
    return 1;
}
