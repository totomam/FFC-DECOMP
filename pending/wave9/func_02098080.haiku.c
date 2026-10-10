#include "ffc/types.h"

extern int32_t func_020979e0(void *p);
extern void func_0208fddc(void *p);

void func_02098080(uint8_t *p)
{
    if (func_020979e0(p) >= 0) {
        func_0208fddc(*(void **)(p + 0x3c));
    }
}
