#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } Blk4;
typedef struct { uint32_t a, b, c; } Blk3;
typedef struct { uint16_t h[9]; } HA;

void func_0201ce70(uint8_t *p, uint8_t *src)
{
    uint8_t *dst = *(uint8_t **)(p + 0x3c);
    *(HA *)dst = *(HA *)src;
    {
        uint32_t *sw = (uint32_t *)src;
        uint32_t *dw = (uint32_t *)dst;
        dw[5] = sw[5];
        dw[6] = sw[6];
        dw[7] = sw[7];
        dw[8] = sw[8];
        dw[9] = sw[9];
        dw[10] = sw[10];
        dw[11] = sw[11];
        dw[12] = sw[12];
        dw[13] = sw[13];
        dw[14] = sw[14];
        dw[15] = sw[15];
        *(Blk4 *)(dst + 0x40) = *(Blk4 *)(src + 0x40);
        *(Blk3 *)(dst + 0x50) = *(Blk3 *)(src + 0x50);
        dw[23] = sw[23];
        dw[24] = sw[24];
        dw[25] = sw[25];
        dw[26] = sw[26];
        dw[27] = sw[27];
        dw[28] = sw[28];
        dw[29] = sw[29];
        dw[30] = sw[30];
        dw[31] = sw[31];
        dw[32] = sw[32];
        dw[33] = sw[33];
        dw[34] = sw[34];
        dw[35] = sw[35];
        *(uint64_t *)(dst + 0x90) = *(uint64_t *)(src + 0x90);
    }
}
