#include "ffc/types.h"

extern uint32_t func_02036ce0(void *p);
extern uint32_t func_02036d5c(void *p);
extern uint32_t func_02036d48(void *p);
extern uint32_t func_02036d18(void *p);

void func_ov003_0215ac70(void *a, uint32_t *out1, uint32_t *out2)
{
    uint32_t r;

    if (func_02036ce0(a) == 3) {
        r = 0x10;
    } else if (func_02036ce0(a) == 4) {
        r = 0xf;
    } else if (func_02036d5c(a) != 0) {
        r = 0xd;
    } else if (func_02036d48(a) != 0) {
        r = 0xe;
    } else {
        r = 0;
    }
    *out1 = r;
    *out2 = func_02036d18(a);
}
