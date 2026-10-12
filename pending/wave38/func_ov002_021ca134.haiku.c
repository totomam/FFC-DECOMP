#include "ffc/types.h"

extern int func_ov002_021d2b38(int x);

typedef struct {
    uint32_t w[12];
} Elem;

typedef struct {
    Elem *base;
    uint32_t count;
    uint32_t cap;
} List;

void func_ov002_021ca134(List *l, Elem *src)
{
    uint32_t n;
    uint8_t v = 0;
    if (l->count < l->cap) {
        n = l->count + 1;
        l->count = n;
        n = n - 1;
        {
            Elem *dst = &l->base[n];
            dst->w[0] = src->w[0];
            dst->w[1] = src->w[1];
            dst->w[2] = src->w[2];
            dst->w[3] = src->w[3];
            dst->w[4] = src->w[4];
            dst->w[5] = src->w[5];
            dst->w[6] = src->w[6];
            dst->w[7] = src->w[7];
            dst->w[8] = src->w[8];
            dst->w[9] = src->w[9];
            dst->w[10] = src->w[10];
            dst->w[11] = src->w[11];
        }
    } else {
        func_ov002_021d2b38(v);
    }
}
