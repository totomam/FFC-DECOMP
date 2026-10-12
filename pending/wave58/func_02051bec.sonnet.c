/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" uint8_t data_0213dfac[];
extern "C" uint8_t data_0213df68[];

extern "C" void func_0208763c(void);
extern "C" void func_020095b8(void *dst, void *src);
extern "C" void func_02051b0c(void *dst, void *src);
extern "C" void func_0200b65c(void *a, void *b);
extern "C" void *func_020059cc(void *object);
extern "C" int func_02051db4(void *a, void *b);
extern "C" void func_020527cc(void *first, void *second);
extern "C" void func_02087678(void *obj);
extern "C" int func_0207e920(void *a, void *b);

struct Pair { uint32_t a; uint32_t b; };
typedef struct Ent {
    uint8_t pad[12];
    Pair p;
    uint32_t w2;
    uint32_t w3;
    uint8_t f;
} Ent;

typedef struct Mgr {
    uint32_t pad;
    Ent *arr;
    uint32_t count;
    uint32_t k0;
    uint32_t k1;
} Mgr;

typedef struct Src {
    uint32_t hdr;
    uint32_t x;
    void *y;
} Src;

typedef struct Out {
    uint32_t a;
    uint32_t b;
} Out;

typedef struct Tmp {
    Pair q1;
    Pair q2;
    void *obj;
    uint8_t g;
} Tmp;

extern "C" int func_02051bec(Src *p0, Out *p1, uint32_t p2)
{
    uint8_t loc1[12];
    uint8_t loc2[12];
    Tmp t;
    Tmp *tp;
    Mgr *mgr;
    Ent *e;
    uint32_t i;
    uint32_t j;
    int ret;
    uint8_t res;
    uint32_t t0;
    uint32_t t1;
    Ent *hi;
    Ent *lo;
    Mgr *m2;
    void *a1;

    mgr = (Mgr *)data_0213df68;
    tp = &t;
    tp->obj = data_0213dfac;
    tp->g = 1;
    if (tp->g) {
        func_0208763c();
    }
    func_020095b8(loc1, p0);
    func_02051b0c(loc2, loc1);
    func_0200b65c(p0, loc2);
    func_020059cc(loc2);
    func_020059cc(loc1);

    for (i = 0; i < mgr->count; i++) {
        if (func_02051db4(p0, &mgr->arr[i])) {
            *(Pair*)p1 = mgr->arr[i].p;
            for (j = i; j != 0; j--) {
                lo = &mgr->arr[j - 1];
                hi = &mgr->arr[j];
                uint32_t qa = hi->p.a;
                uint32_t qb = hi->p.b;
                Pair *s = &lo->p;
                hi->p = *s;
                lo->p.a = qa;
                lo->p.b = qb;
                t.q2.a = qa;
                t.q2.b = qb;
                func_020527cc(hi, lo);
                t0 = hi->w2;
                hi->w2 = lo->w2;
                lo->w2 = t0;
                t1 = hi->w3;
                hi->w3 = lo->w3;
                lo->w3 = t1;
                res = hi->f;
                hi->f = lo->f;
                lo->f = res;
            }
            res = mgr->arr[0].f;
            if (tp->g) {
                func_02087678(tp->obj);
            }
            return res;
        }
    }

    if (!(p0->hdr & 1)) {
        a1 = (uint8_t *)p0 + 1;
    } else {
        a1 = p0->y;
    }
    ret = func_0207e920(p1, a1);
    ret = ret != 0;

    if (ret && p1->a == mgr->k0) {
    } else if (ret) {
        goto done;
    } else if (p2) {
    } else if (mgr->k1) {
        goto done;
    }

    if (!ret) {
        p1->a = 0;
    }
    for (j = mgr->count - 1; j != 0; j--) {
        lo = &mgr->arr[j - 1];
        hi = &mgr->arr[j];
        uint32_t qa = hi->p.a;
        uint32_t qb = hi->p.b;
        Pair *s = &lo->p;
        hi->p = *s;
        lo->p.a = qa;
        lo->p.b = qb;
        t.q1.a = qa;
        t.q1.b = qb;
        func_020527cc(hi, lo);
        t0 = hi->w2;
        hi->w2 = lo->w2;
        lo->w2 = t0;
        t1 = hi->w3;
        hi->w3 = lo->w3;
        lo->w3 = t1;
        res = hi->f;
        hi->f = lo->f;
        lo->f = res;
    }
    m2 = (Mgr *)data_0213df68;
    func_0200b65c(m2->arr, p0);
    m2->arr->p = *(Pair *)p1;
    m2->arr->w2 = 0;
    m2->arr->w3 = 0;
    m2->arr->f = ret;

done:
    if (tp->g) {
        func_02087678(tp->obj);
    }
    return ret;
}
