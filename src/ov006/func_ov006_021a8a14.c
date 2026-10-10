#include "ffc/types.h"

extern int32_t func_ov006_021a3744(void);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021a8a30(void);

void func_ov006_021a8a14(void)
{
    if (func_ov006_021a3744() != -2) {
        func_ov006_021a64c8((void *)func_ov006_021a8a30);
    }
}
