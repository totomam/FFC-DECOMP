/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
int func_ov001_0217fc20(uint8_t *p)
{
    uint32_t first = p[0];
    uint32_t lo = first & 1;
    uint32_t s = 0;
    uint32_t i = 1;
    do {
        uint8_t *q = p + i;
        uint32_t prev = *(q - 1);
        uint32_t a = 1, b = 1, c;
        if (prev >= first) a = 0;
        if (first >= 0x4f) b = 0;
        c = (i ^ prev) & 1;
        s = lo ^ (s ^ c) ^ b;
        s ^= a;
        if (s != 0) {
            if ((*q & 1) == 0) return 0;
        } else if ((*q & 1) == 1) return 0;
        i++;
    } while ((int)i < 32);
    return 1;
}
