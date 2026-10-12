#include "ffc/types.h"

extern int func_ov001_0217edd8(void *pp, uint32_t val, uint32_t *out);
extern void func_ov001_0217ef50(void *p, uint32_t b, void *c);
extern int func_ov001_021788f0(void *p, uint32_t b, uint32_t c);
extern uint8_t data_ov001_02190b34[];

int func_ov001_021799f0(void **pp) {
    uint32_t *s = (uint32_t *)pp[0];
    uint32_t v;
    int r = func_ov001_0217edd8(pp, s[0x7c], &v);
    if (r != 0) {
        return r;
    }
    if (v == 4) {
        func_ov001_0217ef50(pp, 0x107, data_ov001_02190b34);
        func_ov001_021788f0(pp, 4, 1);
        return 4;
    }
    if (v == 0) {
        return 0;
    }
    s[0x7d] = 2;
    return 0;
}
