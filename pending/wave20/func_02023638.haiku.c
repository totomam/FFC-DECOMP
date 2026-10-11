#include "ffc/types.h"

typedef struct S {
    uint32_t w0;
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} S;

S *func_02023638(S *p)
{
    if (p == 0) {
        return 0;
    }
    if (p->d == 0) {
        return 0;
    }
    return (S *)((char *)p + (p->a + p->b + p->c));
}
