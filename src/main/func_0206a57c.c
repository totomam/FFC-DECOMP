#include "ffc/types.h"

extern void func_0206a630(void *p);

typedef struct S {
    uint32_t a;
    void *b;
    void *c;
} S;

void func_0206a57c(S *p) {
    if (p->b != 0) {
        func_0206a630(p);
        p->a = 0;
        p->b = 0;
        p->c = &p->b;
    }
}
