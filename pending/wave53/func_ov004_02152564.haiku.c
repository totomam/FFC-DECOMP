#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint16_t c;
    uint32_t d;
} Ent;

typedef struct {
    Ent *data;
    uint32_t count;
    uint32_t cap;
} Arr;

extern int32_t func_ov004_021524e4(Arr *p, int32_t x);
extern void func_ov004_02152aec(Arr *t, int32_t v, uint8_t b);
extern void func_ov004_02152a3c(Arr *t);

void func_ov004_02152564(Arr *p, uint32_t n, Ent *src)
{
    Arr t;
    uint32_t i;
    uint8_t flag;
    int32_t r;
    Ent *dst;
    Ent *end;
    uint32_t k;

    t.data = 0;
    t.count = 0;
    t.cap = 0;
    flag = 0;
    r = func_ov004_021524e4(p, (int32_t)(p->count + n - p->cap));
    func_ov004_02152aec(&t, r, flag);
    dst = t.data + p->count;
    for (k = n; k != 0; k--) {
        dst->a = src->a;
        dst->b = src->b;
        dst->c = src->c;
        dst->d = src->d;
        dst++;
    }
    t.count = t.count + n;
    i = p->count;
    end = p->data + i;
    dst = t.data + i;
    while (end > p->data) {
        end--;
        dst--;
        dst->a = end->a;
        dst->b = end->b;
        dst->c = end->c;
        dst->d = end->d;
        i--;
        t.count++;
    }
    p->count = 0;
    p->data = t.data;
    p->count = t.count;
    t.data = p->data;
    t.count = 0;
    func_ov004_02152a3c(&t);
}
