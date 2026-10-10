#include "ffc/types.h"

extern int func_ov006_021a694c(void);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021b0644(void);
extern void func_ov006_021b0600(int v);
extern void func_ov006_021b11fc(int a, int b, int c, int d, int e);
extern void func_ov006_021a37a8(void);
extern uint8_t data_ov006_021bc798;
extern void func_ov006_021acbf4(void);
extern void func_ov006_021acd38(void);

void func_ov006_021accdc(void)
{
    switch (func_ov006_021a694c()) {
    case 2:
        data_ov006_021bc798 = 1;
        func_ov006_021a64c8(func_ov006_021acbf4);
        break;
    case 4:
        data_ov006_021bc798 = 0;
        func_ov006_021b0644();
        func_ov006_021b0600(9);
        func_ov006_021b11fc(0xd, 1, 1, 1 - 2, 0);
        func_ov006_021a37a8();
        func_ov006_021a64c8(func_ov006_021acd38);
        break;
    }
}
