#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov007_021c28f4[];

void *func_ov007_0219abdc(void *a, uint32_t b) {
    func_02056c9c(a, 0);
    *(uint8_t **)a = data_ov007_021c28f4;
    *(uint32_t *)((uint8_t *)a + 0x80) = b;
    *(uint32_t *)((uint8_t *)a + 0x88) = 0;
    return a;
}
