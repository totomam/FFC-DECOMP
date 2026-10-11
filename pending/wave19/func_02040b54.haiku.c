#include "ffc/types.h"

extern void *func_0203f784(void *self, uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020af2c8[2];

void func_02040b54(uint8_t *self) {
    void *n = func_0203f784(self, 0x16);
    func_02056bc0(self + 0x14, n);
    volatile uint32_t *d = data_020af2c8;
    uint32_t a = d[0];
    uint32_t b = d[1];
    *(uint32_t *)(self + 0x80) = a;
    *(uint32_t *)(self + 0x84) = b;
}
