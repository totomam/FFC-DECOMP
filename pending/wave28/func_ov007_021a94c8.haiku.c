#include "ffc/types.h"

extern void func_02021338(uint32_t x);

typedef void (*vfn_t)(void *self, int a, int b);
typedef struct VObj {
    vfn_t *vtbl;
} VObj;

void func_ov007_021a94c8(uint8_t *a, int b)
{
    uint8_t *p = *(uint8_t **)(a + 0x94);
    if (*(p + 0xd4) == 0) {
        func_02021338(0xba);
    }
    if (b != 0) {
        VObj *o = *(VObj **)(a + 0x98);
        o->vtbl[0x38 / 4](o, 2, 0);
    } else {
        VObj *o = *(VObj **)(a + 0x98);
        o->vtbl[0x38 / 4](o, 1, 0);
    }
}
