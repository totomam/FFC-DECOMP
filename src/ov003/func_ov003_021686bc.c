#include "ffc/types.h"

extern void *func_020424e0(void *);
extern void func_ov003_02151a24(void *);

void func_ov003_021686bc(void *a0) {
    uint8_t *p = (uint8_t *)a0;
    if (*(void **)((uint8_t *)func_020424e0(*(void **)(p + 0x14)) + 0x184) != 0) {
        if (*(void **)(*(uint8_t **)((uint8_t *)func_020424e0(*(void **)(p + 0x14)) + 0x184) + 0x88) != 0) {
            func_ov003_02151a24(*(void **)(*(uint8_t **)((uint8_t *)func_020424e0(*(void **)(p + 0x14)) + 0x184) + 0x88));
        }
    }
}
