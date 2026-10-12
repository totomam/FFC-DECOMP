#include "ffc/types.h"

extern uint8_t *data_ov006_021bc784;
extern int func_ov006_021b3fb8(int);
extern void func_ov006_021a528c(void);
extern void func_ov006_021b0600(int);
extern void func_ov006_021a54b8(int);
extern int func_ov006_021aaa1c(int);
extern void func_ov006_021a54c8(int);
extern void func_ov006_021a54d8(int);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021aa830(void);

void func_ov006_021aa7d4(void)
{
    int z = 0;
    if (func_ov006_021b3fb8(1)) {
        return;
    }
    if (func_ov006_021b3fb8(z)) {
        return;
    }
    func_ov006_021a528c();
    func_ov006_021b0600(0x14);
    if (data_ov006_021bc784[0x14] == 0) {
        func_ov006_021a54b8(z);
        func_ov006_021a54d8(z);
    } else {
        if (func_ov006_021aaa1c(0x1a)) {
            func_ov006_021a54c8(z);
        }
        func_ov006_021a54d8(0);
    }
    func_ov006_021a64c8(func_ov006_021aa830);
}
