#include "ffc/types.h"

extern void func_0205f3e0(void *a, void *b);

void func_ov005_021961f8(uint8_t *self, void *param)
{
    int i;

    for (i = 0; i < self[0x9c]; i++) {
        func_0205f3e0(*(void **)(*(uint8_t **)(*(uint8_t **)(self + 0x80 + i * 4) + 0x50) + 0x94), param);
        func_0205f3e0(*(void **)(*(uint8_t **)(*(uint8_t **)(self + 0x8c + i * 4) + 0x50) + 0x94), param);
    }

    if (*(uint8_t **)(self + 0x98) != 0) {
        func_0205f3e0(*(void **)(*(uint8_t **)(*(uint8_t **)(self + 0x98) + 0x50) + 0x94), param);
    }
}
