#include "ffc/types.h"

extern int32_t func_ov007_021a0438(void *p);
extern uint32_t func_02034660(uint32_t v);

uint8_t func_ov007_021a0404(void *p)
{
    if (func_ov007_021a0438(p) != 0) {
        return 0;
    }
    return (uint8_t)func_02034660(*(uint32_t *)((uint8_t *)p + 0x144));
}
