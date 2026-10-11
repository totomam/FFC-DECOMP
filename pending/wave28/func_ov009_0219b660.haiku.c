#include "ffc/types.h"

extern void func_020692a4(void *object);

void func_ov009_0219b660(uint8_t *p) {
    if (*(void **)(p + 0x218) != 0 && p[0x205] != 0) {
        uint32_t i;
        for (i = 0; i < 3; i++) {
            func_020692a4(*(void **)(p + 0x21c + i * 4));
        }
    }
    *(int32_t *)(p + 0x22c) = -1;
    *(int32_t *)(p + 0x228) = -1;
}
