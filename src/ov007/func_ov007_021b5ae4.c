#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov007_021c6b54[];

void *func_ov007_021b5ae4(void *p, uint32_t arg)
{
    uint8_t *b = (uint8_t *)p;
    uint8_t i;

    func_020694ac(p, 0, 0);
    *(void **)p = data_ov007_021c6b54;
    b[0x12c] = 0;
    *(uint32_t *)(b + 0x138) = arg;
    b[0x13c] = 1;
    b[0x13d] = 0;
    i = 0;
    do {
        b[0x12d + i] = 0xff;
        i++;
    } while (i < 10);
    return p;
}
