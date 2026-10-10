#include "ffc/types.h"

typedef struct {
    uint32_t f0 : 1;
    uint32_t rest : 31;
    uint32_t w1;
    uint32_t w2;
} S;
typedef struct {
    uint8_t f : 1;
    uint8_t n : 7;
} B;

extern S *func_02009698(S *p, int a, uint32_t b, S *q);

S *func_0200b65c(S *p, S *q) {
    int c;
    uint32_t n;
    if (p->f0) c = 1; else c = 0;
    if (!c && !q->f0) {
        *p = *q;
        return p;
    }
    if (c) n = p->w1; else n = ((B *)p)->n;
    return func_02009698(p, 0, n, q);
}
