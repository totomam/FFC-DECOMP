#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov004_0214f74c(void *a, uint32_t b);
extern void *func_ov004_0214536c(void *obj, uint32_t r1, uint32_t r2, uint32_t r3, uint32_t b, uint32_t ret, uint32_t c);

void *func_ov004_0214f6f4(uint8_t *a, uint32_t b, uint32_t c)
{
    void *r;
    uint32_t t;

    r = func_0205681c(0xb4);
    if (r != 0) {
        t = func_ov004_0214f74c(a, b);
        r = func_ov004_0214536c(r, *(uint32_t *)(a + 0x88), *(uint32_t *)(a + 0x90),
                                *(uint32_t *)(a + 0x94), b, t, c);
    }
    return r;
}
