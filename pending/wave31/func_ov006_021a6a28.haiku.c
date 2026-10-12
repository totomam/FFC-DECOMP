#include "ffc/types.h"

extern int32_t func_ov006_021b3fb8(int32_t x);
extern void func_ov006_021b57c4(int32_t a, int32_t b);
extern void func_ov006_021b3e08(int32_t x);
extern void func_ov006_021a3e68(void);
extern void func_ov006_021a3ce8(void);
extern void func_ov006_021a65f8(uint32_t v);
extern void func_ov006_021a65b4(void);
extern void func_ov006_021afd18(void);
extern void func_ov006_021a6558(void);
extern uint32_t data_ov006_021bc738;

void func_ov006_021a6a28(void)
{
    if (func_ov006_021b3fb8(1) != 0) {
        return;
    }
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    func_ov006_021b57c4(0, 0);
    func_ov006_021b57c4(1, 0);
    func_ov006_021b3e08(1);
    func_ov006_021b3e08(0);
    func_ov006_021a3e68();
    func_ov006_021a3ce8();
    func_ov006_021a65f8(data_ov006_021bc738);
    func_ov006_021a65b4();
    func_ov006_021afd18();
    func_ov006_021a6558();
}
