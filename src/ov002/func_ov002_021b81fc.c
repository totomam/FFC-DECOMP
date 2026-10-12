#include "ffc/types.h"

void func_ov002_021b81fc(uint8_t *self, uint32_t idx) {
    uint32_t v = 0;
    uint32_t *p;
    void **obj;
    void **vt;

    switch (idx) {
    case 0:
        p = *(uint32_t **)(self + 0xa8);
        v = p[1];
        break;
    case 1:
        p = *(uint32_t **)(self + 0xa8);
        v = p[2];
        break;
    case 2:
        p = *(uint32_t **)(self + 0xa8);
        v = p[3];
        break;
    case 3:
        p = *(uint32_t **)(self + 0xa8);
        v = p[4];
        break;
    }

    obj = *(void ***)(self + 0x94);
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, v, 0);
}
