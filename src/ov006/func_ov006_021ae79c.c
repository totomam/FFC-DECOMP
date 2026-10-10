#include "ffc/types.h"

extern int func_ov006_021b3fb8(int x);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021ae7c0(void);

void func_ov006_021ae79c(void)
{
    if (func_ov006_021b3fb8(1) == 0) {
        if (func_ov006_021b3fb8(0) == 0) {
            func_ov006_021a64c8(func_ov006_021ae7c0);
        }
    }
}
