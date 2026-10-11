#include "ffc/types.h"

extern uint8_t func_ov002_021a1e04(const void *object);
extern uint8_t func_ov002_021a1e0c(const void *object);
extern void *func_02015ba4(void *unused, uint32_t index);
extern void *data_020b8e44;

uint16_t func_ov002_021ad084(void *p)
{
    uint8_t *b = (uint8_t *)p;
    if (!func_ov002_021a1e04(*(void **)(b + 0xbc))) {
        return 0;
    }
    if (!func_ov002_021a1e0c(*(void **)(b + 0xbc))) {
        return 0;
    }
    return *(uint16_t *)((uint8_t *)func_02015ba4(data_020b8e44, *(uint32_t *)(b + 0xc0)) + 0x4e);
}
