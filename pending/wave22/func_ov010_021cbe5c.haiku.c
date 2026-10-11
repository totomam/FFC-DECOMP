#include "ffc/types.h"

extern void *func_02015ba4(void *unused, uint32_t index);
extern void *data_020b8e44;

int func_ov010_021cbe5c(void *unused, uint32_t *a, uint32_t *b)
{
    uint8_t *p = (uint8_t *)func_02015ba4(data_020b8e44, *a);
    uint8_t *q = (uint8_t *)func_02015ba4(data_020b8e44, *b);
    if (*(uint16_t *)(p + 0x56) < *(uint16_t *)(q + 0x56)) {
        return 1;
    }
    return 0;
}
