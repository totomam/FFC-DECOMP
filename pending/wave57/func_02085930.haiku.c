#include "ffc/types.h"

uint32_t func_02085930(uint8_t *src, uint32_t len, uint8_t *dst)
{
    uint32_t inPos = 0;
    uint32_t outPos = 4;
    uint8_t lit = 0;
    uint32_t found = 0;
    uint32_t i;
    uint32_t k;

    *(uint32_t *)dst = (len << 8) | 0x30;

    while (inPos < len) {
        found = 0;
        for (k = 0; k < 0x80; k++) {
            if (inPos + lit >= len) {
                lit = (uint8_t)(len - inPos);
                break;
            }
            if (inPos + lit + 2 >= len) {
                lit++;
                continue;
            }
            if (src[inPos + k] == src[inPos + k + 1] &&
                src[inPos + k] == src[inPos + k + 2]) {
                found = 1;
                break;
            }
            lit++;
        }

        if (lit != 0) {
            if (outPos + lit + 1 >= len) {
                return 0;
            }
            dst[outPos] = (uint8_t)(lit - 1);
            outPos++;
            i = 0;
            while (i < lit) {
                dst[outPos] = src[inPos];
                inPos++;
                outPos++;
                i++;
            }
            lit = 0;
        }

        if (found) {
            uint32_t L = 3;
            uint32_t c = 3;
            while (c < 0x82) {
                if (inPos + L >= len) {
                    L = (uint8_t)(len - inPos);
                    break;
                }
                if (src[inPos] != src[inPos + L]) {
                    break;
                }
                L++;
                c++;
            }
            if (outPos + 2 >= len) {
                return 0;
            }
            dst[outPos] = (uint8_t)((L - 3) | 0x80);
            dst[outPos + 1] = src[inPos];
            inPos += L;
            outPos += 2;
        }
    }

    i = 0;
    if (outPos & 3) {
        do {
            dst[outPos + i] = 0;
            i++;
        } while ((outPos + i) & 3);
    }
    return outPos;
}
