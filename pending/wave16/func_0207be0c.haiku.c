#include "ffc/types.h"

extern void func_0207a0d8(void);

void func_0207be0c(uint8_t *p)
{
    uint32_t *cnt = (uint32_t *)(p + 0x128);
    if (*cnt != 0) {
        (*cnt)--;
        if (*cnt == 0) {
            func_0207a0d8();
        }
    }
}
