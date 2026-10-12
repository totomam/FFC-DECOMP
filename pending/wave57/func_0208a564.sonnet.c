#include "ffc/types.h"
typedef struct { uint32_t a, b; } Idx;
typedef struct { uint8_t t; uint8_t pad; uint16_t v[5]; } Out;
typedef struct { uint8_t pad[0x38]; uint32_t n; uint32_t w[1]; } Src;

int func_0208a564(Src *p, Out *out, Idx *ix) {
    for (; ix->a < p->n; ) {
        uint32_t w = p->w[ix->a];
        uint8_t *q;
        out->t = w;
        q = (uint8_t *)p + (w >> 8);
        switch (out->t) {
        case 1: case 2: case 3: case 4: case 5: {
            uint16_t *s = (uint16_t *)q;
            out->v[0] = s[0]; out->v[1] = s[1]; out->v[2] = s[2]; out->v[3] = s[3]; out->v[4] = s[4];
            ix->a++;
            return 1;
        }
        case 0x10:
            if (ix->b < (uint32_t)(q[1] - q[0] + 1)) {
                uint16_t *s = (uint16_t *)(q + ix->b * 12);
                uint16_t *d = (uint16_t *)out;
                d[0] = s[1]; d[1] = s[2]; d[2] = s[3]; d[3] = s[4]; d[4] = s[5]; d[5] = s[6];
                ix->b++;
                return 1;
            }
            break;
        case 0x11:
            if (ix->b < 8 && q[ix->b] != 0) {
                uint16_t *s = (uint16_t *)(q + ix->b * 12);
                uint16_t *d = (uint16_t *)out;
                d[0] = s[4]; d[1] = s[5]; d[2] = s[6]; d[3] = s[7]; d[4] = s[8]; d[5] = s[9];
                ix->b++;
                return 1;
            }
            break;
        }
        ix->b = 0;
        ix->a++;
    }
    return 0;
}
