#include "ffc/types.h"

extern void func_02059bf8(void *p);

void func_ov009_0219da40(uint8_t *p)
{
    if (p[0x179] == 0) {
        func_02059bf8(*(void **)(*(uint8_t **)(p + 0x84) + 0x8c));
    }
}
