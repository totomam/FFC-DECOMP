#include "ffc/types.h"
extern void func_02007450(void *p, int a);
void func_02006664(uint8_t *p, int a)
{
    if (*p != 0) {
        func_02007450(p + 0xB7 * 64, a);
    }
}
