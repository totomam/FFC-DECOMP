#include "ffc/types.h"

extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036ce0(const void *object);

typedef struct {
    uint32_t w[6];
} Elem;

typedef struct {
    Elem *cur;
    uint32_t x;
    Elem *end;
    uint32_t y;
} Range;

#define COPY_ELEM(dst, src) \
    do { \
        (dst)->w[0] = (src)->w[0]; \
        (dst)->w[1] = (src)->w[1]; \
        (dst)->w[2] = (src)->w[2]; \
        (dst)->w[3] = (src)->w[3]; \
        (dst)->w[4] = (src)->w[4]; \
        (dst)->w[5] = (src)->w[5]; \
    } while (0)

Elem *func_0201dd18(Range r, Elem *b, Elem *bEnd, Elem *out)
{
    Elem *aEnd = r.end;
    Elem *o = out;
    while (r.cur != aEnd && b != bEnd) {
        int take;
        if (func_02036cd8(b) != 0 && func_02036cd8(r.cur) == 0) {
            take = 1;
        } else if (func_02036cd8(r.cur) != 0 && func_02036cd8(b) == 0) {
            take = 0;
        } else if (func_02036cfc(b) < func_02036cfc(r.cur)) {
            take = 1;
        } else if (func_02036cfc(b) > func_02036cfc(r.cur)) {
            take = 0;
        } else if (func_02036cfc(b) == 0) {
            take = 0;
        } else {
            take = func_02036ce0(b) < func_02036ce0(r.cur);
        }
        if (take) {
            COPY_ELEM(o, b);
            b++;
        } else {
            COPY_ELEM(o, r.cur);
            r.cur++;
        }
        o++;
    }
    if (r.cur == aEnd) {
        while (b < bEnd) {
            COPY_ELEM(o, b);
            b++;
            o++;
        }
    } else {
        Range t = r;
        while (t.cur != t.end) {
            COPY_ELEM(o, t.cur);
            t.cur++;
            o++;
        }
    }
    return o;
}
