#include "ffc/types.h"
typedef struct { uint32_t w[4]; } Elem;
typedef struct { Elem *data; uint32_t count; uint32_t cap; } Vec;
typedef struct { uint8_t b; } Fl;
extern uint32_t func_0202d1e4(void *v, uint32_t need);
extern void func_0202d344(void *tmp, uint32_t cap, Fl f);
extern void func_0202d334(void *tmp);

void func_0202d264(Vec *v, uint32_t n, Elem *src)
{
    Vec tmp;
    uint32_t *capp;
    uint32_t cnt;
    Elem *p, *q, *b;
    Fl f;
    uint32_t k;

    tmp.data = 0; tmp.count = 0; tmp.cap = 0;
    cnt = 0;
    capp = &v->cap;
    cnt = v->count;
    f.b = 0;
    func_0202d344(&tmp, func_0202d1e4(v, cnt + n - *capp), f);
    q = tmp.data + tmp.count;
    for (k = n; k != 0; k--) { *q = *src; q++; }
    tmp.count += n;
    b = v->data;
    p = b + v->count;
    q = tmp.data + cnt;
    while (p > b) {
        p--; q--;
        *q = *p;
        cnt--;
        tmp.count++;
    }
    p = v->data; 
    v->count = 0;
    {uint32_t c=*capp; *capp=tmp.cap; tmp.cap=c;}
    v->data = tmp.data; tmp.data=p;
    func_0202d334(&tmp);
}
