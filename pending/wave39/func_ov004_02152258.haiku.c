#include "ffc/types.h"

extern void func_020224fc(void *p);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern void *func_020903cc(void *object, uint32_t value, uint32_t length);
extern void func_ov004_02152a20(void *p);

typedef struct {
    uint32_t *begin;
    uint32_t size;
    void *cap;
} Vec;

typedef struct {
    uint32_t *a;
    uint32_t b;
    void *c;
} Tmp;

void func_ov004_02152258(Vec *v)
{
    uint32_t x;
    uint8_t *q;
    Tmp t;
    uint32_t *b;
    uint32_t sz;
    uint32_t *e;
    int n;
    uint32_t *ob;
    void *oc;

    q = (uint8_t *)&x + 2;
    *q = 0;
    x = *q;
    t.a = 0;
    t.b = 0;
    t.c = 0;
    func_020224fc(&t);

    sz = v->size;
    b = v->begin;
    e = (uint32_t *)((uint8_t *)b + sz * 4);
    n = (int)((uint8_t *)e - (uint8_t *)b) / 4;
    func_02090380(t.a + t.b, b, n * 4);
    func_020903cc(b, 0, n * 4);
    t.b += n;
    v->size = 0;
    oc = v->cap;
    v->cap = t.c;
    t.c = oc;
    ob = v->begin;
    v->begin = t.a;
    t.a = ob;
    v->size = t.b;
    t.b = 0;
    func_ov004_02152a20(&t);
}
