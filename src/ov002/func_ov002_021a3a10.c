#include "ffc/types.h"

extern void *func_ov002_02196414(void *object);

uint32_t func_ov002_021a3a10(void *self) {
    void *p = *(void **)((uint8_t *)self + 0xf4);
    if (p != 0) {
        return *(uint32_t *)((uint8_t *)func_ov002_02196414(p) + 0x308);
    }
    return 0;
}
