#include "ffc/types.h"

void func_ov006_0219ed5c(int unused, uint32_t *out)
{
    uint32_t one = 1;
    uint32_t poly = 0xedb88320;
    int limit = one + 0xff;
    int i;
    int j;
    uint32_t c;
    uint32_t t;

    for (i = 0; i < limit; i++) {
        c = i;
        for (j = 0; j < 8; j++) {
            t = c;
            if (t & one) {
                t = c >> 1;
                c = t ^ poly;
            } else {
                c = c >> 1;
            }
        }
        *out++ = c;
    }
}
