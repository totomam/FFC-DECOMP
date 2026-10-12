/* cflags: -nothumb */
#include "ffc/types.h"

void func_02085858(uint8_t *a, uint8_t *b)
{
    uint32_t v = *(uint32_t *)a;
    uint32_t sum = 0;
    int32_t n = (int32_t)(v >> 8);

    if ((v & 0xf) == 1) {
        b -= 2;
        a += 2;
        do {
            uint32_t t;
            a += 2;
            t = *(uint16_t *)a;
            n -= 2;
            sum += t;
            uint32_t r5 = sum & 0xff;
            sum += t >> 8;
            r5 += sum << 8;
            b += 2;
            *(uint16_t *)b = (uint16_t)r5;
        } while (n > 1);
        if (n == 1) {
            uint32_t t;
            a += 2;
            t = *(uint16_t *)a;
            sum += t;
            b += 2;
            *(uint16_t *)b = (uint16_t)(sum & 0xff);
        }
    } else {
        a += 2;
        b -= 2;
        do {
            a += 2;
            n -= 2;
            sum += *(uint16_t *)a;
            b += 2;
            *(uint16_t *)b = (uint16_t)sum;
        } while (n > 0);
    }
}
