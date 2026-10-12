#include "ffc/types.h"

extern uint8_t data_ov006_021bb170[];
extern void func_ov006_021a0438(void);
extern int func_ov006_021a0318(int (*fn)(void), uint32_t arg);
extern void func_020871d8(int x);
extern int func_ov006_021a0460(void);
extern int func_ov006_021a0498(void);

int func_ov006_021a04d4(int a)
{
    int one = 1;
    int ret;
    int r7;
    int t;

    ((int *)data_ov006_021bb170)[0x70 / 4] = a;
    func_ov006_021a0438();
    r7 = a * 0xd0;
    ret = ((int (*)(void *))((int *)data_ov006_021bb170)[1])((void *)(r7 + 0x24d0 + a * 0xc0));
    ((int *)data_ov006_021bb170)[0x54 / 4] = ret;
    if (ret == 0) {
        return one - 2;
    }
    t = (ret + 0x1f) & ~0x1f;
    ((int *)data_ov006_021bb170)[0x40 / 4] = t;
    ((int *)data_ov006_021bb170)[0x5c / 4] = (t + r7 + 0x2490 + 0x1f) & ~0x1f;
    if (func_ov006_021a0318((int (*)(void))func_ov006_021a0498, t) == 0) {
        return one - 3;
    }
    {
        int z = 0, o = one, f = one, r5;
        while (f) {
            func_020871d8(10);
            r5 = func_ov006_021a0460();
            while (r5 != 0) {
                if (r5 == 4 || r5 == 5) {
                } else if (r5 == 6) {
                    f = z;
                    t = o;
                } else {
                    f = 0;
                    t = f - 2;
                }
                r5 = func_ov006_021a0460();
            }
        }
        return t;
    }
}
