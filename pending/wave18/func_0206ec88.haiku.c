#include "ffc/types.h"

extern uint32_t data_0213df18;
extern void func_0204f848(uint32_t);

void func_0206ec88(uint8_t *p) {
    if (p[0x88]) {
        func_0204f848(data_0213df18);
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
    }
}
