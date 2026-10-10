#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

void func_0208a554(S *p) {
    volatile S loc;
    loc.a = 0;
    loc.b = 0;
    p->a = 0;
    p->b = 0;
}
