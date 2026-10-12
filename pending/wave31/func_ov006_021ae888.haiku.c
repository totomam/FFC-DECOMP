#include "ffc/types.h"

extern int32_t func_ov000_02152730(void);
extern void func_ov006_021a3f7c(void);
extern void func_ov006_021b0644(void);
extern void func_ov000_021527cc(void);
extern void func_ov006_021ab248(void);
extern void func_ov006_021b0600(int32_t);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021b5774(int32_t, int32_t);
extern uint8_t data_ov006_021bc7bc;
extern void func_ov006_021ae7dc(void);

void func_ov006_021ae888(int32_t p)
{
    int32_t r = func_ov000_02152730();
    int32_t code;
    if (r != 0) {
        func_ov006_021a3f7c();
        func_ov006_021b0644();
        if (r > 0) {
            data_ov006_021bc7bc = 1;
            code = 0x11;
        } else {
            func_ov000_021527cc();
            func_ov006_021ab248();
            code = 0x12;
        }
        func_ov006_021b0600(code);
        func_ov006_021a64c8((void *)func_ov006_021ae7dc);
        func_ov006_021b5774(0, p);
    }
}
