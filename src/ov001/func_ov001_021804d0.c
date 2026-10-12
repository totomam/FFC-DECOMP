#include "ffc/types.h"

extern int func_ov001_021803dc(uint32_t a, uint32_t b);
extern int func_ov001_021804ac(uint32_t a, uint32_t b);
extern int func_ov001_0218043c(uint32_t a, uint32_t b);
extern int func_ov001_02180480(uint32_t a, uint32_t b);

int func_ov001_021804d0(uint32_t a, uint32_t b)
{
    if (func_ov001_021803dc(a, b) == 0) {
        return 0;
    }
    if (func_ov001_021804ac(a, b) == 0) {
        return 0;
    }
    if (func_ov001_0218043c(a, b) == 0) {
        return 0;
    }
    if (func_ov001_02180480(a, b) != 0) {
        return 1;
    }
    return 0;
}
