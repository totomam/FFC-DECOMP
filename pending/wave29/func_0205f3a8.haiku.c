#include "ffc/types.h"

typedef struct {
    uint32_t pad0;
    uint32_t *base;
    uint32_t pad1[2];
    uint32_t n;
} S;

void func_0205f3a8(S *s, uint32_t a, uint32_t b) {
    uint32_t n = s->n;
    if (n != 0) {
        uint32_t *p = s->base;
        uint32_t ha = (a << 31) >> 3;
        uint32_t hb = (b << 31) >> 2;
        do {
            uint32_t v = *p;
            v &= 0xefffffff;
            v |= ha;
            v &= 0xdfffffff;
            v |= hb;
            *p = v;
            p += 10;
            n--;
        } while (n != 0);
    }
}
