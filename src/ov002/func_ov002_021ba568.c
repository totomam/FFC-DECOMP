#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef uint32_t (*VFn)(void *, Pair);

uint32_t func_ov002_021ba568(uint8_t *self, uint32_t a, uint32_t b, uint32_t c) {
    void *obj = *(void **)(self + 0x80);
    VFn *vt = *(VFn **)obj;
    return vt[3](obj, *(Pair *)&a);
}
