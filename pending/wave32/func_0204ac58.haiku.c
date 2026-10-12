#include "ffc/types.h"

typedef struct {
    uint8_t pad[10];
    int16_t cnt;
    void *sub;
} Obj;

extern int32_t func_ov000_0214f168(void *a, uint32_t *out);
extern Obj *func_ov000_0214ee74(void *a);
extern void func_0204ac98(uint32_t *dst, uint32_t src, int32_t n);

int32_t func_0204ac58(int32_t unused, void *p) {
    uint32_t out = 0;
    uint32_t local;
    Obj *o;
    if (func_ov000_0214f168(p, &local) != 0) {
        out = local;
    } else {
        o = func_ov000_0214ee74(p);
        if (o != 0 && o->cnt > 0) {
            func_0204ac98(&out, *(uint32_t *)o->sub, 4);
        }
    }
    return out;
}
