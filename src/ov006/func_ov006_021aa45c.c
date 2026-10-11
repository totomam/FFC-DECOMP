#include "ffc/types.h"

extern uint8_t func_ov006_021b1420(void);
extern void func_ov006_021b0600(int32_t v);
extern void func_ov006_021b13f8(void);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021aa498(void);
extern uint8_t *data_ov006_021bc780;

void func_ov006_021aa45c(void)
{
    uint8_t v = func_ov006_021b1420();
    data_ov006_021bc780[0x2a] = v;
    switch (data_ov006_021bc780[0x2a]) {
    case 0:
        func_ov006_021b0600(7);
        break;
    case 1:
        func_ov006_021b0600(0xe);
        break;
    default:
        return;
    }
    func_ov006_021b13f8();
    func_ov006_021a64c8(func_ov006_021aa498);
}
