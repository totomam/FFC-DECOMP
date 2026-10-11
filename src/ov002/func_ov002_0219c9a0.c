#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov002_021d4c98[];

void *func_ov002_0219c9a0(void *a, uint32_t b) {
    uint8_t *p = a;
    int i;
    func_02056c9c(p, 0);
    *(void **)p = data_ov002_021d4c98;
    *(uint32_t *)(p + 0x80) = b;
    for (i = 0; i < 3; i++) {
        *(uint32_t *)(p + 0x84 + i * 4) = 0;
    }
    *(uint32_t *)(p + 0x90) = 0;
    return p;
}
