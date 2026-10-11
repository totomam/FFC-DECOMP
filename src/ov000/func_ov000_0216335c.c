#include "ffc/types.h"

extern void func_ov000_02163b50(uint32_t a, uint32_t b);
extern uint32_t data_ov000_0217020c;

void func_ov000_0216335c(uint32_t x) {
    uint32_t *p = *(uint32_t **)((char *)&data_ov000_0217020c + 4);
    if (*(uint32_t *)((char *)p + 0x61c) != x) {
        func_ov000_02163b50(*(uint32_t *)((char *)p + 0x61c), x);
    }
    p = *(uint32_t **)((char *)&data_ov000_0217020c + 4);
    *(uint32_t *)((char *)p + 0x61c) = x;
}
