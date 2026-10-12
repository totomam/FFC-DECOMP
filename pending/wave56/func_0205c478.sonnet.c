/* cflags: -lang c++ */
#include "ffc/types.h"

struct It {
    uint32_t *cur;
    uint32_t *first;
    uint32_t *last;
    uint32_t *end;
};

extern "C" void func_02090398(uint32_t *dst, uint32_t *src, int32_t nbytes);
extern "C" void func_0205c478(It *ret, It *a, It *b, It *c);

inline const int32_t &mn(const int32_t &x, const int32_t &y) { return (x < y) ? x : y; }

extern "C" void func_0205c478(It *ret, It *a, It *b, It *c) {
    uint32_t *ac, *bc;
    bool f;
    int32_t n;
    while (a->cur != b->cur) {
        int32_t n2 = ((int32_t)c->end - (int32_t)c->cur) / 4;
        f = true;
        ac = a->cur;
        if (ac < a->last) f = false;
        bc = b->cur;
        if (f == (bc >= b->last)) {
            int32_t n1 = ((int32_t)bc - (int32_t)ac) / 4;
            n = mn(n2, n1);
        } else {
            int32_t n1 = ((int32_t)a->end - (int32_t)ac) / 4;
            n = mn(n2, n1);
        }
        func_02090398(c->cur, a->cur, ((n * 4) / 4) * 4);
        int32_t k = n - 1;
        uint32_t *p = a->cur + k;
        a->cur = p + 1;
        if (a->cur == a->end) a->cur = a->first;
        p = c->cur + k;
        c->cur = p + 1;
        if (c->cur == c->end) c->cur = c->first;
    }
    ret->cur = c->cur;
    ret->first = c->first;
    ret->last = c->last;
    ret->end = c->end;
}
