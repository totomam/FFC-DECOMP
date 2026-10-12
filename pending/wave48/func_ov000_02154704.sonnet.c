#include "ffc/types.h"


extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_02084ca4(uint8_t *a, uint8_t *b, uint32_t n);
typedef struct { int32_t a; int8_t *p1; int32_t b; int8_t *p3; } T;
extern T data_ov000_02169aa0;
extern uint8_t data_ov000_0216968c[];
extern uint8_t data_ov000_02169699[];

void func_ov000_02154704(uint8_t *in, uint8_t *out)
{
    uint8_t tmp[13];
    int i, j;

    for (i = 0; i < 13; i++) {
        uint32_t idx = (uint32_t)(func_0209a76c(i, 7) >> 32);
        out[i] = in[i] ^ in[idx + 13];
    }
    for (j = 0; j < 7; j++) {
        out[j + 3] ^= in[j + 13];
    }
    for (i = 0; i < 13; i++) {
        out[i] = (uint8_t)(out[i] ^ data_ov000_02169aa0.p1[i]);
    }
    func_02084ca4(out, tmp, 13);
    for (i = 0; i < 13; i++) {
        out[data_ov000_0216968c[i]] = tmp[i];
    }
    for (i = 0; i < 13; i++) {
        out[i] = (uint8_t)(out[i] ^ data_ov000_02169aa0.p3[i]);
    }
    for (i = 0; i < 13; i++) {
        uint8_t x = out[i];
        out[i] = (uint8_t)((data_ov000_02169699[(x >> 4) & 0xf] << 4) |
                           data_ov000_02169699[x & 0xf]);
    }
    for (j = 0; j < 3; j++) {
        uint8_t *p = out + j;
        out[j] ^= p[6];
        p[3] ^= p[9];
        p[6] ^= p[3];
        p[9] ^= out[j];
        out[12] = out[j] ^ out[12];
    }
}
