#include "ffc/types.h"

extern void func_02084ca4(uint8_t *src, uint8_t *dst, uint32_t n);
extern const uint8_t data_ov000_02169734[];
extern const uint8_t data_ov000_0216971c[];

uint64_t func_ov000_02158920(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3)
{
    union { uint64_t q; uint8_t b[8]; } u;
    uint8_t out[8];
    int i;
    uint64_t a = (uint64_t)p0 & 0xffffULL;
    uint64_t b = (uint64_t)p1 & 0xffffffULL;
    uint64_t c = p2 & 1;
    uint64_t d = p3 & 3;
    u.q = (a << 27) | (b << 3) | d;
    u.q |= c << 2;
    for (i = 0; i < 6; i++) u.b[i] ^= 0xd6;
    for (i = 0; i < 5; i++) {
        uint8_t x = u.b[i];
        u.b[i] = (data_ov000_02169734[(x >> 4) & 0xf] << 4) | data_ov000_02169734[x & 0xf];
    }
    func_02084ca4(out, u.b, 8);
    for (i = 0; i < 5; i++) u.b[data_ov000_0216971c[i]] = out[i];
    u.b[7] = 0; u.b[6] = 0; u.b[5] &= 7;
    u.q <<= 1;
    u.b[0] |= (u.b[5] >> 3) & 1;
    for (i = 0; i < 6; i++) u.b[i] ^= 0x67;
    u.b[7] = 0; u.b[6] = 0; u.b[5] &= 7;
    return u.q;
}
