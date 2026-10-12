#include "ffc/types.h"

extern void *func_ov004_021530bc(void *a);
extern void func_ov004_02153598(void *a, uint32_t mode, uint32_t b);

typedef void (*VFn)(void *);

uint32_t func_ov004_02154f6c(uint8_t *a, uint32_t b) {
    uint32_t r = 0;
    uint32_t *p = (uint32_t *)func_ov004_021530bc(a);
    uint32_t x = (p[2] ^ p[1]) & p[1];
    if (x & 0x400 || x & 0x20 || x & 0x10) {
        uint32_t idx = *(uint32_t *)(a + 4 * b + 0x100);
        void **arr = (void **)(a + b * 0x34 + 0x120);
        void *obj = arr[idx];
        ((VFn)(*(void ***)obj)[5])(obj);
        x = (p[2] ^ p[1]) & p[1];
        func_ov004_02153598(a, (x & 0x10) ? 6 : 7, b);
        r = 1;
    }
    return r;
}
