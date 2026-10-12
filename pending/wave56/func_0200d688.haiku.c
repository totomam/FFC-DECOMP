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
extern void func_0200d760(Tmp *t, uint32_t len, uint32_t fill);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern void *func_020903cc(void *object, int value, uint32_t length);
extern void *func_0200d750(void *object);

void func_0200d688(Vec *v, uint32_t n, uint32_t *val)
{
    uint8_t zb = 0;
    uint8_t bytes[8];
    Tmp t;
    uint32_t len;
    uint32_t *p;
    uint32_t k;
    uint32_t cur;
    uint32_t tmpcap;
    uint32_t *tmpdata;

    t.data = 0;
    t.size = 0;
    t.cap = 0;
    t.old = 0;
    t.ref = &v->cap;
    len = func_0200d608(v, v->size + n - v->cap);
    *(volatile uint8_t *)&bytes[3] = zb;
    func_0200d760(&t, len, *(volatile uint8_t *)&bytes[3]);
    t.old = v->size;
    p = t.data + v->size + t.size;
    if (n != 0) {
        k = n;
        do {
            *p++ = *val;
        } while (--k != 0);
    }
    t.size += n;
    cur = (v->data + v->size) - v->data;
    func_02090380(t.data + (t.old - cur), v->data, cur * 4);
    func_020903cc(v->data, 0, cur * 4);
    t.size += cur;
    v->size = 0;
    tmpcap = t.cap;
    t.cap = v->cap;
    v->cap = tmpcap;
    tmpdata = t.data;
    t.data = v->data;
    v->data = tmpdata;
    v->size = t.size;
    t.size = 0;
    func_0200d750(&t);
}
