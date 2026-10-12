/* cflags: -nothumb */
#include "ffc/types.h"

#define ST(x) do { *q = (uint16_t)(x); q = (uint16_t *)((uint8_t *)q + stride); } while (0)

void func_ov014_0214a190(uint32_t a0, uint32_t a1, uint32_t a2, uint16_t *q, uint32_t n, uint16_t v, int stride, uint32_t *idx, uint32_t *tab)
{
    uint32_t i;

    if (n != 0) {
        i = n;
        do {
            ST(v);
        } while (--i != 0);
    }
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);
    ST(v);
    ST(v);
    ST(tab[*idx++]);

    if (n != 3) {
        i = 3 - n;
        do {
            ST(v);
        } while (--i != 0);
    }
}
