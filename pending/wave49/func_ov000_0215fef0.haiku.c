#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern uint64_t func_020882cc(void);
extern int func_ov001_02175ea8(uint32_t a, uint32_t b);
extern uint8_t *func_ov000_02163608(void);
extern uint32_t func_ov000_02159358(uint32_t a);
extern int func_ov000_0215eb30(int a, uint32_t b, uint32_t c, uint32_t d, uint32_t *e, uint32_t f);

int func_ov000_0215fef0(uint32_t r0, int r1) {
    uint32_t s0c = 0;
    uint32_t s8 = 0;
    uint32_t L[15];
    uint64_t pr;
    uint32_t lo, a;
    uint8_t *g, *x;
    uint32_t tmp;

    uint32_t k = 0x5d8;
    if (r1 != 0 || (*(uint32_t *)(func_ov000_02163350() + k) == 0 &&
                    *(uint16_t *)(func_ov000_02163350() + (k - 4)) == 0)) {
        *(uint32_t *)(func_ov000_02163350() + 0x638) = 1;
        pr = func_020882cc();
        g = func_ov000_02163350();
        *(uint32_t *)(g + 0x63c) = (uint32_t)pr;
        *(uint32_t *)(g + 0x640) = (uint32_t)(pr >> 32);
        *(uint32_t *)(func_ov000_02163350() + 0x67c) = 0;
        return 0;
    }

    if (*(uint8_t *)(func_ov000_02163350() + 0x15) == 0) {
        s0c = *(uint32_t *)(func_ov000_02163350() + 0x558);
        s8 = *(uint16_t *)(func_ov000_02163350() + 0x560);
        *(uint32_t *)(func_ov000_02163350() + 0x67c) = r0;
    } else {
        *(uint32_t *)(func_ov000_02163350() + 0x67c) = r0;
        if (func_ov001_02175ea8(*(uint32_t *)func_ov000_02163350(), r0) == 0) {
            s0c = *(uint32_t *)(func_ov000_02163350() + 0x558);
            s8 = *(uint16_t *)(func_ov000_02163350() + 0x560);
        }
    }

    if (*(uint8_t *)(func_ov000_02163350() + 0x15) == 3)
        goto ok;
    if (*(uint32_t *)(func_ov000_02163350() + 0x798) == 0)
        goto bad;
    if (func_ov001_02175ea8(*(uint32_t *)func_ov000_02163350(), r0) == 0)
        goto bad;
ok:
    *(uint8_t *)(func_ov000_02163350() + 0x7b6) = 0;
    a = 0x7530;
    goto join;
bad:
    *(uint8_t *)(func_ov000_02163350() + 0x7b6) = 5;
    a = 0x2ee0;
join:
    *(uint32_t *)(func_ov000_02163350() + 0x644) = a;
    pr = func_020882cc();
    lo = (uint32_t)pr;
    g = func_ov000_02163350();
    *(uint32_t *)(g + 0x648) = lo;
    *(uint32_t *)(g + 0x64c) = (uint32_t)(pr >> 32);
    *(uint32_t *)(func_ov000_02163350() + 0x638) = 0;

    x = func_ov000_02163608();
    L[0] = *(uint8_t *)(func_ov000_02163350() + 0x15);
    L[1] = *(uint32_t *)(x + 4);
    L[2] = *(uint16_t *)(x + 0xc);
    L[3] = *(uint32_t *)(x + 8);
    L[4] = *(uint16_t *)(x + 0xe);
    L[5] = *(uint8_t *)(x + 0x17);
    L[6] = *(uint32_t *)(func_ov000_02163350() + 0x798);
    L[7] = *(uint32_t *)(func_ov000_02163350() + 0x7b0);
    L[8] = *(uint32_t *)(func_ov000_02163350() + 0x7bc);

    g = func_ov000_02163350();
    tmp = func_ov000_02159358(lo - 2);
    *(uint32_t *)(g + 0x634) = tmp + 1;
    L[9] = *(uint32_t *)(func_ov000_02163350() + 0x634);
    L[10] = (*(uint32_t *)(func_ov000_02163350() + 0x5a4) != 0) ? 1 : 0;

    return func_ov000_0215eb30(1, r0, s0c, s8, L, 0xb);
}
