#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} P8;

typedef struct {
    P8 x;
    P8 y;
} P16;

void func_0201cf34(uint8_t *arg0, uint8_t *arg1) {
    uint8_t *src = *(uint8_t **)(arg0 + 0x3c);
    uint8_t *dst = arg1;
    uint32_t *s32 = (uint32_t *)src;
    uint32_t *d32 = (uint32_t *)dst;
    uint16_t *s16 = (uint16_t *)src;
    uint16_t *d16 = (uint16_t *)dst;
    int i = 9;

    do {
        *d16 = *s16;
        s16++;
        d16++;
        i--;
    } while (i != 0);

    d32[5] = s32[5];
    d32[6] = s32[6];
    d32[7] = s32[7];
    d32[8] = s32[8];
    d32[9] = s32[9];
    d32[10] = s32[10];
    d32[11] = s32[11];
    d32[12] = s32[12];
    d32[13] = s32[13];
    d32[14] = s32[14];
    d32[15] = s32[15];
    *(P16 *)(dst + 0x40) = *(P16 *)(src + 0x40);
    *(P8 *)(dst + 0x50) = *(P8 *)(src + 0x50);
    d32[22] = s32[22];
    d32[23] = s32[23];
    d32[24] = s32[24];
    d32[25] = s32[25];
    d32[26] = s32[26];
    d32[27] = s32[27];
    d32[28] = s32[28];
    d32[29] = s32[29];
    d32[30] = s32[30];
    d32[31] = s32[31];
    d32[32] = s32[32];
    d32[33] = s32[33];
    d32[34] = s32[34];
    d32[35] = s32[35];
    *(P8 *)(dst + 0x90) = *(P8 *)(src + 0x90);
}
