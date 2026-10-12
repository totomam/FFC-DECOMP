#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
} Pair;

typedef struct {
    uint32_t pad;
    uint8_t *ptr;
} Glob;

extern uint32_t func_ov006_021b0018(uint32_t idx);
extern uint32_t func_ov006_021b3e88(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b3cec(uint32_t h, int32_t x, uint16_t a, uint16_t b);
extern void func_ov006_021b3d84(uint32_t h, int32_t x, uint32_t y);
extern Glob data_ov006_021bc7ac;
extern Pair data_ov006_021b877c[];
extern uint8_t data_ov006_021b8770[];

void func_ov006_021ad970(void)
{
    int32_t i;
    uint32_t idx;
    uint32_t off;
    Pair *pp;

    for (i = 0; i < 3; i++) {
        idx = func_ov006_021b0018(i);
        if (idx == 0xff) {
            idx = 3;
        } else {
            off = i * 4;
            *(uint32_t *)(data_ov006_021bc7ac.ptr + off + 0x10) = func_ov006_021b3e88(0, 0x11, 1);
            pp = &data_ov006_021b877c[i + 3];
            func_ov006_021b3cec(*(uint32_t *)(data_ov006_021bc7ac.ptr + off + 0x10), -1, pp->a, pp->b);
            func_ov006_021b3d84(*(uint32_t *)(data_ov006_021bc7ac.ptr + off + 0x10), -1, 3);
        }

        off = i * 4;
        *(uint32_t *)(data_ov006_021bc7ac.ptr + off + 4) = func_ov006_021b3e88(0, data_ov006_021b8770[idx], 1);
        pp = (Pair *)((uint8_t *)data_ov006_021b877c + off);
        func_ov006_021b3cec(*(uint32_t *)(data_ov006_021bc7ac.ptr + off + 4), -1, pp->a, pp->b);
        func_ov006_021b3d84(*(uint32_t *)(data_ov006_021bc7ac.ptr + off + 4), -1, 3);
    }
}
