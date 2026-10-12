/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" uint32_t func_02036cd8(const void *object);
extern "C" uint32_t func_02036cfc(const void *object);
extern "C" uint32_t func_02036ce0(const void *object);

typedef struct {
    uint32_t w[6];
} Elem;

#define COPY_ELEM(dst, src) \
    do { \
        (dst)->w[0] = (src)->w[0]; \
        (dst)->w[1] = (src)->w[1]; \
        (dst)->w[2] = (src)->w[2]; \
        (dst)->w[3] = (src)->w[3]; \
        (dst)->w[4] = (src)->w[4]; \
        (dst)->w[5] = (src)->w[5]; \
    } while (0)

struct It { Elem *p; uint32_t v; };
struct Range { It c; It e; };
inline Elem *rest(It c, It e, Elem *o) {
    while (c.p != e.p) {
        COPY_ELEM(o, c.p);
        c.p++;
        o++;
    }
    return o;
}

inline bool both(Elem *a, Elem *ae, Elem *b, Elem *be) { return a != ae && b != be; }
extern "C" Elem *func_0201dd18(Range r, Elem *b, Elem *bEnd, Elem *out)
{
    Elem *o = out;
    Elem *aEnd = r.e.p;
    while (both(r.c.p, aEnd, b, bEnd)) {
        int take;
        if (func_02036cd8(b) != 0 && func_02036cd8(r.c.p) == 0) {
            take = 1;
        } else if (func_02036cd8(r.c.p) != 0 && func_02036cd8(b) == 0) {
            take = 0;
        } else if (func_02036cfc(b) < func_02036cfc(r.c.p)) {
            take = 1;
        } else if (func_02036cfc(b) > func_02036cfc(r.c.p)) {
            take = 0;
        } else if (func_02036cfc(b) == 0) {
            take = 0;
        } else {
            take = func_02036ce0(b) < func_02036ce0(r.c.p);
        }
        if (take) {
            COPY_ELEM(o, b);
            b++;
        } else {
            COPY_ELEM(o, r.c.p);
            r.c.p++;
        }
        o++;
    }
    if (r.c.p == r.e.p) {
        while (b < bEnd) {
            COPY_ELEM(o, b);
            b++;
            o++;
        }
        return o;
    }
    return rest(r.c, r.e, o);
}
