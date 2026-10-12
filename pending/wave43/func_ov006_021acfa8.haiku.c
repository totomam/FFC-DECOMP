#include "ffc/types.h"

extern int32_t func_ov006_021a694c(void);
extern void func_ov006_021b0644(void);
extern void func_ov006_021a69bc(void);
extern void func_ov006_021a64c8(void (*cb)(void));
extern void func_ov006_021b0600(int32_t id);
extern void func_ov006_021b11fc(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e);
extern void func_ov006_021a37a8(void);
extern void func_ov006_021aced0(void);
extern void func_ov006_021ad03c(void);
extern uint8_t data_ov006_021bc79c;

void func_ov006_021acfa8(void)
{
    switch (func_ov006_021a694c()) {
    case 3:
        data_ov006_021bc79c = 1;
        func_ov006_021b0644();
        func_ov006_021a69bc();
        func_ov006_021a64c8(func_ov006_021aced0);
        break;
    case 4:
        data_ov006_021bc79c = 0;
        func_ov006_021b0644();
        func_ov006_021b0600(9);
        func_ov006_021b11fc(13, 1, 1, -1, 0);
        func_ov006_021a37a8();
        func_ov006_021a64c8(func_ov006_021ad03c);
        break;
    case 5:
        data_ov006_021bc79c = 0;
        func_ov006_021b0644();
        func_ov006_021b0600(0x12);
        func_ov006_021b11fc(14, 1, 1, -1, 0);
        func_ov006_021a37a8();
        func_ov006_021a64c8(func_ov006_021ad03c);
        break;
    }
}
