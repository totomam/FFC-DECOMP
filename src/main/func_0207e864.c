#include "ffc/types.h"

extern int32_t func_0208bd70(uint8_t *p);
extern int32_t func_0207e7e4(uint8_t *p, int32_t n);

int32_t func_0207e864(uint8_t *p)
{
    int32_t r;
    int32_t i;

    r = func_0208bd70(p);
    i = func_0207e7e4(p, r);
    if (i >= 0) {
        if (p[i] == 0x2f || p[i] == 0x5c) {
            r = i;
            p[i] = 0;
        }
    }
    return r;
}
