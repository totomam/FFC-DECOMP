#include "ffc/types.h"

typedef struct Pair {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct Entry {
    uint32_t f0, f1, f2;
    Pair k;
    uint32_t c;
    uint32_t d;
    uint8_t e;
} Entry;

typedef struct Hdr {
    uint32_t f0;
    Entry *arr;
    uint32_t count;
    uint32_t last;
} Hdr;

typedef struct Guard {
    
    Pair t1, t2;
    void *g;
    uint8_t flag;
} Guard;

extern uint8_t data_0213dfac[];
extern Hdr data_0213df68;

extern void func_0208763c(void);
extern void func_02051df0(void *ctx, Pair k);
extern void func_02087678(void *g);
extern void func_020095b8(void *dst, void *src);
extern void func_020527cc(void *first, void *second);
extern void *func_020059cc(void *object);
extern void func_0200b65c(void *arr, void *obj);

static inline void swk(Entry *cur, Entry *prev, Pair *g)
{
    uint32_t ta = cur->k.a, tb = cur->k.b;
    Pair *pp = &prev->k;
    cur->k.a = pp->a;
    cur->k.b = pp->b;
    prev->k.a = ta;
    prev->k.b = tb;
    g->a = ta;
    g->b = tb;
}

void func_02051e6c(void *p, Pair k, uint32_t x)
{
    uint32_t obj28[3];
    uint32_t obj1c[3];
    Guard gd;
    Guard *gp = &gd;
    uint32_t i, j, cnt;
    Entry *arr, *cur, *prev;

    gd.g = data_0213dfac;
    gp->flag = 1;
    if (gp->flag != 0) {
        func_0208763c();
    }

    if (k.a != data_0213df68.last) {
        func_02051df0(p, k);
        if (gp->flag != 0) {
            func_02087678(gd.g);
        }
        return;
    }

    for (i = 0; i < data_0213df68.count; i++) {
        if (data_0213df68.arr[i].k.b == k.b) {
            func_020095b8(obj28, &data_0213df68.arr[i]);
            for (; i != 0; i--) {
                arr = data_0213df68.arr;
                prev = &arr[i - 1];
                cur = &arr[i];
                swk(cur, prev, &gd.t2);
                func_020527cc(cur, prev);
                {
                    uint32_t t = cur->c;
                    cur->c = prev->c;
                    prev->c = t;
                    t = cur->d;
                    cur->d = prev->d;
                    prev->d = t;
                    {
                        uint8_t e = cur->e;
                        cur->e = prev->e;
                        prev->e = e;
                    }
                }
            }
            func_020095b8(p, obj28);
            func_020059cc(obj28);
            if (gp->flag != 0) {
                func_02087678(gd.g);
            }
            return;
        }
    }

    func_02051df0(obj1c, k);
    cnt = data_0213df68.count;
    for (j = cnt - 1; j != 0; j--) {
        arr = data_0213df68.arr;
        Entry *cur = &arr[j];
        Entry *prev = &arr[j - 1];
        swk(cur, prev, &gd.t1);
        func_020527cc(cur, prev);
        {
            uint32_t t = cur->c;
            cur->c = prev->c;
            prev->c = t;
            t = cur->d;
            cur->d = prev->d;
            prev->d = t;
            {
                uint8_t e = cur->e;
                cur->e = prev->e;
                prev->e = e;
            }
        }
    }

    func_0200b65c(data_0213df68.arr, obj1c);
    { Pair *q = &data_0213df68.arr->k; q->a = k.a; q->b = k.b; }
    data_0213df68.arr->c = 0;
    data_0213df68.arr->d = 0;
    data_0213df68.arr->e = 1;
    func_020095b8(p, obj1c);
    func_020059cc(obj1c);
    if (gp->flag != 0) {
        func_02087678(gd.g);
    }
}
