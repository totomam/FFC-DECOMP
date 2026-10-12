#include "ffc/types.h"

extern void func_02056844(void *);

typedef struct {
    void **base;
    uint32_t idx;
    uint32_t count;
    uint32_t cap;
} T;

typedef struct {
    uint32_t a;
    uint32_t b;
    T t;
} S;

void func_0205bbac(S *p, uint32_t n) {
    T *q;
    if (n != 0) {
        q = &p->t;
        p->b -= n;
        p->a += n;
        while (p->a >= 0xaa) {
            func_02056844(q->base[q->idx]);
            q->idx++;
            if (q->idx == q->cap) {
                q->idx = 0;
            }
            q->count--;
            p->a -= 0x55;
        }
        if (p->b == 0) {
            p->a = 0x2a;
        }
    }
}
