#include "ffc/types.h"

extern void func_02089c5c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0208a17c(void);
extern void func_0208a030(uint32_t a);
extern void func_0208a138(uint32_t a);

void func_0207a394(void *p0)
{
    uint32_t *p = (uint32_t *)p0;
    uint32_t r;

    if (((int32_t)(p[0x2c / 4] << 30) >> 31) != 0) {
        func_02089c5c(p[0x4c / 4], 0, 1u << p[0x48 / 4], 0);
        r = func_0208a17c();
        func_0208a030(1);
        func_0208a138(r);
    }
}
