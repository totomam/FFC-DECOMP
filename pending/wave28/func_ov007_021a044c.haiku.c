#include "ffc/types.h"

extern void func_02021338(uint32_t);
extern void func_ov007_021a0484(void *);
extern void func_ov007_021a04b4(void *);

void func_ov007_021a044c(void *self, void *arg)
{
    uint8_t *p = (uint8_t *)self;
    if (arg) {
        if (p[0x174]) {
            p[0x174] = 0;
        } else {
            func_02021338(0xcd);
        }
        if (arg == *(void **)(p + 0x13c)) {
            func_ov007_021a0484(self);
        } else {
            func_ov007_021a04b4(self);
        }
    }
}
