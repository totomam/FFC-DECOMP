#include "ffc/types.h"

extern int32_t func_ov009_0219a590(void *p, int32_t v);
extern void func_ov009_0219a72c(void *t, int32_t a, uint8_t b);
extern void func_02063520(void *dst, uint32_t v);
extern void func_ov009_0219a6fc(void *t);

typedef struct {
    int32_t *data;
    int32_t count;
    int32_t cap;
} Vec;

typedef struct {
    int32_t *data;
    int32_t count;
    int32_t cap;
    void *owner;
    int32_t size;
} Tmp;

void func_ov009_0219a610(Vec *p, int32_t n, uint32_t x)
{
    uint8_t buf[8];
    Tmp t;
    int32_t e;
    int32_t *d;
    int32_t *end;
    int32_t tc;
    int32_t *tdata;

    buf[3] = 0;
    t.data = 0;
    t.count = 0;
    t.cap = 0;
    t.owner = &p->cap;
    e = func_ov009_0219a590(p, p->count + n - p->cap);
    buf[4] = buf[3];
    func_ov009_0219a72c(&t, e, buf[4]);
    t.size = p->count;
    d = t.data + t.size + t.count;

    while (n != 0) {
        if (d != 0) {
            func_02063520(d, x);
        }
        t.count++;
        d++;
        n--;
    }

    end = p->data + p->count;
    while (end > p->data) {
        end--;
        d--;
        if (d != 0) {
            func_02063520(d, (uint32_t)end);
        }
        t.size--;
        t.count++;
    }

    tc = p->cap;
    p->cap = t.cap;
    t.cap = tc;

    tdata = p->data;
    p->data = t.data;
    t.data = tdata;

    tc = p->count;
    p->count = t.count;
    t.count = tc;

    func_ov009_0219a6fc(&t);
}
