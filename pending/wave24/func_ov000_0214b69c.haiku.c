#include "ffc/types.h"

extern void (*data_ov000_0216bca4)(uint32_t);

void func_ov000_0214b69c(uint32_t r0, uint8_t *r1)
{
    uint8_t *r4 = *(uint8_t **)(r1 + 0xc);
    uint32_t avail = *(uint32_t *)(r4 + 0x828) - *(uint32_t *)(r4 + 0x82c);
    if (r0 >= avail) {
        if (*(uint32_t *)(r4 + 0x824) != 0) {
            data_ov000_0216bca4(*(uint32_t *)(r4 + 0x824));
        }
        *(uint32_t *)(r4 + 0x824) = 0;
        return;
    }
    *(uint32_t *)(r4 + 0x82c) = *(uint32_t *)(r4 + 0x82c) + r0;
}
