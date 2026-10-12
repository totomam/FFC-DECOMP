#include "ffc/types.h"

typedef struct {
    uint8_t *begin;
    uint32_t count;
    uint32_t cap;
} Tmp;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    Tmp sub;
    uint8_t flag;
} Elem;

typedef struct {
    Elem *begin;
    uint32_t count;
    uint32_t cap;
} Outer;

extern void func_0207138c(Tmp *t, uint32_t n, uint32_t fill);
extern void func_02071420(Tmp *dst, uint8_t *first, uint8_t *last, uint32_t fill);
extern void func_02071348(void *vec, Elem *elem, uint32_t flag);
extern void func_02071404(Tmp *t);

void func_02070e40(Outer *self, uint32_t value, uint32_t n) {
    volatile uint8_t pad[8];
    Elem e;
    Elem *p;

    e.sub.begin = 0;
    e.sub.count = 0;
    e.sub.cap = 0;
    e.a = value;
    e.b = 0;
    e.c = 0;
    e.flag = 0;
    if (n > 0) {
        pad[4] = 0;
        func_0207138c(&e.sub, n, pad[4]);
    }
    if (self->count < self->cap) {
        p = self->begin + self->count;
        if (p != 0) {
            p->a = e.a;
            p->b = e.b;
            p->c = e.c;
            p->sub.begin = 0;
            p->sub.count = 0;
            p->sub.cap = 0;
            func_02071420(&p->sub, e.sub.begin, e.sub.begin + e.sub.count * 16, pad[0]);
            p->flag = e.flag;
        }
        self->count = self->count + 1;
    } else {
        pad[1] = 0;
        func_02071348(&self->begin, &e, pad[1]);
    }
    func_02071404(&e.sub);
}
