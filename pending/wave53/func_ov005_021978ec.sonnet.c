#include "ffc/types.h"

extern void func_02069670(void *ctx, uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    uint32_t *items;
    uint32_t count;
} Arr;

void func_ov005_021978ec(void *ctx, Arr *p, uint32_t x)
{
    uint32_t i;
    uint32_t j;
    uint32_t *base;
    for (i = 0; i < p->count; i++) {
        j = i + 4;
        base = p->items;
        if (j < p->count) {
            func_02069670(ctx, base[i], 2, base[j]);
        } else {
            func_02069670(ctx, base[i], 2, x);
        }
        if ((i & 3) == 0) {
            if (j < p->count) {
                func_02069670(ctx, p->items[i], 3, p->items[i + 3]);
            } else {
                func_02069670(ctx, p->items[i], 3, p->items[p->count - 1]);
            }
        } else {
            func_02069670(ctx, p->items[i], 3, p->items[i - 1]);
        }
        if ((i & 3) == 3 || i == p->count - 1) {
            func_02069670(ctx, p->items[i], 1, p->items[(i >> 2) * 4]);
        } else {
            func_02069670(ctx, p->items[i], 1, p->items[i + 1]);
        }
    }
}
