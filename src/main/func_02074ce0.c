#include "ffc/types.h"

extern void func_02074cf8(void *p, uint32_t v, uint32_t c, uint32_t d, uint8_t e);

void func_02074ce0(uint8_t *base, uint32_t idx, uint32_t c, uint32_t d, uint8_t e) {
    uint32_t v = *(uint32_t *)(base + (idx << 2) + 0x30);
    func_02074cf8(base, v, c, d, e);
}
