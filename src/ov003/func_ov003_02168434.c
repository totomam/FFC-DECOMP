#include "ffc/types.h"

extern void *func_020424e0(void *);
extern void func_ov003_021504a4(void *);

void func_ov003_02168434(uint8_t *p) {
    if (func_020424e0(*(void **)(p + 0x14)) != 0) {
        if (*(void **)((uint8_t *)func_020424e0(*(void **)(p + 0x14)) + 0x180) != 0) {
            if (*(void **)((uint8_t *)*(void **)((uint8_t *)func_020424e0(*(void **)(p + 0x14)) + 0x180) + 0xa0) != 0) {
                func_ov003_021504a4(*(void **)((uint8_t *)*(void **)((uint8_t *)func_020424e0(*(void **)(p + 0x14)) + 0x180) + 0xa0));
            }
        }
    }
}
