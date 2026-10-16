#include "ffc/types.h"
extern uint32_t data_020ae644;
extern uint32_t data_020ae654;
typedef struct { uint32_t a[0x20]; } S;
void func_ov002_021aa7a0(uint32_t *d, uint8_t *s)
{
    uint32_t *p = (uint32_t *)s;
    int i;
    uint16_t *dh, *sh;
    d[0] = p[0xd8/4];
    d[1] = (uint32_t)&data_020ae644;
    d[2] = p[0xe0/4];
    d[3] = (uint32_t)&data_020ae644;
    d[4] = p[0xe8/4];
    d[5] = (uint32_t)&data_020ae644;
    d[6] = p[0xf0/4];
    d[7] = (uint32_t)&data_020ae644;
    d[8] = p[0xf8/4];
    d[10] = p[0x100/4];
    d[9] = (uint32_t)&data_020ae654;
    d[11] = p[0x104/4];
    dh = (uint16_t *)(d + 12);
    sh = (uint16_t *)(s + 0x108);
    for (i = 0x11; i != 0; i--) *dh++ = *sh++;
    d[0x54/4] = p[0x12c/4];
    d[0x58/4] = p[0x130/4];
    d[0x5c/4] = p[0x134/4];
}
