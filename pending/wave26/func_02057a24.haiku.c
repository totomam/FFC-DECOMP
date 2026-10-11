#include "ffc/types.h"

extern void *func_020578c0(void *object, uint32_t value);
extern void *func_0209cec8(uint32_t a, uint32_t b, uint32_t c, void *d, void *e);
extern void func_02054714(void *p);
extern uint32_t data_020b0cdc[];
extern uint32_t data_020b0cf0[];
extern void func_02057658(void);
extern void func_0205763c(void);

void *func_02057a24(void *obj, uint32_t p1) {
    uint8_t *self = (uint8_t *)obj;
    func_020578c0(obj, 0);
    *(void **)self = data_020b0cdc;
    *(uint32_t *)(self + 0x24) = p1;
    *(void **)(self + 0x14) = data_020b0cf0;
    self[0x28] = 1;
    *(void **)(self + 0x20) = func_0209cec8(4, 0x2c, 8, func_0205763c, func_02057658);
    func_02054714(self + 0x14);
    return obj;
}
