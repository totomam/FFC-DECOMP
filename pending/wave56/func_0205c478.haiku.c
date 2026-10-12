#include "ffc/types.h"

typedef struct It {
    uint32_t *cur;
    uint32_t *first;
    uint32_t *last;
    uint32_t *end;
} It;

extern void func_02090398(uint32_t *dst, uint32_t *src, int32_t nbytes);

It func_0205c478(It *a, It *b, It *c) {
    int32_t t[3];
    int32_t *sel;
    int32_t n;
    int32_t flag;
    uint32_t *p;
    uint32_t *ac;
    uint32_t *bc;

    if (a->cur != b->cur) {
        do {
            t[2] = (c->end - c->cur) / 4;
            flag = 1;
            ac = a->cur;
            if (ac < a->last) {
                flag = 0;
            }
            bc = b->cur;
            if (flag == (bc >= b->last)) {
                t[1] = (bc - ac) / 4;
                sel = (t[2] < t[1]) ? &t[2] : &t[1];
            } else {
                t[0] = (a->end - ac) / 4;
                sel = (t[2] < t[0]) ? &t[2] : &t[0];
            }
            n = *sel;

            func_02090398(c->cur, ac, n * 4);

            p = a->cur + n;
            a->cur = p;
            if (p == a->end) {
                a->cur = a->first;
            }

            p = c->cur + n;
            c->cur = p;
            if (p == c->end) {
                c->cur = c->first;
            }
        } while (a->cur != b->cur);
    }
    return *c;
}
