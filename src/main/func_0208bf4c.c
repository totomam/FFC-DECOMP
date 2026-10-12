#include "ffc/types.h"

void func_0208bf4c(uint32_t *p, uint32_t s, uint32_t e)
{
    uint32_t m;
    uint32_t em;
    if (s >= e) {
        return;
    }
    em = (1u << (e & 31)) - 1;
    do {
        uint32_t w = s >> 5;
        uint32_t nx;
        m = ~0u << (s & 31);
        nx = (w + 1) << 5;
        if (nx > e) {
            m &= em;
        }
        p[w] |= m;
        s = nx;
    } while (s < e);
}
