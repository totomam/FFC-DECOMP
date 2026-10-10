#include "ffc/types.h"

extern void *data_0213df18;
extern void func_0204e89c(uint32_t x, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_0203beb4(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    func_0204e89c(*(uint32_t *)((uint8_t *)data_0213df18 + 0x20), a, b, c, d);
}
