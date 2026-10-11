#include "ffc/types.h"

extern int func_020692e8(uint32_t v);
extern void func_ov002_021b81fc(uint32_t v, int flag);

void func_ov002_021b8e2c(uint8_t *p)
{
    int i;
    for (i = 0; i < 6; i++) {
        uint8_t *base = p + (i << 2);
        if (*(uint32_t *)(base + 0xf8) != 0) {
            int flag = 1;
            if (func_020692e8(*(uint32_t *)(base + 0xf8)) != 0) {
                flag = 0;
            }
            func_ov002_021b81fc(*(uint32_t *)(base + 0xf8), flag);
        }
    }
}
