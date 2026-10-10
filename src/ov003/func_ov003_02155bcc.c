#include "ffc/types.h"

void func_ov003_02155bcc(uint32_t *r0, uint8_t *r1) {
    uint32_t *r2 = *(uint32_t **)(r1 + 0xa8);
    r0[0] = r2[0x44 / 4];
    r0[1] = r2[0x48 / 4];
    r0[2] = r2[0x4c / 4];
    r0[3] = r2[0x50 / 4];
}
