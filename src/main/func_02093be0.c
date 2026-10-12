#include "ffc/types.h"

int func_02093be0(uint8_t *p, int i) {
    uint8_t *cur = p + 5 + i;
    uint8_t *q;
    if (*cur > 5) return 1;
    if (*cur < 5) return -1;
    {
        uint8_t *end = p + 5 + p[4];
        q = cur + 1;
        while (q < end) {
            if (*q != 0) return 1;
            q++;
        }
    }
    {
        uint8_t *t = p + (i - 1);
        return (t[5] & 1) ? 1 : -1;
    }
}
