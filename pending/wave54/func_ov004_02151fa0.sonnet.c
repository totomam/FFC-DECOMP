#include "ffc/types.h"

typedef struct {
    uint32_t a, b, c, d;
    uint16_t e;
    uint32_t f;
} Elem;

typedef struct {
    Elem *base;
    uint32_t count;
    uint32_t cap;
} Vec;

typedef struct {
    uint32_t pad;
    Elem *base;
    uint32_t count;
    uint32_t x;
    void *owner;
    uint32_t idx;

} Tmp;

#define CP(X,Y) do{(X)->a=(Y)->a;(X)->b=(Y)->b;(X)->c=(Y)->c;(X)->d=(Y)->d;(X)->e=(Y)->e;(X)->f=(Y)->f;}while(0)
extern void func_ov004_021528b0(void);
extern void func_ov004_02152118(Vec *v, void *t, Elem *pos, int flag);
extern Elem *func_ov004_0215215c(Vec *v, void *t, Elem *pos);
extern void func_ov004_021522d8(void *t);

Elem *func_ov004_02151fa0(Vec *v, Elem *pos, Elem *item)
{
    Tmp t;
    Elem *end;
    int ok = 1;

    if (v->count >= v->cap) {
        func_ov004_021528b0();
        ok = 0;
    }

    if (ok) {
        end = v->base + v->count;
        if (pos == end) {
            if (end) {
                CP(end,item);
            }
            v->count++;
        } else {
            Elem *prev = end - 1;
            if (end) {
                CP(end,prev);
            }
            v->count++;
            if (pos <= item && item < end) {
                item++;
            }
            prev = end - 1;
            while (prev > pos) {
                prev--;
                end--;
                CP(end,prev);
            }
            CP(pos,item);
        }
    } else {
        t.base = 0;
        t.count = 0;
        t.x = 0;
        t.owner = &v->cap;
        t.idx = 0;
        func_ov004_02152118(v, &t.base, pos, 1);
        {
            Elem *p = t.base + t.idx;
            if (p) {
                CP(p,item);
            }
        }
        t.count++;
        pos = func_ov004_0215215c(v, &t.base, pos);
        func_ov004_021522d8(&t.base);
    }
    return pos;
}
