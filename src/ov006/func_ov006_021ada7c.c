#include "ffc/types.h"

extern int32_t func_ov006_021a3744(void);
extern int32_t func_ov006_021b0a58(void);
extern void func_ov006_021a3798(void);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021adaa4(void);

void func_ov006_021ada7c(void)
{
    if (func_ov006_021a3744() != -2) {
        if (func_ov006_021b0a58() != 1) {
            func_ov006_021a3798();
            func_ov006_021a64c8((void *)func_ov006_021adaa4);
        }
    }
}
