#include "ffc/types.h"

extern int func_ov003_02153ce8(void *obj, uint32_t a0, uint32_t a1, uint32_t b0, uint32_t b1, uint8_t *c, uint8_t *c4);

int func_ov003_02148b20(uint8_t *self, uint32_t *a, uint32_t *b, uint8_t *c) {
    void *p = *(void **)(self + 0x9c);
    if (p != 0) {
        return func_ov003_02153ce8(p, a[0], a[1], b[0], b[1], c, c + 4);
    }
    return 0;
}
