#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0207520c(void *obj, uint32_t v, uint32_t a, uint32_t b, uint32_t c);

void func_020757a4(uint8_t *self, uint32_t a, uint32_t b, uint32_t c) {
    void *p = func_0205681c(0x98);
    if (p != 0) {
        func_0207520c(p, *(uint32_t *)(self + 0x40), a, b, c);
    }
}
