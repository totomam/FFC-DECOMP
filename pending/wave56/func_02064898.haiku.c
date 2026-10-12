#include "ffc/types.h"

typedef struct {
    int32_t a, b, c, d;
} Rect;

typedef struct {
    int32_t x, y;
} Pair;

typedef void (*VFn)(Pair *, void *);

extern Rect func_02064574(void *obj, uint32_t i);

void func_02064898(int32_t *out, void *obj)
{
    Rect cur;
    Rect tmp;
    Pair p1, p2;
    int32_t mina = 0x7fffffff;
    int32_t minb = 0x7fffffff;
    int32_t maxc = (int32_t)0x80000000;
    int32_t maxd = (int32_t)0x80000000;
    uint32_t i;

    for (i = 0; i < *(uint32_t *)((uint8_t *)obj + 0x28); i++) {
        uint8_t *ent = *(uint8_t **)((uint8_t *)obj + 0x60);
        if (ent[i * 0x1c] != 0) {
            cur = func_02064574(obj, i);
            tmp = cur;
            if (maxd <= tmp.d) maxd = tmp.d;
            if (maxc <= tmp.c) maxc = tmp.c;
            if (minb >= tmp.b) minb = tmp.b;
            if (mina >= tmp.a) mina = tmp.a;
        }
    }

    if (mina == 0x7fffffff && minb == 0x7fffffff &&
        maxc == (int32_t)0x80000000 && maxd == (int32_t)0x80000000) {
        void **vt = *(void ***)obj;
        ((VFn)vt[4])(&p1, obj);
        vt = *(void ***)obj;
        ((VFn)vt[4])(&p2, obj);
        out[0] = p2.x;
        out[1] = p2.y;
        out[2] = p1.x;
        out[3] = p1.y;
        return;
    }

    out[0] = mina;
    out[1] = minb;
    out[2] = maxc;
    out[3] = maxd;
}
