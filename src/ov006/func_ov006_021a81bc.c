#include "ffc/types.h"

extern int func_ov006_021b4ca4(int x);
extern void func_ov006_021a3754(int x);

void func_ov006_021a81bc(void)
{
    if (func_ov006_021b4ca4(1)) {
        func_ov006_021a3754(1);
    }
    if (func_ov006_021b4ca4(2)) {
        func_ov006_021a3754(0);
    }
}
