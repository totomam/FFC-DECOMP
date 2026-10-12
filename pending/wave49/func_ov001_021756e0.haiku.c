#include "ffc/types.h"

extern uint32_t func_ov000_0216591c(void);
extern uint32_t func_ov000_021653d4(uint32_t x);
extern void func_ov000_021652a8();
extern void func_ov001_021752d8(uint32_t h);
extern int func_ov001_02171ff0(uint32_t *a, uint32_t h, uint32_t *pv);
extern int func_ov001_02171ac0(void *p, uint32_t h, uint32_t v);
extern int func_ov001_02171ee8(uint32_t *a);
extern int func_ov001_02175114(uint32_t *a, uint32_t h, uint32_t n);
extern uint8_t data_ov001_021900a4[];
extern uint8_t data_ov001_021900b4[];

void func_ov001_021756e0(uint32_t *a)
{
    uint32_t t0 = func_ov000_0216591c();
    uint32_t flag = 0;
    uint32_t elapsed = 0;
    uint32_t h;
    uint32_t now;
    int r;

    h = func_ov000_021653d4(0x2000);
    if (h == 0) {
        a[73] = 1;
        a[16] = 1;
        return;
    }
    func_ov000_021652a8(8, 3, 0x10, data_ov001_021900a4);
    while (a[73] == 0 && elapsed < a[98]) {
        flag = 0x2000;
        r = func_ov001_02171ff0(a, h, &flag);
        if (r == 1) {
            func_ov001_021752d8(h);
            if (a[116] == 0) {
                a[116] = func_ov000_0216591c();
                return;
            }
            if (func_ov000_0216591c() - a[116] < 0x7530) {
                return;
            }
            now = func_ov000_0216591c();
            func_ov000_021652a8(8, 0, 1, data_ov001_021900b4, now - a[116]);
            a[116] = 0;
            a[73] = 1;
            a[16] = 0x13;
            return;
        }
        a[116] = 0;
        if (r == 3) {
            func_ov001_021752d8(h);
            return;
        }
        if (r == 2) {
            a[73] = 1;
            if ((int)a[75] > 0 && (int)a[74] < (int)a[75]) {
                a[16] = 0xf;
            }
            func_ov001_021752d8(h);
            return;
        }
        if (a[102] != 0 && a[106] == 1) {
            if (func_ov001_02171ac0((uint8_t *)a + 0xc4, h, flag) == 0) {
                func_ov001_021752d8(h);
                return;
            }
            a[43] = a[44];
            if (func_ov001_02171ee8(a) == 0) {
                a[73] = 1;
                a[16] = 0x11;
                func_ov001_021752d8(h);
                return;
            }
            {
                int d = (int)(a[43] - a[44]);
                if (d != 0 && func_ov001_02175114(a, a[41] + a[44], d) == 0) {
                    func_ov001_021752d8(h);
                    return;
                }
            }
        } else {
            if (func_ov001_02175114(a, h, flag) == 0) {
                func_ov001_021752d8(h);
                return;
            }
        }
        now = func_ov000_0216591c();
        elapsed = now - t0;
    }
    func_ov001_021752d8(h);
}
