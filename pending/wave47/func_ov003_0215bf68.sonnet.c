#include "ffc/types.h"

typedef struct { uint16_t a; uint16_t b; } Item;
typedef struct { Item *data; uint32_t size; uint32_t cap; } Vec;
typedef struct { Item *data; uint32_t size; uint32_t cap; uint32_t *capref; uint32_t idx; } Tmp;

extern uint32_t func_ov003_0215bee8(Vec *p, uint32_t x);
typedef struct { uint8_t v; } B;
extern void func_ov003_0215c03c(Tmp *t, uint32_t cnt, B v);
extern void func_ov003_0215c02c(Tmp *t);

void func_ov003_0215bf68(Vec *p, uint32_t n, Item *src) {
    Tmp t;
    uint32_t i;
    uint32_t cnt;
    uint32_t tmp;
    Item *dst;
    Item *end;
    Item *d;

    t.data = 0;
    t.size = 0;
    t.cap = 0;
    t.idx = 0;
    t.capref = &p->cap;

    cnt = func_ov003_0215bee8(p, p->size + n - p->cap);
    B z; z.v = 0; B w; w.v = z.v; func_ov003_0215c03c(&t, cnt, w);

    t.idx = p->size;
    dst = t.data + p->size + t.size;
    for (i = n; i != 0; i--) {
        dst->a = src->a;
        dst->b = src->b;
        dst++;
    }
    t.size += n;

    end = p->data + p->size;
    dst = t.data + t.idx;
    while (end > p->data) {
        end--;
        dst--;
        if (dst != 0) {
            dst->a = end->a;
            dst->b = end->b;
        }
        t.idx--;
        t.size++;
    }

    p->size = 0;
    tmp = p->cap;
    p->cap = t.cap;
    t.cap = tmp;
    d = p->data;
    p->data = t.data;
    t.data = d;
    p->size = t.size;
    t.size = 0;
    func_ov003_0215c02c(&t);
}
