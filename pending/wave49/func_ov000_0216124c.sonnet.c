#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern uint64_t func_020882cc(void);
extern uint64_t func_0209a6d4(uint64_t a, uint64_t b);
extern int func_ov000_02163408(void);
extern uint8_t *func_ov000_0216361c(void);
extern int func_ov000_021604ec(uint32_t v);
extern void func_ov000_021613f0(void);
extern uint8_t *func_ov000_02163634(int i);
extern void func_ov000_02161084(int a, int b);
extern void func_ov000_02161450(void);
extern void func_ov000_021605d8(int a);

int func_ov000_0216124c(void)
{
    uint8_t *g;
    uint64_t t;
    int st;
    int i;
    int k;
    uint8_t b;
    uint8_t *p;
    uint32_t z;
    int m;
    uint32_t *w;

    k = 0x61c;
    if (*(uint32_t *)(func_ov000_02163350() + k) == 8 ||
        *(uint32_t *)(func_ov000_02163350() + k) == 0x13 ||
        *(uint32_t *)(func_ov000_02163350() + k) == 0x17 ||
        *(uint32_t *)(func_ov000_02163350() + k) == 0x14) {
        uint64_t n = func_020882cc();
        uint64_t d;
        g = func_ov000_02163350();
        k = 0x658;
        d = n - *(uint64_t *)(g + k);
        t = func_0209a6d4(d << 6, 0x82ea);
        z = 0;
    } else {
        return 1;
    }

    st = *(int *)(func_ov000_02163350() + (k - 0x3c));

    switch (st) {
    case 8:
        g = func_ov000_02163350();
        if (*(uint64_t *)(g + (k + 0x18)) < t) {
            func_ov000_02163408();
            g = func_ov000_02163350();
            k -= 0xdc;
            *(uint32_t *)(g + k) = z;
            if (func_ov000_021604ec(*(uint32_t *)func_ov000_0216361c()) == 0) {
                return z;
            }
        }
        break;

    case 0x13:
        if (t > 0x1770ULL) {
            g = func_ov000_02163350();
            g[k - 0x2c] = g[k - 0x2c] + 1;
            g = func_ov000_02163350();
            if (g[k - 0x2c] > 5) {
                g = func_ov000_02163350();
                g[k - 0x2c] = z;
                t = func_020882cc();
                g = func_ov000_02163350();
                *(uint64_t *)(g + k) = t;
                func_ov000_021613f0();
                break;
            }
            i = 1;
            if (func_ov000_02163408() > 1) {
                k -= 8;
                do {
                    p = func_ov000_02163634(i);
                    b = p[0x16];
                    g = func_ov000_02163350();
                    if (!(*(uint32_t *)(g + k) & (1u << b))) {
                        func_ov000_02161084(b, 2);
                    }
                    i++;
                } while (i < func_ov000_02163408());
            }
            g = func_ov000_02163350();
            w = (uint32_t *)g + 0x155;
            b = ((uint8_t *)w)[0x16];
            g = func_ov000_02163350();
            w = (uint32_t *)g + 0x194;
            if (!(*w & (1u << b))) {
                func_ov000_02161084(b, 2);
            }
        }
        break;

    case 0x17:
        if (t > 0xbb8ULL) {
            func_ov000_02161450();
        }
        break;
    case 0x14:
        g = func_ov000_02163350();
        if (t > (uint64_t)(int)*(uint16_t *)(g + (k - 0x28))) {
            func_ov000_021605d8(3);
        }
        break;

    }

    return 1;
}
