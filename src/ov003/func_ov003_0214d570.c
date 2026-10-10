#include "ffc/types.h"

void func_ov003_0214d570(void *a, uint8_t b)
{
    uint8_t *x = *(uint8_t **)((uint8_t *)a + 0x180);
    x[0xd8] = b;
    uint8_t *y = *(uint8_t **)((uint8_t *)a + 0x184);
    y[0xac] = b;
}
