#include "ffc/types.h"

extern uint8_t func_ov006_021b1420(void);
extern void func_ov006_021b0600(int32_t v);
extern void func_ov006_021b13f8(void);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021aac70(void);
extern uint8_t *data_ov006_021bc784;

void func_ov006_021aac38(void)
{
    int32_t m;
    data_ov006_021bc784[0x15] = func_ov006_021b1420();
    switch (data_ov006_021bc784[0x15]) {
    case 0:
        m = 7;
        break;
    case 1:
        m = 14;
        break;
    default:
        return;
    }
    func_ov006_021b0600(m);
    func_ov006_021b13f8();
    func_ov006_021a64c8((void *)func_ov006_021aac70);
}
