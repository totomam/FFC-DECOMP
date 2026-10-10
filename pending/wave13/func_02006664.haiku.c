#include "ffc/types.h"

extern void func_02007450(void *p);

void func_02006664(uint8_t *p)
{
    if (*p != 0) {
        func_02007450(p + 0xB7 * 64);
    }
}
