#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern uint32_t func_ov001_021832d4(uint32_t x);
extern uint32_t func_ov001_02186884(uint32_t x);
extern uint32_t func_ov000_0214ef60(void);
extern int func_ov000_0215e88c(void);
extern uint32_t func_ov000_02159358(uint32_t x);
extern uint32_t func_ov001_02180824(uint32_t x);
extern uint32_t func_ov000_0215eb30(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t *e, uint32_t f);
extern uint32_t func_ov000_0215ea94(uint8_t *p);
extern uint32_t func_ov001_02180834(uint32_t x);
extern void func_ov000_02162780(uint32_t a, uint32_t b, uint32_t c, uint8_t *d);

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint16_t h0c;
    uint16_t h0e;
    uint32_t w10;
    uint16_t h14;
    uint8_t pad16;
    uint8_t b17;
} S;

uint32_t func_ov000_0215e8f8(int p, uint32_t pval, S *s)
{
    uint8_t *base;
    uint8_t *b1;
    uint32_t loc[2];
    volatile uint32_t flag;
    volatile uint32_t val = pval;
    uint32_t e;
    uint32_t r;
    uint32_t ret = 0;

    func_ov001_021832d4(*(uint32_t *)(func_ov000_02163350() + 0x618));

    if (p == 0) {
        b1 = func_ov000_02163350();
        base = func_ov000_02163350();
        val = ((uint32_t)*(uint16_t *)(base + 0x5fa) << 16) | (*(uint32_t *)(b1 + 0x678) & 0xffff);

        if (s->b17) {
            base = func_ov000_02163350();
            if (s->w4 == func_ov001_02186884(*(uint32_t *)(base + 0x5e0))) {
                s->w10 = s->w8;
                s->h14 = s->h0e;
                flag = 0;
            } else {
                flag = 1;
            }
        } else {
            func_ov000_0214ef60();
            if (func_ov000_0215e88c() != 0) {
                flag = 1;
            } else {
                s->w10 = s->w4;
                s->h14 = s->h0c;
                flag = 0;
            }
        }

        if (flag) {
            base = func_ov000_02163350();
            *(uint16_t *)(base + 0x5fa) = (uint16_t)func_ov000_02159358(0x10000);
            base = func_ov000_02163350();
            *(uint32_t *)(base + 0x618) = val;
        } else {
            loc[0] = func_ov000_0214ef60();
            loc[1] = func_ov001_02180824(*(uint32_t *)(*(uint32_t *)(func_ov000_02163350() + 4)));
            e = func_ov000_0215eb30(6, s->w0, s->w4, s->h0c, loc, 2);
            base = func_ov000_02163350();
            base[0x6d9] = 0;
            if (e != 0) {
                return 2;
            }
            base = func_ov000_02163350();
            *(uint32_t *)(base + 0x618) = 0;
        }
    } else {
        base = func_ov000_02163350();
        base[0x610] = 1;
        flag = 1;
        base = func_ov000_02163350();
        base[0x611] = ret;
        base = func_ov000_02163350();
        *(uint16_t *)(base + 0x612) = ret;
        base = func_ov000_02163350();
        *(uint32_t *)(base + 0x614) = ret;
        base = func_ov000_02163350();
        *(uint32_t *)(base + 0x618) = val;
    }

    base = func_ov000_02163350();
    base[0x610] = 0;
    base = func_ov000_02163350();
    base[0x611] = 0;
    base = func_ov000_02163350();
    *(uint16_t *)(base + 0x612) = s->h0c;
    base = func_ov000_02163350();
    *(uint32_t *)(base + 0x614) = s->w4;

    if (flag) {
        base = func_ov000_02163350();
        ret = func_ov000_0215ea94(base + 0x610);
        return ret;
    }
    base = func_ov000_02163350();
    r = func_ov001_02180834(*(uint32_t *)(*(uint32_t *)(base + 4)));
    base = func_ov000_02163350();
    func_ov000_02162780(0, r, 0, base + 0x610);
    base = func_ov000_02163350();
    *(uint32_t *)(base + 0x608) = 0;
    *(uint32_t *)(base + 0x60c) = 0;
    return ret;
}
