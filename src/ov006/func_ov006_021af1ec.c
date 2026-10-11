#include "ffc/types.h"

extern int func_ov006_021b3fb8(int);
extern void func_ov006_021a3724(void);
extern void func_ov006_021b3fd0(int, int, int, int);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021af234(void);
extern uint8_t data_ov006_021bc7cc;

void func_ov006_021af1ec(void)
{
    if (func_ov006_021b3fb8(1)) {
        return;
    }
    func_ov006_021a3724();
    if ((uint8_t)(data_ov006_021bc7cc + 0xfe) <= 1) {
        func_ov006_021b3fd0(3, 1, 1, 8);
    }
    func_ov006_021b3fd0(3, 0, 0x15, 8);
    func_ov006_021a64c8(func_ov006_021af234);
}
