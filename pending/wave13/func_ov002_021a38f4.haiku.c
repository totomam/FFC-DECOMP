#include "ffc/types.h"

extern uint32_t func_ov002_021a16d4(const void *object);
extern void *func_ov002_02196414(void *object);

uint32_t func_ov002_021a38f4(void *object) {
    uint8_t *p = (uint8_t *)func_ov002_02196414((void *)func_ov002_021a16d4(object));
    return *(uint32_t *)(p + 0x308);
}
