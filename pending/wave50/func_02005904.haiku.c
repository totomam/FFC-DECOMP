#include "ffc/types.h"

typedef void (*vfn_t)(int32_t *, void *);

void func_02005904(int32_t *out, void *obj) {
    int32_t v[4];
    uint32_t f;
    vfn_t *vt = *(vfn_t **)obj;
    vt[4](v, obj);

    f = *(uint32_t *)((uint8_t *)obj + 0x94);
    if ((f & 3) == 0) {
        out[0] = (v[0] + v[2]) >> 1;
    } else {
        if (f & 1) {
            out[0] = v[0];
        } else {
            out[0] = v[2];
        }
    }

    f = *(uint32_t *)((uint8_t *)obj + 0x94);
    if ((f & 0xc) == 0) {
        out[1] = (v[1] + v[3]) >> 1;
    } else {
        if (f & 4) {
            out[1] = v[1];
        } else {
            out[1] = v[3];
        }
    }
}
