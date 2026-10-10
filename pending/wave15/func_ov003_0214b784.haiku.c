#include "ffc/types.h"

extern void func_02056858(void);

void func_ov003_0214b784(uint8_t *base, uint32_t idx) {
    uint32_t off = idx << 2;
    uint8_t *p = base + off;
    if (*(uint32_t *)(p + 0x400) != 0) {
        func_02056858();
        *(uint32_t *)(p + 0x400) = 0;
    }
}
