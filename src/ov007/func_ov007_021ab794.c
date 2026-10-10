#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);

typedef void (*vfn1)(void *);
typedef void (*vfn3)(void *, uint32_t, uint32_t);

void func_ov007_021ab794(uint8_t *a, uint32_t b) {
    uint64_t r = func_0209a76c(b, 10);
    void *o = *(void **)(a + 0x84);
    void **vt = *(void ***)o;
    ((vfn3)vt[0x38 / 4])(o, (uint32_t)(r >> 32) + 1, 0);
    if (b > 9) {
        void *o2 = *(void **)(a + 0x8c);
        void **vt2 = *(void ***)o2;
        ((vfn1)vt2[0x28 / 4])(o2);
    } else {
        void *o2 = *(void **)(a + 0x8c);
        void **vt2 = *(void ***)o2;
        ((vfn1)vt2[0x2c / 4])(o2);
    }
}
