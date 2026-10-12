#include "ffc/types.h"

extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern void func_02056844(void *object);

typedef struct Inner {
    uint32_t pad0;
    uint32_t f4;
    uint32_t f8;
    uint8_t f0c;
} Inner;

typedef struct Outer {
    uint32_t pad0;
    Inner *a;
    Inner *b;
} Outer;

void func_ov014_0214851c(Outer *o)
{
    Inner *x = o->a;
    if (x == 0) {
        goto skip_a;
    }
    if (x == 0) {
        goto store_a;
    }
    if (x->f4 != 0) {
        if (x->f0c != 0) {
            func_02052d3c(x->f4, x->f8);
        }
        func_02052c04(x->f4);
    }
    func_02053290(x);
    func_02056844(x);
store_a:
    o->a = 0;
skip_a:
    x = o->b;
    if (x == 0) {
        goto skip_b;
    }
    if (x == 0) {
        goto store_b;
    }
    if (x->f4 != 0) {
        if (x->f0c != 0) {
            func_02052d3c(x->f4, x->f8);
        }
        func_02052c04(x->f4);
    }
    func_02053290(x);
    func_02056844(x);
store_b:
    o->b = 0;
skip_b:
    return;
}
