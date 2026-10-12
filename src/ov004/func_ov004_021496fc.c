#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t func_ov004_0215311c(uint32_t a);
extern void func_02021bb0(uint32_t a, uint32_t b, uint32_t c);
extern void func_02021338(uint32_t a);
extern uint32_t data_ov004_021585c8[];
extern uint32_t data_ov004_021585d4;

void func_ov004_021496fc(uint8_t *p)
{
    int32_t loc = (int32_t)*(uint32_t *)(p + 0x8c) - 1;
    int32_t *pv;
    uint32_t r4;
    uint64_t q;
    uint32_t code;

    if ((int32_t)data_ov004_021585c8[3] < loc) {
        pv = &loc;
    } else {
        pv = (int32_t *)&data_ov004_021585d4;
    }
    r4 = (uint32_t)*pv;
    *(uint32_t *)(p + 0x8c) = r4;

    q = func_0209a76c(r4, 60);
    if ((uint32_t)(q >> 32) != 0) {
        return;
    }
    r4 = (uint32_t)func_0209a76c(r4, 60);

    func_02021bb0(func_ov004_0215311c(*(uint32_t *)(p + 0x88)), 1, r4);

    {
        uint32_t v6 = func_ov004_0215311c(*(uint32_t *)(p + 0x88));
        uint32_t t = (uint32_t)func_0209a76c(*(uint32_t *)(p + 0x90), 60);
        func_02021bb0(v6, 0, t - r4);
    }

    if (r4 == 0xf) {
        goto c8c;
    }
    if (r4 == 0x1e) {
        goto c8b;
    }
    if (r4 != 0x3c) {
        goto skip;
    }
    code = 0x8a;
    goto call;
c8b:
    code = 0x8b;
    goto call;
c8c:
    code = 0x8c;
call:
    func_02021338(code);
skip:

    if (r4 > 10) {
        func_02021338(0x8f);
        return;
    }
    if (r4 != 0) {
        func_02021338(0x90);
    }
}
