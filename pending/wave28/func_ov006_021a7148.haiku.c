#include "ffc/types.h"

extern int func_ov006_021a3744(void);
extern void func_ov006_021b0600(int);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021b11fc(int, int, int, int, int);
extern void func_ov006_021a37a8(void);
extern void func_ov006_021a7190(void);
extern void func_ov006_021a726c(void);

void func_ov006_021a7148(void)
{
    switch (func_ov006_021a3744()) {
    case 0:
        func_ov006_021b0600(7);
        func_ov006_021a64c8(func_ov006_021a7190);
        break;
    case 1:
        func_ov006_021b0600(6);
        func_ov006_021b11fc(0x18, 0, 1, -1, 0);
        func_ov006_021a37a8();
        func_ov006_021a64c8(func_ov006_021a726c);
        break;
    }
}
