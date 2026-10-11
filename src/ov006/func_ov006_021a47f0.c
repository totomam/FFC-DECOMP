#include "ffc/types.h"

extern uint8_t *data_ov006_021bc6fc;
extern void func_ov006_021a4cac(int x);
extern void func_ov006_021b0600(int x);

void func_ov006_021a47f0(void)
{
    uint8_t *p = data_ov006_021bc6fc;
    int v;
    if (p[0x11d] == 1) {
        v = 0;
    } else {
        v = 1;
    }
    func_ov006_021a4cac(v);
    func_ov006_021b0600(1);
}
