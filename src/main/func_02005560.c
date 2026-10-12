#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02005178(void *mem, uint32_t arg1, uint32_t arg2, uint32_t arg3);

void func_02005560(uint8_t *self, uint32_t a, uint32_t b)
{
    void *r;

    if (*(void **)(self + (*(uint32_t *)(self + 0x8c) << 2) + 0xc) != 0) {
        return;
    }
    r = func_0205681c(0x18);
    if (r != 0) {
        r = func_02005178(r, *(uint32_t *)(self + 4), a, b);
    }
    *(void **)(self + (*(uint32_t *)(self + 0x8c) << 2) + 0xc) = r;
    *(uint32_t *)(self + 0x8c) = *(uint32_t *)(self + 0x8c) + 1;
}
