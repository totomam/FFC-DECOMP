#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Triple;

void func_020527cc(Triple *p, Triple *q)
{
    if (p != q) {
        Triple tmp = *p;
        *p = *q;
        *q = tmp;
    }
}
