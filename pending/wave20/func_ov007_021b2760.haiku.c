#include "ffc/types.h"

extern void func_ov007_021b2788(void *a, uint32_t b);
extern void *func_02056830(uint32_t x);
extern void *func_020903cc(void *object, uint32_t x, uint32_t y);

void func_ov007_021b2760(uint8_t *a, uint32_t b) {
    void *r;
    func_ov007_021b2788(a, b);
    r = func_02056830(b + 1);
    *(void **)(a + 0x2d0c) = r;
    *(uint32_t *)(a + 0x2d10) = b;
    func_020903cc(r, 0, b + 1);
}
