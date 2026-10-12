#include "ffc/types.h"

typedef struct Out {
    uint8_t pad[0x33];
    uint8_t f33;
    uint8_t pad2[6];
    uint16_t f3a;
} Out;

void func_ov000_02146860(uint8_t *src, Out *out) {
    int32_t x;
    int32_t n;
    int32_t m;
    uint8_t op;
    int32_t b;

    out->f3a = 0x218;
    x = src[0xc] & 0xf0;
    src += 0x14;
    n = x / 4 - 20;
    m = n - 1;
    if (n <= 0) {
        goto end;
    }
    do {
        op = *src++;
        switch (op) {
        case 0:
            return;
        case 1:
            break;
        case 2:
            if (m <= 2) {
                goto end;
            }
            if (*src != 4) {
                goto end;
            }
            out->f3a = (uint16_t)((src[1] << 8) | src[2]);
            m -= 3;
            src += 3;
            break;
        case 4:
            if (m <= 0) {
                goto end;
            }
            if (*src != 2) {
                goto end;
            }
            out->f33 = 1;
            src++;
            m--;
            break;
        default:
            if (m <= 0) {
                goto end;
            }
            b = *src;
            if (b < 2) {
                goto end;
            }
            b = b - 1;
            m -= b;
            src += b;
            break;
        }
    } while (m-- > 0);
end:
    return;
}
