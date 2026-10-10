#include "ffc/types.h"

extern void func_02007564(uint8_t *p);

void func_02006678(uint8_t *p)
{
    if (*p != 0) {
        func_02007564(p + 0x2DC0);
    }
}
