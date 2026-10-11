#include "ffc/types.h"

extern char data_020b0c64[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} S4;

void func_020572d0(uint32_t *p, S4 s) {
    uint8_t *q = (uint8_t *)p;
    uint32_t v = p[3] & ~0xffu;
    uint32_t z = 0;
    q[0x15] = (uint8_t)z;
    q[0x13] = (uint8_t)z;
    q[0x14] = (uint8_t)z;
    p[7] = z - 1;
    p[9] = z - 1;
    p[3] = v;
    p[0] = (uint32_t)data_020b0c64;
    p[15] = s.a;
    p[16] = s.b;
    p[17] = s.c;
    p[11] = 1;
    p[12] = z;
    p[18] = s.d;
    q[0x15] = 1;
}
