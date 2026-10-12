#include "ffc/types.h"

extern void *func_020424e0(void *p);
extern void func_ov003_0215183c(void *p);

void func_ov003_02168708(uint8_t *a)
{
    if (*(void **)((uint8_t *)func_020424e0(*(void **)(a + 0x14)) + 0x184) != 0) {
        if (*(void **)((uint8_t *)*(void **)((uint8_t *)func_020424e0(*(void **)(a + 0x14)) + 0x184) + 0x88) != 0) {
            func_ov003_0215183c(*(void **)((uint8_t *)*(void **)((uint8_t *)func_020424e0(*(void **)(a + 0x14)) + 0x184) + 0x88));
            return;
        }
    }
    if (*(void **)((uint8_t *)func_020424e0(*(void **)(a + 0x14)) + 0x180) != 0) {
        if (*(void **)((uint8_t *)*(void **)((uint8_t *)func_020424e0(*(void **)(a + 0x14)) + 0x180) + 0xa4) != 0) {
            func_ov003_0215183c(*(void **)((uint8_t *)*(void **)((uint8_t *)func_020424e0(*(void **)(a + 0x14)) + 0x180) + 0xa4));
        }
    }
}
