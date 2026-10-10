/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_0207e770(uint32_t arg);

void func_ov014_02146cec(uint8_t *self)
{
    if (*(self + 0x10) == 1) {
        func_0207e770(*(uint32_t *)(self + 0xc));
    }
    *(self + 0x10) = 0;
}
