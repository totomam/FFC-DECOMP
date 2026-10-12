#include "ffc/types.h"

extern void func_02090398(void *a, void *b, int c, int d);

typedef struct {
    void **vt;        /* 0x00 */
    uint8_t *begin;   /* 0x04 */
    uint8_t *end;     /* 0x08 */
    uint8_t *eos;     /* 0x0c */
    int32_t pad10[3]; /* 0x10 */
    int32_t cap;      /* 0x1c */
} Obj;

int32_t func_020988a8(Obj *p) {
    int diff = p->end - p->begin;
    int n = diff / 2;
    int m;
    int r6;

    if (n > 4) {
        uint8_t *b;
        n = 4;
        func_02090398(p->begin, p->end - 8, 8, diff);
        b = p->begin;
        p->begin = b;
        p->end = b + 8;
        p->eos = p->end;
    }

    m = ((int32_t (*)(Obj *, uint8_t *, int32_t))p->vt[14])(p, p->end, (p->cap - n) * 2);
    if (m <= 0) {
        return m;
    }

    r6 = m % 2;
    if (r6 != 0) {
        int32_t x = -r6;
        int64_t t = ((int64_t (*)(Obj *, int32_t, int32_t, int32_t))p->vt[15])(p, x, x >> 31, 1);
        if (t < 0) {
            return -1;
        }
        m -= r6;
    }

    {
        uint8_t *b = p->begin;
        uint8_t *e;
        uint8_t *ne;
        e = p->end;
        p->begin = b;
        m &= ~1;
        ne = e + m;
        p->end = e;
        p->eos = ne;
        return (ne - e) / 2;
    }
}
