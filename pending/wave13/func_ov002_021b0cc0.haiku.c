#include "ffc/types.h"

void func_ov002_021b0cc0(uint8_t *p) {
    uint32_t *obj = *(uint32_t **)(p + 0x128);
    uint32_t *vt = *(uint32_t **)obj;
    void (*fn)(uint32_t *, int, int) = (void (*)(uint32_t *, int, int))vt[0x38 / 4];
    fn(obj, 2, 0);
}
