#include "ffc/types.h"

extern int32_t func_ov000_02168924(void *a, void *b, void *c);

typedef struct {
    void **items;
    int32_t count;
} ListS;

int32_t func_ov000_02168bac(ListS *p, void *a, void *b) {
    int32_t i;
    for (i = 0; i < p->count; i++) {
        int32_t r = func_ov000_02168924(p->items[i], a, b);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
