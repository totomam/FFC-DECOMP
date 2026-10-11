#include "ffc/types.h"

typedef struct {
    uint16_t v;
    uint16_t pad[3];
} Ent;

extern Ent *data_ov006_021bc814[];
extern uint32_t func_ov006_021b3aa0(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021b3bf8(uint32_t a, uint32_t b);
extern void func_ov006_021b3e20(uint32_t a, uint32_t b, uint32_t c);

uint32_t func_ov006_021b3e88(uint32_t a, uint32_t b) {
    uint32_t r;
    Ent *p = data_ov006_021bc814[a];
    r = func_ov006_021b3aa0(a, p[b].v);
    func_ov006_021b3e20(a, b, func_ov006_021b3bf8(r, 0));
    return r;
}
