#include "ffc/types.h"

extern int32_t func_0207e7e4(uint8_t *s);

int32_t func_0207e848(uint8_t *p)
{
    int32_t i;
    while ((i = func_0207e7e4(p)) >= 0 && p[i] != '/' && p[i] != '\\') {
    }
    return i;
}
