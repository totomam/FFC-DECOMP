#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_020b209c[];

void *func_0206fb48(uint32_t param) {
    uint8_t *obj = (uint8_t *)func_0205681c(0x84);
    if (obj != 0) {
        func_02056c9c(obj, 0);
        *(uint8_t **)obj = data_020b209c;
        *(uint32_t *)(obj + 0x80) = param;
    }
    return obj;
}
