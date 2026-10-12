#include "ffc/types.h"

extern int8_t data_ov006_021bc7b4[];
extern uint8_t data_ov006_021b882f[];
extern uint8_t data_ov006_021b88a8[];
extern uint8_t data_ov006_021b88ac[];
extern uint8_t data_ov006_021b88aa[];
extern uint8_t data_ov006_021b88ae[];
extern int func_ov006_021a6540(int x);
extern void func_ov006_021b0600(int x);
extern void func_ov006_021a3d68(uint16_t a, uint16_t b, uint16_t c, uint16_t d);

void func_ov006_021ae530(uint8_t *p)
{
    int k = 1;
    int8_t cur = data_ov006_021bc7b4[k];
    int idx = func_ov006_021a6540(1);
    int8_t v = *(int8_t *)(p + ((cur << 2) + ((idx << 4) + (uint32_t)data_ov006_021b882f)));

    if (v == k - 2) {
        return;
    }
    if (v == 0) {
        data_ov006_021bc7b4[0] = cur;
    }
    if (v == -2) {
        data_ov006_021bc7b4[1] = data_ov006_021bc7b4[0];
    } else {
        data_ov006_021bc7b4[1] = v;
    }

    func_ov006_021b0600(8);

    {
        int m = 1;
        int a = func_ov006_021a6540(1);
        int b = func_ov006_021a6540(1);
        int c = func_ov006_021a6540(1);
        int d = func_ov006_021a6540(1);
        int s = data_ov006_021bc7b4[m] << 3;
        func_ov006_021a3d68(*(uint16_t *)(s + (uint32_t)data_ov006_021b88a8 + (a << 5)), *(uint16_t *)(s + (uint32_t)data_ov006_021b88ac + (b << 5)), *(uint16_t *)(s + (uint32_t)data_ov006_021b88aa + (c << 5)), *(uint16_t *)(s + (uint32_t)data_ov006_021b88ae + (d << 5)));
    }
}
