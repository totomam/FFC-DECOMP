#include "ffc/types.h"

typedef struct {
    int f00; int f04; int f08; int f0c; int f10;
    int f14; int f18; int f1c; int f20; int f24;
    uint8_t *f28;
    int f2c;
} St;

extern uint32_t data_ov001_021918a4[];
extern St data_ov001_02194c38;
extern int func_ov001_0217f534(uint32_t h);
extern uint8_t *func_ov000_021653e4(uint8_t *p, int n);
extern int func_ov000_021654e8(uint32_t h, uint8_t *dst, int n, int flag);
extern void func_ov001_0217f344(int n);
extern int func_ov001_0217f860(uint8_t *p, int n);
extern void func_02090398(uint8_t *dst, uint8_t *src, int n);

int func_ov001_0217f3a0(void)
{
    uint32_t *g = data_ov001_021918a4;
    uint32_t h = g[1];
    int n;
    int r5;

    if (h == -1) {
        return 0;
    }
    if (data_ov001_02194c38.f2c != 5) {
        return 0;
    }
    if (func_ov001_0217f534(h) != 0) {
        do {
            int zero = 0;
            if (data_ov001_02194c38.f18 - data_ov001_02194c38.f08 < 0x80) {
                int cap = data_ov001_02194c38.f18;
                if (cap < 0x100) {
                    cap = 0x100;
                    data_ov001_02194c38.f18 = cap;
                } else {
                    cap = cap * 2;
                    data_ov001_02194c38.f18 = cap;
                }
                data_ov001_02194c38.f28 = func_ov000_021653e4(data_ov001_02194c38.f28, cap + 1);
                if (data_ov001_02194c38.f28 == 0) {
                    return 0;
                }
            }
            n = func_ov000_021654e8(g[1], data_ov001_02194c38.f28 + data_ov001_02194c38.f08,
                                    data_ov001_02194c38.f18 - data_ov001_02194c38.f08, zero);
            if (n <= 0) {
                func_ov001_0217f344(n);
                return zero;
            }
            data_ov001_02194c38.f08 += n;
            data_ov001_02194c38.f28[data_ov001_02194c38.f08] = (uint8_t)zero;
            r5 = func_ov001_0217f860(data_ov001_02194c38.f28, data_ov001_02194c38.f08);
            if (r5 == data_ov001_02194c38.f08) {
                data_ov001_02194c38.f08 = 0;
            } else {
                func_02090398(data_ov001_02194c38.f28, data_ov001_02194c38.f28 + r5,
                              data_ov001_02194c38.f08 - r5);
                data_ov001_02194c38.f08 -= r5;
            }
        } while (func_ov001_0217f534(g[1]) != 0);
    }
    if (data_ov001_021918a4[1] == -1) {
        return 0;
    }
    return 1;
}
