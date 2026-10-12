#include "ffc/types.h"

extern uint32_t func_0202d1e4(void *v, uint32_t need);
extern void func_0202d344(void *tmp, uint32_t cap, uint32_t flag);
extern void func_0202d334(void *tmp);

typedef struct { uint32_t w[4]; } Elem;
typedef struct { Elem *data; uint32_t count; uint32_t cap; } Vec;

void func_0202d264(Vec *v, uint32_t n, Elem *src)
{
    Vec tmp;
    uint32_t *capp;
    uint32_t cnt;
    uint32_t k;
    Elem *p;
    Elem *q;

    capp = &v->cap;
    tmp.data = 0;
    tmp.count = 0;
    tmp.cap = 0;
    cnt = v->count;
    func_0202d344(&tmp, func_0202d1e4(v, cnt + n - *capp), 0);

    if (n != 0) {
        q = tmp.data + cnt;
        for (k = n; k != 0; k--) {
            *q = *src;
            q++;
        }
    }
    tmp.count += n;

    p = v->data + cnt;
    q = tmp.data + cnt;
    while (p > v->data) {
        p--;
        q--;
        *q = *p;
        cnt--;
        tmp.count++;
    }

    p = v->data;
    v->data = tmp.data;
    v->count = tmp.count;
    *capp = tmp.cap;
    tmp.data = p;
    tmp.count = 0;
    tmp.cap = cnt;
    func_0202d334(&tmp);
}
