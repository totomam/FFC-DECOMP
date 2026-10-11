#include "ffc/types.h"

extern uint8_t func_ov002_021a1e04(const void *object);
extern uint8_t func_ov002_021a1e0c(const void *object);
extern void *func_02015ba4(void *unused, uint32_t index);
extern void *data_020b8e44;

typedef struct { uint8_t pad[0xbc]; void *a; uint32_t b; } S;

uint16_t func_ov002_021ad084(S *p)
{
    if (func_ov002_021a1e04(p->a) == 0) return 0;
    if (func_ov002_021a1e0c(p->a) == 0) return 0;
    return *(uint16_t *)((uint8_t *)func_02015ba4(data_020b8e44, p->b) + 0x4e);
}
