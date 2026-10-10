#include "ffc/types.h"

extern void *func_020548b4(void *object, uint32_t first, uint32_t second);
extern uint8_t data_020b0ca4[];
extern uint8_t data_020b0cb8[];

void *func_020578c0(void *object, uint32_t first) {
    uint8_t *p = (uint8_t *)object;
    func_020548b4(object, first, 0);
    p[0x1d] = 0;
    *(void **)(p + 0) = data_020b0ca4;
    *(void **)(p + 0x14) = data_020b0cb8;
    return object;
}
