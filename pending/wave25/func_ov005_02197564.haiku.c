#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef void (*VFnP)(void *self, Pair v);

void func_ov005_02197564(uint8_t *p)
{
    int i;
    for (i = 0; i < 3; i++) {
        void *obj = *(void **)(p + 0x84 + (i << 2));
        Pair *q = (Pair *)(p + 0x94 + (i << 3));
        VFnP fn = (VFnP)((void **)(*(void **)obj))[3];
        fn(obj, *q);
    }
}
