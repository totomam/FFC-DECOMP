#include "ffc/types.h"

extern void func_02056c9c(void *p);
extern uint32_t data_ov009_021b0394[];
extern uint32_t data_020ae644[];
extern uint32_t data_020ae654[];

void *func_ov009_0219e46c(uint32_t *p, int unused, uint32_t val, uint32_t *src, uint8_t e)
{
    uint32_t *s;
    uint16_t *d;
    uint16_t *ss;
    int i;

    func_02056c9c(p);
    p[0] = (uint32_t)data_ov009_021b0394;
    p[0x20] = val;
    s = p + 0x21;
    s[0] = src[0];
    s[2] = src[2];
    s[4] = src[4];
    s[6] = src[6];
    s[1] = (uint32_t)data_020ae644;
    s[3] = (uint32_t)data_020ae644;
    s[8] = src[8];
    s[5] = (uint32_t)data_020ae644;
    s[7] = (uint32_t)data_020ae644;
    s[10] = src[10];
    s[9] = (uint32_t)data_020ae654;
    s[11] = src[11];
    d = (uint16_t *)s + 0x18;
    ss = (uint16_t *)src + 0x18;
    for (i = 0x11; i != 0; i--) {
        *d++ = *ss++;
    }
    s[0x15] = src[0x15];
    s[0x16] = src[0x16];
    s[0x17] = src[0x17];
    *((uint8_t *)p + 0xe4) = e;
    return p;
}
