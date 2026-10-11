#include "ffc/types.h"

extern void func_ov009_021a46c4(uint8_t *p, uint8_t i);
extern int func_ov005_021979d8(uint8_t *p);
extern void func_ov005_021974e4(uint32_t v);
extern void func_ov005_02197514(uint32_t v);

void func_ov009_021ad9cc(uint8_t *p)
{
    uint8_t i;
    for (i = 0; i < 5; i++) {
        func_ov009_021a46c4(p, i);
    }
    if (func_ov005_021979d8(p + 0x220)) {
        func_ov005_021974e4(*(uint32_t *)(p + 0x180));
    } else {
        func_ov005_02197514(*(uint32_t *)(p + 0x180));
    }
}
