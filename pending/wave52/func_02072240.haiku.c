#include "ffc/types.h"

extern int32_t func_02071fe8(uint32_t a, uint32_t b);
extern int32_t func_02071f90(uint32_t a);
extern int32_t func_02071ff8(uint32_t a, uint32_t b);

struct Obj {
    uint32_t pad0;
    uint32_t pad1;
    uint32_t count;
    uint32_t pad3;
    uint32_t *items;
};

int32_t func_02072240(struct Obj *p, uint32_t arg1, uint32_t arg2, int32_t *out) {
    volatile int32_t ret = 0;
    int32_t idx;
    int32_t v;
    uint32_t i;

    v = func_02071fe8(arg2, arg1);
    idx = ret - 1;
    for (i = 0; i < p->count; i++) {
        if (func_02071f90(p->items[i]) != 0) {
            if (func_02071ff8(p->items[i], arg2) != 0 ||
                (v > 0 && func_02071fe8(p->items[i], arg1) == v)) {
                ret = 1;
                idx = (int32_t)i;
                break;
            }
        }
    }
    if (out != 0) {
        *out = idx;
    }
    return ret;
}
