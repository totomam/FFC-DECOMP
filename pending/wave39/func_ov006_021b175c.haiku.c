#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7f8;
extern uint8_t data_ov006_021b8a18[];
extern uint8_t data_ov006_021b8a04[];
extern uint8_t data_ov006_021b8a7e[];
extern uint8_t data_ov006_021b8a80[];

extern void *func_ov006_021b3bf8(void *p, int x);
extern void func_ov006_021b3e20(int a, int b, void *c);
extern void func_ov006_021b3cec(void *p, int a, uint16_t b, uint16_t c, int d);
extern void func_ov006_021b3d84(void *p, int a, int b);

void func_ov006_021b175c(int a) {
    uint8_t **pp;
    uint32_t idx;
    uint8_t *tb;
    void *r;

    pp = &data_ov006_021bc7f8;
    r = func_ov006_021b3bf8(*(void **)(*pp + (a << 2) + 8), 0);
    idx = (*pp)[0x1c];
    func_ov006_021b3e20(0, data_ov006_021b8a18[idx * 2 + a] + 1, r);

    idx = (*pp)[0x1c];
    tb = data_ov006_021b8a04 + idx * 2;
    func_ov006_021b3cec(*(void **)(*pp + (a << 2) + 8), -1,
                        *(uint16_t *)(data_ov006_021b8a7e + (idx << 3) + (tb[a] << 2)),
                        *(uint16_t *)(data_ov006_021b8a80 + (idx << 3) + (tb[a] << 2)),
                        -1);
    func_ov006_021b3d84(*(void **)(*pp + (a << 2) + 8), -1, 0);
}
