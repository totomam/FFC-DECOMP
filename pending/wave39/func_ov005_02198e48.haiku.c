#include "ffc/types.h"

extern uint32_t func_ov005_02198dc8(void *p, uint32_t d);
extern void func_ov005_02198f14(void *t, uint32_t a, uint32_t b);
extern void func_ov005_02198f04(void *t);

typedef struct {
    uint32_t *data;
    uint32_t size;
    uint32_t cap;
} Buf;

void func_ov005_02198e48(Buf *p, uint32_t n, uint32_t *src) {
    Buf t;
    uint32_t *dst;
    uint32_t *end;
    uint32_t *dst2;
    uint32_t k;
    uint32_t r;
    uint32_t zero;
    uint32_t tmp;

    t.data = 0;
    t.size = 0;
    t.cap = 0;
    zero = 0;
    k = 0;
    r = func_ov005_02198dc8(p, p->size + n - p->cap);
    func_ov005_02198f14(&t, r, zero);

    dst = t.data + p->size + t.size;
    while (n != 0) {
        *dst++ = *src;
        n--;
    }
    t.size += n;
    end = p->data + p->size;
    k = p->size;
    dst2 = t.data + k;
    while (end > p->data) {
        end--;
        dst2--;
        *dst2 = *end;
        k--;
        t.size++;
    }
    p->size = 0;
    tmp = p->cap;
    p->cap = t.cap;
    t.cap = tmp;
    tmp = (uint32_t)p->data;
    p->data = t.data;
    t.data = (uint32_t *)tmp;
    p->size = t.size;
    t.size = 0;
    func_ov005_02198f04(&t);
}
