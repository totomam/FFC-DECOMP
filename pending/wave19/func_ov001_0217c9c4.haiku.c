#include "ffc/types.h"

extern int func_ov001_0217c8f0(uint32_t *p, uint32_t b, uint32_t *out);
extern void func_ov000_02168b00(uint32_t obj, uint32_t val);

void func_ov001_0217c9c4(uint32_t *p, uint32_t b)
{
    uint32_t val;
    uint8_t *obj = (uint8_t *)p[0];
    if (func_ov001_0217c8f0(p, b, &val)) {
        func_ov000_02168b00(*(uint32_t *)(obj + 0x5c8), val);
    }
}
