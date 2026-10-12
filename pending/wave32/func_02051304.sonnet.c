#include "ffc/types.h"

extern void func_02051600(void *p);
extern void func_0205134c(void *p, uint8_t *a, uint8_t *b);
extern uint32_t data_0213df5c[];

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t w4;
    uint8_t *w8;
} S;
typedef struct { uint8_t *b; uint32_t n; } R;

void func_02051304(S *p) {
    R r, q;
    func_02051600(data_0213df5c);
    int c = !p->flag;
    if (c) {
        r.b = (uint8_t *)p + 2;
        r.n = (uint32_t)(((uint8_t *)p)[0] << 24) >> 25;
    } else {
        r.b = p->w8;
        r.n = p->w4;
    }
    q = r;
    uint8_t *e = q.b + q.n * 2;
    uint8_t *b = (uint8_t *)p + 2;
    if (!c) b = p->w8;
    func_0205134c(data_0213df5c, b, e);
}
