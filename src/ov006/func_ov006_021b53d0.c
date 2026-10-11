#include "ffc/types.h"

extern void func_ov006_021b5078(void);
extern void func_ov006_021b3f0c(uint32_t v, uint32_t a);
extern uint8_t *data_ov006_021bc84c;

void func_ov006_021b53d0(uint32_t a)
{
    uint32_t idx = 0;
    uint8_t *base;
    uint32_t v;

    func_ov006_021b5078();
    base = data_ov006_021bc84c;
    if (a >= (uint32_t)base + 416) {
        idx = 1;
    }
    v = *(uint32_t *)(base + idx * 416 + 412);
    func_ov006_021b3f0c(v, a);
}
