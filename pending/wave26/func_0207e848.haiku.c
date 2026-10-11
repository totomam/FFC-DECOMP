#include "ffc/types.h"

extern int32_t func_0207e7e4(uint8_t *s);

int32_t func_0207e848(uint8_t *p)
{
    int32_t i;
    uint8_t c;
    for (;;) {
        i = func_0207e7e4(p);
        if (i < 0) {
            return i;
        }
        c = p[i];
        if (c == '/' || c == '\\') {
            return i;
        }
    }
}
