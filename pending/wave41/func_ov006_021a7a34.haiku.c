#include "ffc/types.h"

extern int func_ov006_021a3744(void);
extern void func_ov006_021b0600(int x);
extern void func_ov000_021585a8(uint64_t *p);
extern void func_ov006_021a376c(int x);
extern void func_ov006_021a7c04(void);
extern void func_ov006_021a64c8(void *f);
extern uint8_t data_ov006_021bc748[];
extern void func_ov006_021a7aa4(void);

void func_ov006_021a7a34(void)
{
    struct { uint64_t v; uint32_t pad[3]; } st;

    switch (func_ov006_021a3744()) {
    case 0:
        func_ov006_021b0600(7);
        break;
    case 1:
        func_ov000_021585a8(&st.v);
        if (data_ov006_021bc748[0] && st.v == 0) {
            func_ov006_021b0600(9);
            func_ov006_021a376c(-1);
            return;
        }
        func_ov006_021b0600(6);
        func_ov006_021a7c04();
        data_ov006_021bc748[1] = 1;
        break;
    default:
        return;
    }
    func_ov006_021a64c8(func_ov006_021a7aa4);
}
