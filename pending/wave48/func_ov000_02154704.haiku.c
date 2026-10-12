#include "ffc/types.h"


extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_02084ca4(uint8_t *a, uint8_t *b, uint32_t n);
extern uint32_t data_ov000_02169aa0[];
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
        int8_t *t = (int8_t *)data_ov000_02169aa0[1];
        out[i] = (uint8_t)(out[i] ^ t[i]);
    }
    func_02084ca4(out, tmp, 13);
    for (i = 0; i < 13; i++) {
        out[data_ov000_0216968c[i]] = tmp[i];
    }
    for (i = 0; i < 13; i++) {
        int8_t *t = (int8_t *)data_ov000_02169aa0[3];
        out[i] = (uint8_t)(out[i] ^ t[i]);
    }
    for (i = 0; i < 13; i++) {
        uint8_t x = out[i];
        out[i] = (uint8_t)((data_ov000_02169699[(x >> 4) & 0xf] << 4) |
                           data_ov000_02169699[x & 0xf]);
    }
    for (j = 0; j < 3; j++) {
        out[j] ^= out[j + 6];
        out[j + 3] ^= out[j + 9];
        out[j + 6] ^= out[j + 3];
        out[j + 9] ^= out[j];
        out[12] ^= out[j];
    }
}
