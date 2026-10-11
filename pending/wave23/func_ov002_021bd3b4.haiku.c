#include "ffc/types.h"

extern void func_ov002_021bc804(uint32_t a, int b);

void func_ov002_021bd3b4(uint8_t *p) {
    int i = 0;
    int z = i;
    for (; i < 2; i++) {
        func_ov002_021bc804(*(uint32_t *)(p + i * 0x1c + 0x98), z);
    }
}
