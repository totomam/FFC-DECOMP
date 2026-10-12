#include "ffc/types.h"

extern int func_ov013_021c012c(uint8_t *p);
extern void func_ov013_021c0188(uint8_t *p, uint32_t i);
extern void func_02021338(uint32_t code);

void func_ov013_021c00e0(uint8_t *p, uint32_t x)
{
    uint32_t *list = *(uint32_t **)(p + 0xc0);
    int i;
    for (i = 0; i < 8; i++) {
        if (x == list[i]) {
            uint32_t idx = (uint32_t)i + (*(uint32_t *)(p + 0x108) << 3);
            if (idx >= *(uint32_t *)(p + 0xec)) {
                return;
            }
            if (func_ov013_021c012c(p) != 0) {
                func_ov013_021c0188(p, (uint32_t)i);
            } else {
                func_02021338(0xc7);
            }
            return;
        }
    }
}
