#include "ffc/types.h"

extern void func_ov001_02181714(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov001_02181978(uint32_t a, uint32_t b, uint32_t c);

void func_ov001_02181bec(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    if (d != 0) {
        func_ov001_02181714(a, b, c);
    } else {
        func_ov001_02181978(a, b, c);
    }
}
