#include "ffc/types.h"

extern void func_ov005_02196fc4(uint32_t a, uint32_t b);
extern uint32_t func_ov008_0219d9f8(uint8_t *obj, uint8_t idx);
extern uint32_t func_ov008_0219e2d0(uint8_t *obj, uint32_t idx);
extern void func_0205f2f0(void *object, uint32_t value);

void func_ov008_0219da58(uint8_t *a) {
    int i;

    func_ov005_02196fc4(*(uint32_t *)(a + 0xe8), *(uint32_t *)(a + 0x108));
    for (i = 0; i < 8; i++) {
        if (i + ((uint32_t)a[0x100] << 3) >= *(uint32_t *)(a + 0xf8)) {
            continue;
        }
        if (func_ov008_0219d9f8(a, (uint8_t)(i + ((uint32_t)a[0x100] << 3))) != 0) {
            goto L1;
        }
        if (*(uint32_t *)(a + 0x108) + func_ov008_0219e2d0(a, i + ((uint32_t)a[0x100] << 3)) <= *(uint32_t *)(a + 0x104)) {
            goto L1;
        }
        {
            void *o = *(void **)((uint8_t *)((void **)*(void **)(a + 0xc8))[i] + 0x9c);
            if (o != 0) {
                func_0205f2f0(*(void **)(*(uint8_t **)((uint8_t *)o + 0x50) + 0x94), 0);
            }
        }
        continue;
L1:
        {
            void *o = *(void **)((uint8_t *)((void **)*(void **)(a + 0xc8))[i] + 0x9c);
            if (o != 0) {
                func_0205f2f0(*(void **)(*(uint8_t **)((uint8_t *)o + 0x50) + 0x94), 1);
            }
        }
    }
}
