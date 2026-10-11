#include "ffc/types.h"

extern int32_t func_0208da44(void *p);
extern void func_ov006_021b2140(void);
extern void func_ov006_021b2554(void);

int32_t func_ov006_021b2538(void) {
    if (func_0208da44((void *)func_ov006_021b2554) != 2) {
        func_ov006_021b2140();
        return 0;
    }
    return 1;
}
