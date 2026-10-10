#include "ffc/types.h"

extern void func_0200b65c(void *a, uint32_t b);

void func_02033420(uint8_t *p, uint32_t a, uint32_t b) {
    func_0200b65c(p + 0x98, a);
    func_0200b65c(p + 0x8c, b);
}
