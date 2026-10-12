#include "ffc/types.h"

typedef struct {
    uint32_t pad0;
    uint32_t pad1;
    uint32_t count;
    uint32_t pad3;
    void **items;
} FfcList;

extern int func_02071f90(void *item);
extern int func_02071ff8(void *item, uint32_t arg);
extern int func_02071f54(void *item, uint32_t arg);

int func_02072148(FfcList *p, uint32_t a, uint32_t *out) {
    int found = 0;
    int best = -1;
    uint32_t i = 0;
    for (; i < p->count; i++) {
        if (func_02071f90(p->items[i])) {
            if (func_02071ff8(p->items[i], a)) {
                if (out) {
                    *out = i;
                }
                break;
            }
        } else if (best < 0) {
            best = i;
        }
    }
    if (i == p->count && best >= 0) {
        found = 1;
        func_02071f54(p->items[best], a);
        if (out) {
            *out = best;
        }
    }
    return found;
}
