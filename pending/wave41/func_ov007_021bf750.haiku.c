#include "ffc/types.h"

extern int func_ov007_021bf958(uint32_t *out);
extern void func_ov007_021bff24(void);
extern int func_ov007_021c0254(uint32_t h, void *p, void *cb, int x);
extern uint32_t func_ov007_021c0148(uint32_t h);
extern void func_ov007_021bf91c(uint32_t a, const void *b, uint32_t c);
extern int func_ov007_021bfddc(int a, uint32_t b);
extern void func_ov007_021bff10(int a);
extern void func_ov007_021bfa14(void);
extern uint32_t data_ov007_021c9bac[];
extern uint8_t data_ov007_021c9bc4[];
extern const uint8_t data_ov007_021c87d0[];

uint32_t func_ov007_021bf750(uint32_t a, uint32_t b, uint8_t c)
{
    uint32_t local;
    uint32_t idx;
    uint8_t *base;
    uint32_t r;

    if (func_ov007_021bf958(&local) != 0) {
        return local;
    }
    func_ov007_021bff24();
    idx = data_ov007_021c9bac[5];
    base = data_ov007_021c9bc4 + idx * 0x38;
    *(uint32_t *)(base + 4) = a;
    *(uint32_t *)(base + 8) = b;
    base[0xc] = c;
    r = func_ov007_021c0254(data_ov007_021c9bac[1], base + 4, (void *)func_ov007_021bfa14, 0);
    if (r == 0) {
        r = func_ov007_021c0148(data_ov007_021c9bac[1]);
        func_ov007_021bf91c(0x3fe, data_ov007_021c87d0, r);
        return func_ov007_021bfddc(10, r);
    }
    idx = data_ov007_021c9bac[5];
    *(uint32_t *)(data_ov007_021c9bc4 + idx * 0x38) = r;
    func_ov007_021bff10(10);
    return 0;
}
