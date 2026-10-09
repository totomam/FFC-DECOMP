#include "ffc/types.h"

typedef void (*fn_t)(void);

extern int32_t func_ov006_021a3744(void);
extern void func_ov006_021a3798(void);
extern void func_ov006_021a64c8(fn_t fn);
extern void func_ov006_021a6dc8(void);

void func_ov006_021a6da8(void)
{
    if (func_ov006_021a3744() != -2) {
        func_ov006_021a3798();
        func_ov006_021a64c8(func_ov006_021a6dc8);
    }
}
