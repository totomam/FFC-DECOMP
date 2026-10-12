#include "ffc/types.h"

extern int func_ov006_021a694c(void);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021b0644(void);
extern void func_ov006_021b0600(int v);
extern void func_ov006_021b11fc(int a, int b, int c, int d, int e);
extern void func_ov006_021a37a8(void);
extern uint8_t data_ov006_021bc7a4;
extern void func_ov006_021ad390(void);
extern void func_ov006_021ad4d4(void);

void func_ov006_021ad478(void)
{
    switch (func_ov006_021a694c()) {
    case 1:
        data_ov006_021bc7a4 = 1;
        func_ov006_021a64c8(func_ov006_021ad390);
        break;
    case 4:
        data_ov006_021bc7a4 = 0;
        func_ov006_021b0644();
        func_ov006_021b0600(9);
        func_ov006_021b11fc(0xd, 1, 1, 1 - 2, 0);
        func_ov006_021a37a8();
        func_ov006_021a64c8(func_ov006_021ad4d4);
        break;
    }
}
