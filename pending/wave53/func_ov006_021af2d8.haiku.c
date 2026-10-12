#include "ffc/types.h"

extern void func_ov006_021b0644(void);
extern void func_ov006_021b0600(int x);
extern void func_ov006_021b11fc(int a, int b, int c, int d, int e);
extern void func_ov006_021a37a8(void);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021b0ef4(int x);
extern uint8_t data_ov006_021bc7cc;
extern void func_ov006_021af38c(void);
extern void func_ov006_021af1d4(void);
extern void func_ov006_021af3c4(void);

void func_ov006_021af2d8(uint32_t a)
{
    if (data_ov006_021bc7cc != 0) {
        return;
    }
    switch (a) {
    case 0:
        data_ov006_021bc7cc = 3;
        func_ov006_021b0644();
        func_ov006_021b0600(0x12);
        func_ov006_021b11fc(0x10, 1, 1, -1, 0);
        func_ov006_021a37a8();
        func_ov006_021a64c8((void *)func_ov006_021af38c);
        break;
    case 1:
        data_ov006_021bc7cc = 1;
        func_ov006_021b0644();
        func_ov006_021a64c8((void *)func_ov006_021af1d4);
        break;
    case 2:
        func_ov006_021b0644();
        func_ov006_021b0ef4(0);
        func_ov006_021b11fc(0x11, 0, 1, -1, 0);
        func_ov006_021a37a8();
        func_ov006_021a64c8((void *)func_ov006_021af3c4);
        break;
    case 3:
        data_ov006_021bc7cc = 2;
        func_ov006_021b0644();
        func_ov006_021b0600(9);
        func_ov006_021a64c8((void *)func_ov006_021af1d4);
        break;
    }
}
