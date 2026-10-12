#include "ffc/types.h"

extern int func_ov006_021b3fb8(int x);
extern int func_ov006_021a6530(void);
extern void func_ov006_021a64d4(int a, int b);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021a6c54(void);
extern void func_ov006_021ad878(void);

void func_ov006_021a6c04(void)
{
    int r4;
    int r5;

    r5 = 1;
    if (func_ov006_021b3fb8(1) != 0) {
        return;
    }
    r4 = 0;
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    switch (func_ov006_021a6530()) {
    case 0:
        func_ov006_021a64d4(r4, r5);
        func_ov006_021a64c8(func_ov006_021a6c54);
        break;
    case 1:
        func_ov006_021a64d4(r5, r5);
        func_ov006_021a64c8(func_ov006_021ad878);
        break;
    }
}
