#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);
extern void *data_0213e01c[];

void func_02054114(uint32_t idx, void *node) {
    volatile uint8_t local;
    uint8_t flag = 0;
    uint16_t old;

    old = *(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = 0;
    if (old != 0) {
        flag = 1;
    }
    local = flag;
    func_02056bc0(data_0213e01c[idx], node);
    (void)*(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = local;
}
