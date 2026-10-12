#include "ffc/types.h"

typedef struct { uint8_t v; } Byte;
typedef struct { uint32_t a, b, c; } Item;
typedef struct { Item *arr; uint32_t count; } List;

extern void func_02022468(void *p, uint32_t n, Byte v);

static inline void init(Item *t) { t->a = 0; t->b = 0; t->c = 0; }

void func_0202240c(List *p, uint32_t n) {
    struct { uint8_t pad; Byte x; } s;
    Byte *xp = &s.x;
    Item tmp;
    Item *dst;
    if (n == 0) return;
    xp->v = 0;
    func_02022468(p, n, *xp);
    dst = &p->arr[p->count];
    if (n == 0) return;
    do {
        Item *t = &tmp;
        init(t);
        if (dst != 0) {
            *dst = *t;
        }
        p->count++;
        dst++;
        n--;
    } while (n != 0);
}
