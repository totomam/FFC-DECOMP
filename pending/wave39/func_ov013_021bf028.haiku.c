#include "ffc/types.h"

extern uint32_t func_ov013_021befa8(void *v, uint32_t n);
extern void func_ov013_021bf2cc(void *t, uint32_t n);
extern void func_ov013_021bf25c(void *t);

typedef struct {
    uint32_t a;
    uint32_t b;
} Item;

typedef struct {
    Item *data;
    uint32_t count;
    uint32_t extra;
    uint32_t *ref;
    uint32_t cnt;
} Tmp;

typedef struct {
    Item *data;
    uint32_t count;
    uint32_t extra;
} Vec;

void func_ov013_021bf028(Vec *v, uint32_t n, Item *src)
{
    Tmp t;
    uint32_t k;
    Item *d;
    Item *s;
    Item *old;
    uint32_t i;
    uint32_t tmp_extra;

    t.data = 0;
    t.count = 0;
    t.extra = 0;
    t.cnt = 0;
    t.ref = &v->extra;

    k = func_ov013_021befa8(v, v->count + n - v->extra);
    func_ov013_021bf2cc(&t, k);

    t.cnt = v->count;
    d = t.data + t.cnt + t.count;
    for (i = n; i != 0; i--) {
        *d = *src;
        d++;
    }
    t.count += n;

    s = v->data + t.cnt;
    if (s > v->data) {
        do {
            s--;
            d = t.data + t.cnt;
            d--;
            *d = *s;
            t.cnt--;
            t.count++;
        } while (s > v->data);
    }

    tmp_extra = v->extra;
    v->extra = t.extra;
    t.extra = tmp_extra;

    old = v->data;
    v->data = t.data;
    t.data = old;
    v->count = t.count;
    t.count = 0;

    func_ov013_021bf25c(&t);
}
