#include "ffc/types.h"

extern void func_ov006_021af940(int32_t a, void *b);
extern int32_t func_ov006_021b4d34(void *p);

int32_t func_ov006_021af914(void)
{
    int32_t i;
    uint32_t buf[2];

    for (i = 2; i <= 3; i++) {
        func_ov006_021af940(i, buf);
        if (func_ov006_021b4d34(buf) != 0) {
            return i;
        }
    }
    return 0;
}
