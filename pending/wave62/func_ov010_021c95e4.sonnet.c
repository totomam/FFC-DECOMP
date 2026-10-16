#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
void func_ov010_021c95e4(uint8_t *d, uint8_t *s)
{
    uint16_t *sh = (uint16_t *)(s + 4);
    uint16_t *dh = (uint16_t *)(d + 0x224);
    uint32_t i = 0x15;
    uint8_t *sb, *db;
    do { uint16_t v = *sh++; *dh++ = v; } while (--i != 0);
    *(uint32_t *)(d + 0x250) = *(uint32_t *)(s + 0x30);
    sb = s + 0x34;
    db = d + 0x254;
    i = 0x14;
    do { uint8_t v = *sb++; *db++ = v; } while (--i != 0);
    *(P *)(d + 0x268) = *(P *)(s + 0x48);
}
