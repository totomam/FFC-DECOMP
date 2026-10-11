#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b, uint32_t c);
extern int data_ov007_021c722c[];

void *func_ov007_021b8a08(void *p, uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t *self = (uint8_t *)p;

    func_020694ac(p, 0, 0, c);
    *(void **)self = data_ov007_021c722c;
    *(uint32_t *)(self + 0xb8) = 0;
    *(uint32_t *)(self + 0xbc) = 0;
    *(uint32_t *)(self + 0xc0) = 0;
    *(uint32_t *)(self + 0xd4) = a;
    *(uint32_t *)(self + 0xd8) = b;
    *(uint8_t *)(self + 0xdc) = 0;
    *(uint32_t *)(self + 0xe8) = c;
    return p;
}
