#include "ffc/types.h"

extern uint32_t func_ov006_021b1420(void);
extern void func_ov006_021b0600(uint32_t);
extern void func_ov006_021b13f8(void);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021af3fc(void);
extern uint8_t data_ov006_021bc7cc;

void func_ov006_021af3c4(void)
{
    uint32_t r = func_ov006_021b1420();
    uint32_t arg;

    if (r != 0) {
        if (r != 1) {
            return;
        }
        data_ov006_021bc7cc = 3;
        arg = 6;
    } else {
        data_ov006_021bc7cc = 1;
        arg = 7;
    }
    func_ov006_021b0600(arg);
    func_ov006_021b13f8();
    func_ov006_021a64c8((void *)func_ov006_021af3fc);
}
