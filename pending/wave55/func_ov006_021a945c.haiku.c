#include "ffc/types.h"

struct Inner {
    uint8_t pad0[0x38];
    uint32_t w38;
    uint8_t pad1[0x50 - 0x3C];
    int8_t s50;
    uint8_t s51;
    uint8_t pad2[0x57 - 0x52];
    uint8_t f57;
    uint8_t pad3[0x59 - 0x58];
    uint8_t f59;
};

struct Outer {
    uint8_t st;
    uint8_t pad[3];
    struct Inner *in;
};

extern struct Outer data_ov006_021bc778;
extern uint8_t data_ov006_021b8acc[];
extern uint8_t data_ov006_021b8574[];

extern int func_ov006_021b4d94(void *p);
extern void func_ov006_021a3754(int x);
extern void func_ov006_021a9d04(void);
extern int func_ov006_021b4e54(void *p);
extern void func_ov006_021b0600(int x);
extern int func_ov006_021b4ca4(int x);
extern void func_ov006_021af680(void);
extern int func_ov006_021b4cd4(int x);
extern void func_ov006_021a9e48(void);
extern int func_ov006_021b4d04(int x);
extern void func_ov006_021a9e04(void);
extern void func_ov006_021a9d38(int x);

void func_ov006_021a945c(void)
{
    int i;

    if (data_ov006_021bc778.in->w38 != 0 || data_ov006_021bc778.in->f57 != 0) {
        return;
    }
    if (func_ov006_021b4d94(data_ov006_021b8acc)) {
        data_ov006_021bc778.in->s50 = -1;
        for (i = 0; (unsigned int)i < 5; i++) {
            if (func_ov006_021b4d94(&data_ov006_021b8574[i * 8])) {
                if (i < 4) {
                    data_ov006_021bc778.in->s50 = i;
                    break;
                }
                func_ov006_021a3754(1);
                data_ov006_021bc778.st = i;
                func_ov006_021a9d04();
                return;
            }
        }
    }
    if (func_ov006_021b4e54(data_ov006_021b8acc)) {
        for (i = 0; i < 4; i++) {
            if (func_ov006_021b4e54(&data_ov006_021b8574[i * 8])) {
                if (data_ov006_021bc778.in->s50 == i) {
                    if (i >= data_ov006_021bc778.in->s51) {
                        func_ov006_021b0600(9);
                    } else {
                        func_ov006_021a3754(1);
                        data_ov006_021bc778.st = i;
                        func_ov006_021a9d04();
                        return;
                    }
                }
                break;
            }
        }
    }
    if (func_ov006_021b4ca4(1)) {
        func_ov006_021a3754(1);
        func_ov006_021af680();
        return;
    }
    if (func_ov006_021b4ca4(2)) {
        func_ov006_021a3754(0);
        return;
    }
    if (func_ov006_021b4cd4(0x200)) {
        func_ov006_021a9e48();
        return;
    }
    if (func_ov006_021b4d04(0x200)) {
        data_ov006_021bc778.in->f59 = 0;
        return;
    }
    if (func_ov006_021b4cd4(0x100)) {
        func_ov006_021a9e04();
        return;
    }
    if (func_ov006_021b4d04(0x100)) {
        data_ov006_021bc778.in->f59 = 0;
        return;
    }
    if (func_ov006_021b4cd4(0x40)) {
        func_ov006_021a9d38(1);
        return;
    }
    if (func_ov006_021b4d04(0x40)) {
        data_ov006_021bc778.in->f59 = 0;
        return;
    }
    if (func_ov006_021b4cd4(0x80)) {
        func_ov006_021a9d38(3);
        return;
    }
    if (func_ov006_021b4d04(0x80)) {
        data_ov006_021bc778.in->f59 = 0;
    }
}
