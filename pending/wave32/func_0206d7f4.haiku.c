#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int x);
extern void func_02084ca4(void *src, void *dst, uint32_t n);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern uint8_t data_020b1d68;

void *func_0206d7f4(int unused, uint32_t b, void *c)
{
    uint8_t *p = (uint8_t *)func_0205681c(0x9c);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(void **)p = &data_020b1d68;
        *(uint32_t *)(p + 0x98) = b;
        if (c != 0) {
            func_02084ca4(c, p + 0x80, 0x18);
        } else {
            func_02084b2c(p + 0x80, 0, 0x18);
        }
    }
    return p;
}
