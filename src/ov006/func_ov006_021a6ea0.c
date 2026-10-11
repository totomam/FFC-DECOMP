#include "ffc/types.h"

extern int32_t func_ov006_021a3744(void);
extern void func_ov006_021b0600(int32_t);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021a6fe0(void);
extern void func_ov006_021a6a00(void);
extern void func_ov006_021a6ed8(void);

void func_ov006_021a6ea0(void)
{
    switch (func_ov006_021a3744()) {
    case 0:
        func_ov006_021b0600(7);
        func_ov006_021a64c8(func_ov006_021a6a00);
        break;
    case 1:
        func_ov006_021b0600(6);
        func_ov006_021a6fe0();
        func_ov006_021a64c8(func_ov006_021a6ed8);
        break;
    }
}
