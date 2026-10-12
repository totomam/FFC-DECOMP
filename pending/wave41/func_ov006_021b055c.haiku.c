#include "ffc/types.h"

extern void *func_ov006_021b49e4(uint32_t size, uint32_t align);
extern void *func_ov006_021b3888(void *src, void *dst, uint32_t n);
extern void func_020796e8(void);
extern void func_0207a744(void *obj, void *p);
extern void func_0207b49c(uint32_t a);
extern void func_020799f4(void *p);
extern void func_02079838(uint32_t i, uint32_t v);
extern void func_02079848(uint32_t i, uint32_t v);
extern void func_0207985c(uint32_t i, uint32_t v);
extern void *func_ov006_021b570c(uint32_t a, void (*cb)(void), uint32_t b, uint32_t c);
extern void func_ov006_021b0658(void);
extern uint8_t data_ov006_021b9940[];
extern uint8_t *data_ov006_021bc7e8;

void func_ov006_021b055c(void)
{
    uint8_t local[4];
    int i;
    void *r;

    data_ov006_021bc7e8 = func_ov006_021b49e4(0xac, 4);
    r = func_ov006_021b3888(data_ov006_021b9940, local, 0x20);
    *(void **)(data_ov006_021bc7e8 + 0xa4) = r;
    func_020796e8();
    func_0207a744(data_ov006_021bc7e8, *(void **)(data_ov006_021bc7e8 + 0xa4));
    func_0207b49c(0);
    func_020799f4(data_ov006_021bc7e8 + 0xa0);
    for (i = 0; i < 0x20; i++) {
        func_02079838(i, 0x7f);
        func_02079848(i, 1);
        func_0207985c(i, 0);
    }
    r = func_ov006_021b570c(0, func_ov006_021b0658, 0, 200);
    *(void **)(data_ov006_021bc7e8 + 0xa8) = r;
}
