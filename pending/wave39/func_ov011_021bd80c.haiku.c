#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern char data_ov011_021cabe8[];

void *func_ov011_021bd80c(uint8_t *p, uint32_t a, uint8_t b, uint32_t c, uint8_t d)
{
    func_020694ac(p, 0, 0);
    *(void **)p = data_ov011_021cabe8;
    *(uint32_t *)(p + 0x10c) = c;
    *(uint32_t *)(p + 0x114) = a;
    *(uint32_t *)(p + 0x118) = 10;
    *(uint32_t *)(p + 0x11c) = 1;
    *(uint16_t *)(p + 0x120) = 0;
    *(uint16_t *)(p + 0x122) = 0;
    *(int16_t *)(p + 0x124) = 1 - 3;
    *(uint8_t *)(p + 0x126) = b;
    *(uint8_t *)(p + 0x127) = d;
    return p;
}
