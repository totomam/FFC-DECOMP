#include "ffc/types.h"

extern uint32_t data_ov000_0216e294;
extern int32_t func_02086fe4(void *p);
extern void func_02086fbc(void *p);

void func_ov000_0215570c(void) {
    uint8_t *base = *(uint8_t **)((uint8_t *)&data_ov000_0216e294 + 4);
    if (*(uint32_t *)(base + 0x1384) == 0) {
        return;
    }
    if (func_02086fe4(base + 0x1318) != 0) {
        return;
    }
    base = *(uint8_t **)((uint8_t *)&data_ov000_0216e294 + 4);
    func_02086fbc(base + 0x1318);
}
