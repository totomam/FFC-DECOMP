#include "ffc/types.h"

void func_ov000_0214c5a0(uint8_t *p, uint8_t *buf, int len);

void func_ov000_0214c5a0(uint8_t *p, uint8_t *buf, int len)
{
    int k;
    uint8_t i;
    uint8_t j;
    uint8_t *s;

    i = p[0];
    j = p[1];
    s = p + 2;
    k = 0;
    if (len > 0) {
        do {
            uint8_t a;
            uint8_t b;
            i = (uint8_t)(i + 1);
            a = s[i];
            j = (uint8_t)(j + a);
            b = s[j];
            s[i] = b;
            s[j] = a;
            buf[k] ^= s[(uint8_t)(a + b)];
            k++;
        } while (k < len);
    }
    p[0] = i;
    p[1] = j;
}
