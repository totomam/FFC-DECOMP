#include "ffc/types.h"

extern void func_02084b2c(void *p, uint32_t a, uint32_t b);

void func_ov000_02156cdc(uint8_t *r0, uint32_t *r1)
{
    void (*f)(uint32_t, uint32_t, uint32_t) =
        *(void (**)(uint32_t, uint32_t, uint32_t))(r0 + 0x1014);
    if (*r1 != 0) {
        f(0, *r1, 0);
    }
    func_02084b2c(r1, 0, 0x10);
}
