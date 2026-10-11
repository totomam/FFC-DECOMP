#include "ffc/types.h"

typedef struct Inner {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Inner;

typedef struct Outer {
    uint32_t a;
    uint32_t b;
    Inner *in;
    uint32_t *out;
} Outer;

extern int func_ov007_021c0d80(Outer *o, void **v, int *n, uint32_t x, uint32_t y);
extern void func_ov000_021653f4(void *p);

int func_ov007_021c1480(Outer *o) {
    Inner *in = o->in;
    uint32_t *out = o->out;
    void *v;
    int n;
    int r;

    r = func_ov007_021c0d80(o, &v, &n, in->c, in->b);
    if (r == 0) {
        if (v != 0 && n > 0) {
            *out = *(uint32_t *)v;
        } else {
            *out = 0;
        }
    }
    func_ov000_021653f4(v);
    return r;
}
