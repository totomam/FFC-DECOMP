#include "ffc/types.h"

extern void func_ov006_021a8474(void);
extern void func_ov006_021a3bfc(uint32_t);
extern uint8_t func_ov006_021a3aa0(uint32_t, int32_t, uint32_t);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021a84c4(void);
extern uint8_t data_ov006_021bc760;

void func_ov006_021a8448(void) {
    func_ov006_021a8474();
    func_ov006_021a3bfc(0x20);
    data_ov006_021bc760 = func_ov006_021a3aa0(0x3c, -1, 0);
    func_ov006_021a64c8(func_ov006_021a84c4);
}
