#include "ffc/types.h"

extern void func_ov003_0215bd00(void *p);

typedef struct S {
    uint32_t a;
    void *b;
    uint32_t c;
    void *d;
} S;

void func_ov003_0215bad4(S *p) {
    if (p->b != 0) {
        func_ov003_0215bd00(p);
        p->a = 0;
        p->b = 0;
        p->d = &p->b;
    }
}
