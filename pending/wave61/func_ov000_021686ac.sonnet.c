#include "ffc/types.h"
typedef struct S { int a,b,c,d; void (*fn)(void*); } S;
extern void *func_ov000_0216876c(S *p, int b);
void func_ov000_021686ac(S *p, int b) {
    if (p->fn != 0) {
        void *r = func_ov000_0216876c(p, b);
        p->fn(r);
    }
}
