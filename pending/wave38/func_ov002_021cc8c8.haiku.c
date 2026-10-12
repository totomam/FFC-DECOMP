#include "ffc/types.h"

typedef struct {
    uint32_t a;
    int32_t b;
} E;

typedef struct {
    E *first;
    E *end;
    uint32_t p2;
    uint32_t p3;
} Args;

void func_ov002_021cc8c8(Args s) {
    E *first = s.first;
    E *end = s.end;
    E *p;
    if (first == end) {
        return;
    }
    for (p = first + 1; p != end; p++) {
        E *j = p - 1;
        if (p->b > j->b) {
            uint32_t ka = p->a;
            int32_t kb = p->b;
            E *h;
            E *c;
            p->a = j->a;
            p->b = j->b;
            h = j;
            c = j;
            for (;;) {
                int r2 = 0;
                if (c != first) {
                    c--;
                    if (kb > c->b) {
                        r2 = 1;
                    }
                }
                if (!r2) {
                    break;
                }
                h->a = c->a;
                h->b = c->b;
                h--;
            }
            h->a = ka;
            h->b = kb;
        }
    }
}
