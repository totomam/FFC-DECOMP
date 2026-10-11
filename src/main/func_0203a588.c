#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t v);
extern uint8_t data_020ae8b4[];

void *func_0203a588(void *a, uint32_t b) {
    uint8_t *p = (uint8_t *)a;
    func_02056c9c(a, 0);
    *(uint8_t **)p = data_020ae8b4;
    *(uint8_t *)(p + 0x80) = 0;
    *(uint32_t *)(p + 0x84) = b;
    *(uint32_t *)(p + 0x88) = 0;
    *(uint8_t *)(p + 0x8c) = 1;
    return a;
}
