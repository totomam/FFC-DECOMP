#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } Elem;
typedef struct { Elem *begin; uint32_t n; uint32_t cap; } Vec;

extern uint8_t *func_0203b390(Vec *self, uint32_t a, uint32_t b);
extern void func_0203b59c(Vec *tmp, void *p, uint32_t flag);
extern void func_0203b0a8(Elem *dst, Elem *src, uint32_t flag);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_02090380(void *d, const void *s, uint32_t len);
extern void *func_020903cc(void *o, int v, uint32_t len);
extern void func_0203b568(Vec *tmp);

void func_0203b410(Vec *self, uint32_t count, Vec *src)
{
    Vec tmp;
    uint8_t buf[4];
    uint8_t *ret;
    Elem *p;
    uint32_t k, saved, rem;
    uint8_t flag;

    buf[0] = 0;
    flag = 0;
    tmp.begin = 0;
    tmp.n = 0;
    tmp.cap = 0;

    ret = func_0203b390(self, self->n + count - self->cap, self->n + count);
    func_0203b59c(&tmp, ret, flag);

    p = tmp.begin + self->n + tmp.n;
    flag = buf[3];
    if (count != 0) {
        do {
            if (p != 0) {
                p->a = 0;
                p->b = 0;
                p->c = 0;
                func_0203b0a8(p, src->begin + src->n, flag);
            }
            count--;
            tmp.n++;
            p++;
        } while (count != 0);
    }

    saved = self->n;
    k = (uint32_t)(self->begin + self->n - self->begin);
    rem = saved - k;
    func_02090380(tmp.begin + rem, self->begin, k * 12);
    func_020903cc(self->begin, 0, k * 12);
    tmp.n += k;

    {
        uint32_t t = tmp.cap;
        tmp.cap = self->cap;
        self->cap = t;
    }
    {
        Elem *t = tmp.begin;
        tmp.begin = self->begin;
        self->begin = t;
    }
    {
        uint32_t t = tmp.n;
        tmp.n = self->n;
        self->n = t;
    }
    func_0203b568(&tmp);
}
