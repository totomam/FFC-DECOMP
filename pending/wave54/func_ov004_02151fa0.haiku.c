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

extern void func_ov004_021528b0(void);
extern void func_ov004_02152118(Vec *v, Tmp *t, Elem *pos, int flag);
extern Elem *func_ov004_0215215c(Vec *v, Tmp *t, Elem *pos);
extern void func_ov004_021522d8(Tmp *t);

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
                *end = *item;
            }
            v->count++;
            return pos;
        }
        if (end) {
            *end = end[-1];
        }
        v->count++;
        if (pos <= item && item < end) {
            item++;
        }
        {
            Elem *s = end - 1;
            Elem *dst = end;
            while (s > pos) {
                s--;
                dst--;
                *dst = *s;
            }
        }
        *pos = *item;
        return pos;
    } else {
        t.base = 0;
        t.count = 0;
        t.x = 0;
        t.owner = &v->cap;
        t.idx = 0;
        func_ov004_02152118(v, &t, pos, 1);
        if (t.base + t.idx) {
            *(t.base + t.idx) = *item;
        }
        t.count++;
        end = func_ov004_0215215c(v, &t, pos);
        func_ov004_021522d8(&t);
        return end;
    }
}
