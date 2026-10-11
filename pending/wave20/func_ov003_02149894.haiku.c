#include "ffc/types.h"

extern uint32_t func_0202144c(void);
extern void func_020211d4(uint32_t a, uint32_t b);

void func_ov003_02149894(uint8_t *p, uint32_t a, uint32_t b)
{
    if (*(uint32_t *)(p + 0x1EC) == 0) {
        *(uint32_t *)(p + 0x1E8) = a;
        *(uint32_t *)(p + 0x1F0) = func_0202144c();
        func_020211d4(a, b);
    }
}
