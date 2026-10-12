#include "ffc/types.h"

extern void func_0206f22c(uint32_t *p, uint32_t n, uint32_t x);

void func_0206e38c(uint32_t *p, uint8_t *start, uint32_t a2, uint8_t *end, ...) {
    if (end != start) {
        int8_t buf[4];
        buf[3] = 0;
        func_0206f22c(p, (uint32_t)end - (uint32_t)start, *(uint32_t *)buf);
        {
            uint8_t *s = start;
            int8_t *d = (int8_t *)(p[0] + p[1]);
            while (s != end) {
                buf[2] = *s++;
                *d++ = buf[2];
            }
        }
        p[1] += (uint32_t)end - (uint32_t)start;
    }
}
