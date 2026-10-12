#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern uint32_t func_ov001_02180834(uint32_t a);
extern uint32_t func_ov001_02180824(uint32_t a);
extern uint32_t func_ov001_02183c0c(void *a, uint32_t b, uint32_t c, uint32_t d,
                                    uint32_t e, uint32_t f, uint32_t g, void *h,
                                    void *i, void *j, void *k, void *l, void *m, uint32_t n);
extern void func_ov001_021840ac(uint32_t a);
extern void func_ov000_02161a84(uint32_t a);
extern void func_ov001_02183e40(uint32_t a, void *b);
extern void func_ov001_02183df0(uint32_t a, void *b);
extern void func_ov001_02183e18(uint32_t a, void *b);
extern void func_ov000_02163b78(void);
extern void func_ov001_02184030(uint32_t a);
extern void func_ov000_021623fc(void);
extern void func_ov000_02162510(void);
extern void func_ov000_02162514(void);
extern void func_ov000_02162518(void);
extern void func_ov000_02162594(void);
extern void func_ov000_02162598(void);
extern void func_ov000_021625a0(void);
extern void func_ov000_021625bc(void);
extern void func_ov000_021626e4(void);

int func_ov000_0215c3a0(void)
{
    uint8_t *base;
    uint8_t *r6;
    uint32_t res;
    uint32_t r7;
    uint32_t sp28;
    uint32_t v688;
    uint32_t off;
    int r5;

    if (*(uint32_t *)(func_ov000_02163350() + 0x10)) {
        return 0;
    }
    off = 0x688 - 4;
    r5 = 0;
    for (;;) {
        base = func_ov000_02163350();
        r7 = func_ov001_02180834(*(uint32_t *)(*(uint32_t *)(func_ov000_02163350() + 4)));
        sp28 = func_ov001_02180824(*(uint32_t *)(*(uint32_t *)(func_ov000_02163350() + 4)));
        r6 = func_ov000_02163350();
        v688 = *(uint32_t *)(func_ov000_02163350() + 0x688);
        base = base + 0x10;
        res = func_ov001_02183c0c(base, r7, sp28, *(uint32_t *)(r6 + off), v688, 1, 1,
                                  func_ov000_021623fc, func_ov000_02162510,
                                  func_ov000_02162514, func_ov000_02162518,
                                  func_ov000_02162594, func_ov000_02162598, 0);
        if (res == 0) {
            break;
        }
        func_ov001_021840ac(*(uint32_t *)(func_ov000_02163350() + 0x10));
        *(uint32_t *)(func_ov000_02163350() + 0x10) = 0;
        if (res != 3 || r5 == 0) {
            func_ov000_02161a84(res);
            return res;
        }
        r5++;
        if (r5 < 1) {
            continue;
        }
        break;
    }
    *(uint32_t *)(func_ov000_02163350() + 0x5d8) = 0;
    *(uint16_t *)(func_ov000_02163350() + 0x5d4) = 0;
    func_ov001_02183e40(*(uint32_t *)(func_ov000_02163350() + 0x10), func_ov000_021625a0);
    func_ov001_02183df0(*(uint32_t *)(func_ov000_02163350() + 0x10), func_ov000_021625bc);
    func_ov001_02183e18(*(uint32_t *)(func_ov000_02163350() + 0x10), func_ov000_021626e4);
    func_ov000_02163b78();
    func_ov001_02184030(*(uint32_t *)(func_ov000_02163350() + 0x10));
    return res;
}
