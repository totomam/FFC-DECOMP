#include "ffc/types.h"

extern int func_ov008_021a3278(void *self, uint8_t idx);
extern uint32_t func_ov008_021a3c78(void *self, uint8_t idx);
extern void func_02021338(uint32_t code);
extern void func_ov008_021a3284(void *self, uint8_t idx, int flag);
extern void func_ov008_021a3bc8(void *self);

typedef void (*vfn_t)(void *);

void func_ov008_021a3138(void *self, uint32_t val)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t i;
    uint32_t *arr = *(uint32_t **)(p + 0xd8);

    for (i = 0; i < 8; i++) {
        if (val == arr[i]) {
            uint8_t idx = (uint8_t)(i + (*(uint32_t *)(p + 0x114) << 3));
            int r6;

            if (idx >= *(uint32_t *)(p + 0x10c)) {
                continue;
            }
            r6 = (func_ov008_021a3278(self, idx) == 0);
            if (r6 != 0) {
                uint32_t r0 = func_ov008_021a3c78(self, idx);
                if (*(uint32_t *)(p + 0x120) + r0 > *(uint32_t *)(p + 0x11c)) {
                    func_02021338(0xc7);
                    return;
                }
            }
            func_ov008_021a3284(self, idx, r6);
            arr = *(uint32_t **)(p + 0xd8);
            if (r6 != 0) {
                void **obj = *(void ***)((uint8_t *)(uintptr_t)arr[i] + 0xa4);
                vfn_t fn = (vfn_t)(uintptr_t)((uint32_t *)(*obj))[0x28 / 4];
                fn(obj);
            } else {
                void **obj = *(void ***)((uint8_t *)(uintptr_t)arr[i] + 0xa4);
                vfn_t fn = (vfn_t)(uintptr_t)((uint32_t *)(*obj))[0x2c / 4];
                fn(obj);
            }
            func_ov008_021a3bc8(self);
            return;
        }
    }
}
