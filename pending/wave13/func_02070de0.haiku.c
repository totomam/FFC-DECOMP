#include "ffc/types.h"

extern void func_02070cac(void *self, uint32_t arg);
extern uint8_t data_020b21b4[];

void *func_02070de0(void *self) {
    func_02070cac(self, 0x1302);
    *(void **)self = data_020b21b4;
    return self;
}
