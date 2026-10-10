#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, int v);
extern char data_ov003_0217962c[];

void *func_ov003_02149738(uint32_t a, uint16_t b)
{
    uint8_t *p = (uint8_t *)func_0205681c(0x88);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(char **)p = data_ov003_0217962c;
        *(uint32_t *)(p + 0x80) = a;
        *(uint16_t *)(p + 0x84) = b;
    }
    return p;
}
