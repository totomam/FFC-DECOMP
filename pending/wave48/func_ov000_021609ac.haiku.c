#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern int32_t func_ov000_02163a9c(void);
extern void func_ov000_0216335c(uint32_t);
extern uint8_t *func_ov000_02163634(uint32_t);
extern int32_t func_ov000_021608b0(void);
extern void func_ov000_0215eb30(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t *, uint32_t);
extern int32_t func_ov000_0215fed0(void);

typedef struct {
    uint32_t w[10];
} Blk;

int32_t func_ov000_021609ac(void)
{
    uint32_t out[16];
    Blk loc;
    uint8_t *base;
    uint8_t *rec;
    uint8_t *lb;
    Blk *p6;
    int32_t n;
    uint8_t v;

    loc = *(Blk *)(func_ov000_02163350() + 0x554);
    p6 = (Blk *)&loc;
    lb = (uint8_t *)&loc;

    base = func_ov000_02163350();
    n = func_ov000_02163a9c();
    if ((int32_t)base[0x620] >= n - 1) {
        goto short_path;
    }
    n = func_ov000_02163a9c();
    base = func_ov000_02163350();
    v = (uint8_t)((n - 1) - base[0x620]);
    func_ov000_0216335c(0x10);
    rec = func_ov000_02163634(v);

    out[0] = *(uint32_t *)rec;
    out[1] = v;
    out[2] = rec[0x16];
    out[3] = *(uint32_t *)(rec + 4);
    out[4] = *(uint16_t *)(rec + 0xc);
    out[5] = *(uint32_t *)(rec + 8);
    out[6] = *(uint16_t *)(rec + 0xe);
    out[7] = rec[0x17];
    out[8] = *(uint32_t *)(rec + 0x24);
    goto common;

short_path:
    func_ov000_02163350()[0x620] = 0;
    return func_ov000_021608b0();

common:
    base = func_ov000_02163350();
    if (*(uint32_t *)(base + 0x61c) != 0x13) {
        func_ov000_0215eb30(8, p6->w[0], p6->w[1], *(uint16_t *)((uint8_t *)p6 + 0xc), out, 9);
        if (func_ov000_0215fed0() != 0) {
            return 0;
        }
        rec = func_ov000_02163634(v);
        out[0] = p6->w[0];
        out[1] = ((uint8_t *)p6)[0x16];
        func_ov000_0215eb30(0xa, *(uint32_t *)rec, *(uint32_t *)(rec + 4),
                            *(uint16_t *)(rec + 0xc), out, 2);
        if (func_ov000_0215fed0() != 0) {
            return 0;
        }
        func_ov000_02163350()[0x6d9] = 0;
    }
    return 0;
}
