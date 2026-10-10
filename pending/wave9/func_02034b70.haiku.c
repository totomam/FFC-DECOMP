#include "ffc/types.h"

extern void func_02061344(uint32_t v);
extern void func_02056db0(void *p);
extern uint8_t data_020ae3b0[];

void *func_02034b70(void *p) {
    *(uint8_t **)p = data_020ae3b0;
    func_02061344(*(uint32_t *)((uint8_t *)p + 0x84));
    func_02056db0(p);
    return p;
}
