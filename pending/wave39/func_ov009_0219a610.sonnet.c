#include "ffc/types.h"

extern int32_t func_ov009_0219a590(void *p, int32_t v);
typedef struct { uint8_t v; } B;
extern void func_ov009_0219a72c(void *t, int32_t a, B b);
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
    int32_t z = 0;
    Tmp t;
    int32_t e;
    int32_t *end;
    int32_t *d;
    int32_t tc;
    int32_t *tdata;

    t.data = (int32_t*)z;
    t.count = z;
    t.cap = z;
    t.size = z;
    t.owner = &p->cap;
    e = func_ov009_0219a590(p, p->count + n - p->cap);
    {B *q = (B*)&buf[3];
    q->v = z;
    *(B*)&buf[4] = *q;}
    func_ov009_0219a72c(&t, e, *(B*)&buf[4]);
    t.size = p->count;
    d = t.data + t.size + t.count;

    while (n != 0) {
        if (d != 0) {
            func_02063520(d, x);
        }
        n--;
        t.count++;
        d++;
    }

    {
    int32_t *begin = p->data;
    int32_t *d2;
    int32_t *end2 = begin + p->count;
    d2 = t.data + t.size;
    while (end2 > begin) {
        end2--;
        d2--;
        if (d2 != 0) {
            func_02063520(d2, (uint32_t)end2);
        }
        t.size--;
        t.count++;
    }
    }

    {int32_t *pc = &t.cap;
    tc = p->cap;
    p->cap = *pc;
    *pc = tc;}

    tdata = p->data;
    p->data = t.data;
    t.data = tdata;

    tc = p->count;
    p->count = t.count;
    t.count = tc;

    func_ov009_0219a6fc(&t);
}
