#include "ffc/types.h"

extern void func_0200785c(void *p, int a, int b, int c);

void func_0200668c(uint8_t *p, int a, int b, int c)
{
    if (p[0] != 0) {
        func_0200785c(p + 0x2fc8, a, b, c);
    }
}
