#include "ffc/types.h"

extern int32_t func_ov000_02163a84(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov000_0215df50(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov000_0215dcb0(uint32_t a, uint32_t b, uint32_t c);

void func_ov000_0215dc88(uint32_t a, uint32_t b, uint32_t c)
{
    if (func_ov000_02163a84(a, b, c)) {
        func_ov000_0215df50(a, b, c);
    } else {
        func_ov000_0215dcb0(a, b, c);
    }
}
