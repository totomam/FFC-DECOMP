#include "ffc/types.h"

extern void func_02023e48(uint32_t arg);

void func_0202d838(uint32_t p) {
    uint32_t q;
    q = *(uint32_t *)(p + 0x80);
    if (q != 0) {
        func_02023e48(*(uint32_t *)(q + 0x34));
        return;
    }
    q = *(uint32_t *)(p + 0x84);
    if (q != 0) {
        func_02023e48(*(uint32_t *)(q + 0x34));
    }
}
