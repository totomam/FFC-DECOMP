#include "ffc/types.h"

extern void func_02015bc4(void *out, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *mar, uint32_t index);
extern void func_02052c04(void *mar);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t a;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Guard;

uint16_t func_ov007_021aee8c(uint16_t key, uint32_t sub)
{
    Guard g;
    uint16_t r = 0;
    uint32_t i;
    uint8_t *base;

    func_02015bc4(&g, data_020b8e44);
    for (i = 0; i < *(uint32_t *)((uint8_t *)func_02052d90(g.mar, g.idx) + 8); i++) {
        uint8_t *entry;
        base = (uint8_t *)func_02052d90(g.mar, g.idx);
        entry = base + *(uint32_t *)(base + *(uint32_t *)(base + 0xc) + i * 4);
        if (key == *(uint16_t *)entry) {
            entry += *(uint32_t *)(entry + 8);
            r = *(uint16_t *)(entry + sub * 2 - 2);
            break;
        }
    }
    Guard *gp = &g;
    if (gp->mar != 0) {
        if (gp->flag != 0) {
            func_02052d3c(gp->mar, gp->idx);
        }
        func_02052c04(gp->mar);
    }
    func_02053290(gp);
    return r;
}
