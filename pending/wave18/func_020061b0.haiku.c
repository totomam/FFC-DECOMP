#include "ffc/types.h"

extern void func_0207a584(void *p, uint32_t x, uint32_t y, uint32_t z);
extern void func_0207b49c(uint32_t v);
extern void func_0207a7cc(void *p);

void func_020061b0(uint8_t *p, uint32_t b) {
    func_0207a584(p + 0x14, b, *(uint32_t *)(p + 0x10), 0);
    func_0207b49c(*(uint32_t *)(p + 0x10));
    func_0207a7cc(p + 0x14);
}
