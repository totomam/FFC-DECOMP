#include "ffc/types.h"

extern void func_ov003_0214e2a8(void *p);

typedef struct S {
    uint32_t a;
    void *b;
    void *c;
} S;

void func_ov003_0214e1f8(S *p) {
    if (p->b != 0) {
        func_ov003_0214e2a8(p);
        p->a = 0;
        p->b = 0;
        p->c = &p->b;
    }
}
