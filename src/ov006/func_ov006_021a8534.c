#include "ffc/types.h"

extern int32_t func_ov006_021a3744(void);
extern int32_t func_ov006_021a671c(void);
extern void func_ov006_021a3798(void);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021a855c(void);

void func_ov006_021a8534(void)
{
    if (func_ov006_021a3744() != -2) {
        if (func_ov006_021a671c() != 0) {
            func_ov006_021a3798();
            func_ov006_021a64c8((void *)func_ov006_021a855c);
        }
    }
}
