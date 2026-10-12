#include "ffc/types.h"

extern void func_020849ac(uint32_t a, uint8_t *p, uint32_t n);
extern void func_ov000_02158a30(void *p);
extern void *func_ov000_02158848(void *p);
extern void func_02084ca4(void *dst, uint8_t *src, uint32_t n);
extern void func_ov006_021b0414(int x);
extern uint8_t *data_ov006_021bc7e4;

void func_ov006_021b03ac(void) {
    uint8_t local[0x14];
    void *r;
    int i;

    func_020849ac(0, data_ov006_021bc7e4, 0x400);
    for (i = 0; i < 3; i++) {
        data_ov006_021bc7e4[i * 0x100 + 0xe7] = 0xff;
    }
    func_ov000_02158a30(local);
    r = func_ov000_02158848(local);
    for (i = 0; i < 2; i++) {
        func_02084ca4(r, data_ov006_021bc7e4 + i * 0x100 + 0xf0, 14);
    }
    for (i = 0; i < 4; i++) {
        func_ov006_021b0414(i);
    }
}
