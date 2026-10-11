#include "ffc/types.h"

extern uint8_t *func_020235fc(void *p);

uint8_t *func_020249f4(uint8_t *self, int32_t idx) {
    uint8_t *base = func_020235fc(*(uint8_t **)(self + 0xe8));
    uint8_t *items = base + 4;
    int32_t count = *(int32_t *)base;
    if (idx >= count) {
        return 0;
    }
    return items + idx * 0x60 + 0x10;
}
