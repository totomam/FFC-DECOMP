#include "ffc/types.h"

extern void *func_ov006_021b49e4(uint32_t a, uint32_t b);
extern void func_ov006_021b46b4(void *a, uint32_t b, void *c);
extern uint32_t func_ov006_021b3e88(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b3cec(void *a, int32_t b, void *c, uint32_t d);
extern void func_ov006_021b3d84(void *a, int32_t b, uint32_t c);
extern uint32_t func_ov006_021b570c(uint32_t a, void *b, uint32_t c, uint32_t d);
extern void func_ov006_021af690(void);
extern void *data_ov006_021bc7dc;
extern uint8_t data_ov006_021b8908[];

void func_ov006_021af5ac(uint8_t a, uint8_t b, void *c, uint32_t d, uint32_t e)
{
    int32_t n;

    data_ov006_021bc7dc = func_ov006_021b49e4(0x20, 4);
    ((uint8_t *)data_ov006_021bc7dc)[0x1b] = a;
    ((uint8_t *)data_ov006_021bc7dc)[0x19] = b;
    ((uint8_t *)data_ov006_021bc7dc)[0x1a] = e;
    func_ov006_021b46b4(c, d, (uint8_t *)data_ov006_021bc7dc + 0x10);
    *(uint32_t *)data_ov006_021bc7dc = func_ov006_021b3e88(0, data_ov006_021b8908[a], 1);
    n = 1 - 2;
    func_ov006_021b3cec(*(void **)data_ov006_021bc7dc, n, c, d + e);
    func_ov006_021b3d84(*(void **)data_ov006_021bc7dc, n, 1);
    *(uint32_t *)((uint8_t *)data_ov006_021bc7dc + 0xc) = func_ov006_021b570c(0, (void *)func_ov006_021af690, 0, 0x80);
}
