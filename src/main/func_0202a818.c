#include "ffc/types.h"

typedef struct Inner {
    uint32_t v;
    uint32_t w;
    uint8_t flag;
} Inner;

typedef struct Outer {
    uint32_t x0;
    uint32_t x4;
    uint32_t x8;
    Inner in;
} Outer;

extern void func_02035c18(void *p);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02056844(void *p);

void func_0202a818(uint32_t a, Outer *p) {
    Inner *q;

    if (p->x0) {
        func_0202a818(a, (Outer *)p->x0);
    }
    if (p->x4) {
        func_0202a818(a, (Outer *)p->x4);
    }
    q = &p->in;
    func_02035c18((void *)(q + 1));
    if (q->v) {
        if (q->flag) {
            func_02052d3c(q->v, q->w);
        }
        func_02052c04(q->v);
    }
    func_02056844(p);
}
