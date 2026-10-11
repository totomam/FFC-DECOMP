#include "ffc/types.h"

extern int func_ov009_021ad7d8(void *p);
extern void func_02021338(int x);
extern void func_ov009_021a47ac(void *p, uint8_t v);
extern void func_02036b3c(void *p, uint8_t v);
extern void func_0201f1a8(uint32_t a, uint8_t b, void *c);
extern uint32_t data_020b93b8;

void func_ov011_021c06a4(void *param)
{
    uint8_t *p = (uint8_t *)param;

    if (func_ov009_021ad7d8(param) != 0) {
        func_02021338(0xbb);
        func_ov009_021a47ac(param, p[0x278]);
        func_02036b3c(p + 0x220, p[0x278]);
        func_0201f1a8(data_020b93b8, p[0x2c9], p + 0x220);
    }
}
