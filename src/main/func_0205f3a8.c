#include "ffc/types.h"

typedef struct {
    uint32_t pad : 28;
    uint32_t f1 : 1;
    uint32_t f2 : 1;
    uint32_t pad2 : 2;
    uint32_t rest[9];
} E;

typedef struct {
    uint32_t pad0;
    E *base;
    uint32_t pad1[2];
    uint32_t n;
} S;

void func_0205f3a8(S *s, uint32_t a, uint32_t b) {
    E *p;
    uint32_t n = s->n;
    p = s->base;
    while (n != 0) {
        n--;
        p->f1 = a;
        p->f2 = b;
        p++;
    }
}
