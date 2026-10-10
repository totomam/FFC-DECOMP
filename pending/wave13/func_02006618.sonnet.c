#include "ffc/types.h"

extern void func_02007564(void *p, int b, int c);

void func_02006618(uint8_t *p, int b, int c)
{
    if (p[0] != 0) {
        func_02007564(p + 0x2bb8, b, c);
    }
}
