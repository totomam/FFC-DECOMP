#include "ffc/types.h"
extern void func_02007564(uint8_t *p, int a, int b);
void func_02006678(uint8_t *p, int a, int b)
{
    if (*p != 0) {
        func_02007564(p + 0x2DC0, a, b);
    }
}
