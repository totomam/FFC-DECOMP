#include "ffc/types.h"

extern void func_02007564(void *p);

void func_02006618(uint8_t *p)
{
    if (p[0] != 0) {
        func_02007564(p + 0x2bb8);
    }
}
