#include "ffc/types.h"

extern int32_t func_02097c90(void *p);
extern void func_0208fddc(void *p);

void func_020980b4(uint8_t *p)
{
    if (func_02097c90(p) >= 0) {
        func_0208fddc(*(void **)(p + 0x3c));
    }
}
