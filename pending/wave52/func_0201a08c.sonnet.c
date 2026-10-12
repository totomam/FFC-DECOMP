#include "ffc/types.h"

typedef struct Obj {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t fc;
    uint8_t pad[3];
    int32_t f10;
    int32_t f14;
    uint32_t arr[3];
    struct Obj *self;
} Obj;

typedef struct Tmp {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
} Tmp;

typedef struct Res {
    uint32_t w0;
    void *w1;
    uint32_t w2;
    uint8_t c;
} Res;

typedef struct Frame {
    Tmp a;
    Res b;
} Frame;

extern void func_02053234(void *object);
extern void func_0200b65c(void *a, void *b);
extern void func_020095b8(void *out, void *in);
extern void func_0201a118(void *out, void *in);
extern void *func_020059cc(void *object);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);

void *func_0201a08c(void *p_, void *q) {
    Obj *p = (Obj *)p_;
    Frame f;
    uint32_t *arr;
    uint32_t i;
    void *r;
    Tmp *ta;
    Res *tb;

    func_02053234(p);
    p->f4 = 0;
    p->fc = 0;
    p->f10 = -1;
    p->f14 = -1;
    arr = p->arr;
    for (i = 0; i < 3; i++) {
        arr[i] = 0;
    }
    p->self = p;
    func_0200b65c(p->arr, q);
    if (p->f14 == -1) {
        ta = &f.a;
        func_020095b8(ta, p->arr);
        tb = &f.b;
        func_0201a118(tb, ta);
        func_020059cc(ta);
        r = func_02052d90(f.b.w1, f.b.w2);
        p->f14 = ((int32_t *)r)[1];
        if (f.b.w1 != 0) {
            if (tb->c != 0) {
                func_02052d3c(tb->w1, tb->w2);
            }
            func_02052c04(tb->w1);
        }
        func_02053290(tb);
    }
    return p;
}
