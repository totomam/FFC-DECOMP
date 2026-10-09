#include "ffc/types.h"

extern void func_020442b4(void *p);

typedef struct S {
    uint32_t a;
    void *b;
    uint32_t c;
    void *d;
} S;

void func_020441dc(S *p) {
    if (p->b != 0) {
        func_020442b4(p);
        p->a = 0;
        p->b = 0;
        p->d = &p->b;
    }
}
