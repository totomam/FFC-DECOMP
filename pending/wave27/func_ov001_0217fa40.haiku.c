#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t data_ov001_02194c38[];
extern Pair *func_ov001_0217efc8(uint32_t *obj, uint32_t key, uint32_t flag, uint32_t *va);

Pair func_ov001_0217fa40(uint32_t *obj, uint32_t key, Pair *(*cb)(uint32_t *, uint32_t, uint32_t *), ...)
{
    uint32_t *o = obj;
    uint32_t *va = (uint32_t *)&cb + 1;
    Pair *r;

    if (o == 0) {
        o = (uint32_t *)data_ov001_02194c38[3];
    }
    if (o == 0) {
        r = (Pair *)va;
    } else {
        r = cb((uint32_t *)o[3], key, va);
        if (r == 0) {
            r = func_ov001_0217efc8((uint32_t *)o[3], key, 1, va);
        }
    }
    return *r;
}
