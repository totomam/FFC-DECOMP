#include "ffc/types.h"

extern uint32_t func_ov013_021c1fe0(void *v, int32_t x);
extern void func_ov013_021c2184(void *t, uint32_t idx, uint32_t x, void *p);
extern void func_020095b8(void *dst, void *src);
extern void func_ov013_021c2154(void *t);

typedef struct {
    uint8_t *data;
    int32_t count;
    int32_t cap;
} Vec;

typedef struct {
    uint8_t *data;
    int32_t count;
    int32_t cap;
    int32_t *link;
    int32_t extra;
} Tmp;

void func_ov013_021c2060(Vec *v, int32_t n, uint32_t *src) {
    Tmp t;
    uint8_t *p;
    uint8_t *e;
    uint32_t idx;
    uint8_t b = 0;
    int32_t k;
    uint32_t c;
    uint8_t *d;

    t.data = 0;
    t.count = 0;
    t.cap = 0;
    t.link = (int32_t *)&v->cap;
    t.extra = 0;

    idx = func_ov013_021c1fe0(v, v->count + n - v->cap);
    func_ov013_021c2184(&t, idx, b, &b);

    t.extra = v->count;
    p = t.data + t.extra * 16 + t.count * 16;

    if (n != 0) {
        k = n;
        do {
            if (p != 0) {
                *(uint32_t *)p = src[0];
                func_020095b8(p + 4, src + 1);
            }
            t.count++;
            p += 16;
            k--;
        } while (k != 0);
    }

    e = v->data + v->count * 16;
    p = t.data + t.extra * 16;
    while (e > v->data) {
        e -= 16;
        p -= 16;
        if (p != 0) {
            *(uint32_t *)p = *(uint32_t *)e;
            func_020095b8(p + 4, e + 4);
        }
        t.extra--;
        t.count++;
    }

    c = v->cap;
    v->cap = t.cap;
    t.cap = c;
    d = v->data;
    v->data = t.data;
    t.data = d;
    c = v->count;
    v->count = t.count;
    t.count = c;

    func_ov013_021c2154(&t);
}
