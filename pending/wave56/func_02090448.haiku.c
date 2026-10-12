#include "ffc/types.h"

void func_02090448(uint8_t *p, int c, uint32_t n) {
    uint32_t w = (uint8_t)c;
    uint32_t words;
    if (n >= 32) {
        uint32_t al = (0 - (uint32_t)p) & 3;
        uint32_t *wp;
        uint32_t *q;
        uint32_t blocks;
        if (al != 0) {
            n -= al;
            do {
                *p++ = (uint8_t)w;
                al--;
            } while (al != 0);
        }
        if (w != 0) {
            w = w | ((w << 24) | (w << 16) | (w << 8));
        }
        wp = (uint32_t *)p;
        for (blocks = n >> 5; blocks != 0; blocks--) {
            wp[0] = w; wp[1] = w; wp[2] = w; wp[3] = w;
            wp[4] = w; wp[5] = w; wp[6] = w;
            q = wp + 7;
            wp += 8;
            *q = w;
        }
        words = (n & 31) >> 2;
        for (; words != 0; words--) {
            *wp++ = w;
        }
        p = (uint8_t *)wp;
        n &= 3;
    }
    while (n != 0) {
        *p++ = (uint8_t)w;
        n--;
    }
}
