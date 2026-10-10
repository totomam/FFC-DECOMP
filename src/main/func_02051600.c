#include "ffc/types.h"

extern void func_020516ac(void *p);

typedef struct S {
    uint32_t a;
    void *b;
    void *c;
} S;

void func_02051600(S *p) {
    if (p->b != 0) {
        func_020516ac(p);
        p->a = 0;
        p->b = 0;
        p->c = &p->b;
    }
}
