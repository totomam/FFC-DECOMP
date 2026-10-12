#include "ffc/types.h"

void func_ov002_0219b16c(uint16_t *out, uint16_t *b, uint16_t *c)
{
    int i;
    int k;
    int j;

    for (i = 0; i < 32; i++) {
        k = 1;
        uint16_t *row = out + i * 16;
        do {
            uint16_t acc = 0;
            uint16_t bv = b[k];
            uint16_t cv = c[k];
            for (j = 0; j < 3; j++) {
                int s = 5 * j;
                int mask = 0x1f << s;
                uint16_t x = (uint16_t)((int)(bv & mask) >> s);
                uint16_t y = (uint16_t)((int)(cv & mask) >> s);
                int d = (int)y - (int)x;
                int v = (int)x + (i * d) / 32;
                acc |= (uint16_t)(v << s);
            }
            row[k + 2] = acc;
        } while (++k < 16);
    }
}
