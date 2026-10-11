#include "ffc/types.h"

extern uint8_t *func_0204db34(uint8_t *p);
extern void func_02087024(uint8_t *p);

void func_0204db5c(uint8_t *a)
{
    uint8_t *r = func_0204db34(a);
    if (*(uint32_t *)(a + 0xc) != 0) {
        r = r + 0x1c;
        do {
            func_02087024(r);
        } while (*(uint32_t *)(a + 0xc) != 0);
    }
}
