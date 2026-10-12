#include "ffc/types.h"

extern int func_ov006_021a54e8(void);
extern void func_ov006_021a64c8(void (*cb)(void));
extern void func_ov006_021b11fc(int a, int b, int c, int d, int e);
extern uint8_t *data_ov006_021bc784;
extern void func_ov006_021aab10(void);
extern void func_ov006_021aadfc(void);
extern void func_ov006_021aac38(void);

void func_ov006_021aaab0(void)
{
    uint8_t v;

    if (func_ov006_021a54e8() != 0) {
        return;
    }
    v = data_ov006_021bc784[0x15];
    if (v == 0) {
        func_ov006_021a64c8(func_ov006_021aab10);
        return;
    }
    if (v == 2) {
        func_ov006_021b11fc(6, 3, 1, -1, 0);
        func_ov006_021a64c8(func_ov006_021aadfc);
        return;
    }
    func_ov006_021b11fc(0x47, 2, 1, -1, 0);
    func_ov006_021a64c8(func_ov006_021aac38);
}
