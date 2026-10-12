#include "ffc/types.h"

extern void func_02023e54();

void func_0202c4fc(uint8_t *p, uint32_t arg)
{
    uint32_t i;

    if (*(uint32_t *)(p + 0x34) != 0) {
        func_02023e54(*(uint32_t *)(p + 0x34));
    }
    for (i = 0; i < *(uint32_t *)(p + 0xb20); i++) {
        if (*(uint32_t *)(p + i * 4 + 0x19c) != 0) {
            func_02023e54(*(uint32_t *)(p + i * 4 + 0x19c), arg);
        }
    }
}
