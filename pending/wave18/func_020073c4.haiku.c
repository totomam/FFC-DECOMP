#include "ffc/types.h"

extern void func_020075c8(void *obj, uint32_t a, uint32_t b);
extern void func_02005fec(void *obj);

void func_020073c4(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    if (p[0x2c] == 0) {
        func_020075c8(p0, *(uint32_t *)(p + 0x38), 0);
    }
    func_02005fec(p + 0x2c);
}
