#include "ffc/types.h"

extern void func_02075df8(void *a, uint32_t b, uint32_t c);

void func_02075dec(uint8_t *p, uint32_t x) {
    func_02075df8(p, *(uint32_t *)(p + 0x44), x);
}
