#include "ffc/types.h"
extern int func_ov000_02151a28(void *p);
extern int func_02092a04(const void *a, const void *b, uint32_t n);
int func_ov000_02151ae8(uint8_t *p, int n, uint8_t *e)
{
    int i;
    if (*(uint16_t *)(p + 0xa) == 0x20) {
        int r = func_ov000_02151a28(p);
        if (r > 0) return r;
    }
    i = 0;
    if (i < n) {
        uint32_t l8 = (uint8_t)*(uint16_t *)(p + 0xa);
        uint32_t len = *(uint16_t *)(p + 0xa);
        uint8_t *s = p + 0xc;
        do {
            if (l8 == e[3] && func_02092a04(s, e + 4, len) == 0)
                return e[1];
            e += 0x24;
            i++;
        } while (i < n);
    }
    return -1;
}
