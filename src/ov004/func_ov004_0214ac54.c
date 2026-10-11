#include "ffc/types.h"

extern uint32_t func_02056830(uint32_t x);

void func_ov004_0214ac54(uint8_t *p)
{
    if (*(uint32_t *)(p + 0xa8) == 0) {
        *(uint32_t *)(p + 0xa8) = func_02056830(*(uint32_t *)(p + 0xb4) * *(uint32_t *)(p + 0xb8));
    }
    if (*(uint32_t *)(p + 0xac) == 0) {
        *(uint32_t *)(p + 0xac) = func_02056830(*(uint32_t *)(p + 0xb4) * *(uint32_t *)(p + 0xb8));
    }
}
