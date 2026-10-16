#include "ffc/types.h"
extern uint32_t data_020ae664;
typedef struct { uint32_t a, b, c, d; } Q;
void func_ov011_021bd23c(uint8_t *d, uint8_t *s) {
    uint16_t *sp, *dp;
    uint8_t *sb, *db;
    uint32_t n;
    *(uint32_t*)d = (uint32_t)&data_020ae664;
    sp = (uint16_t*)(s + 0x10);
    dp = (uint16_t*)(d + 4);
    n = 0x15;
    do { uint16_t t = *sp; sp++; *dp = t; dp++; n--; } while (n != 0);
    *(uint32_t*)(d + 0x30) = *(uint32_t*)(s + 0x3c);
    sb = s + 0x40; db = d + 0x34; n = 0x14;
    do { uint8_t t = *sb; sb++; *db = t; db++; n--; } while (n != 0);
    *(Q*)(d + 0x48) = *(Q*)(s + 0x54);
}
