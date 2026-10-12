#include "ffc/types.h"

typedef struct {
    uint32_t *data;
    uint32_t size;
    uint32_t cap;
    uint32_t *ref;
    uint32_t old;
} Tmp;

typedef struct {
    uint32_t *data;
    uint32_t size;
    uint32_t cap;
} Vec;

extern uint32_t func_0200d608(Vec *v, uint32_t diff);
typedef struct { uint8_t b; } B;
extern void func_0200d760(Tmp *t, uint32_t len, B fill);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern void *func_020903cc(void *object, int value, uint32_t length);
extern void *func_0200d750(void *object);

void func_0200d688(Vec *v, uint32_t n, uint32_t *val)
{
    B zb;
    B z2;
    B pad[5];
    Tmp t;
    uint32_t len;
    uint32_t *p;
    uint32_t k;
    uint32_t cur;

    t.data = 0;
    t.size = 0;
    t.cap = 0;
    t.old = 0;
    t.ref = &v->cap;
    len = func_0200d608(v, v->size + n - v->cap);
    B *pz = (B *)((uint8_t *)pad + 3);
    pz->b = 0;
    z2 = *pz;
    pad[4] = z2;
    func_0200d760(&t, len, z2);
    t.old = v->size;
    k = n;
    p = t.data + v->size + t.size;
    if (k != 0) {
        do {
            *p++ = *val;
        } while (--k != 0);
    }
    t.size += n;
    {
    uint32_t sz = v->size;
    uint32_t *d = v->data;
    uint32_t *e = d + sz;
    cur = ((int)((uint8_t *)e - (uint8_t *)d)) / 4;
    t.old -= cur;
    func_02090380(t.data + t.old, d, cur * 4);
    func_020903cc(d, 0, cur * 4);
    }
    t.size += cur;
    v->size = 0;
    {
    uint32_t *pc = &t.cap;
    uint32_t oc = v->cap;
    v->cap = *pc;
    *pc = oc;
    }
    {
    uint32_t *od = v->data;
    v->data = t.data;
    t.data = od;
    }
    v->size = t.size;
    t.size = 0;
    func_0200d750(&t);
}
