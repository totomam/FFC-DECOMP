#include "ffc/types.h"

typedef struct Sub {
    uint32_t f0;
    void *obj;
    void *p;
    void *q;
    uint8_t flag;
} Sub;

typedef struct Obj {
    void *a;
    void *b;
    uint32_t c;
    Sub sub;
} Obj;

extern void func_020442b4(void *a, void *b);
extern void func_02052d3c(void *p, void *q);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);
extern void func_02056844(void *obj);

void func_020442b4(void *a, void *param)
{
    Obj *b = (Obj *)param;
    Sub *s;

    if (b->a != 0) {
        func_020442b4(a, b->a);
    }
    if (b->b != 0) {
        func_020442b4(a, b->b);
    }
    s = &b->sub;
    if (s->p != 0) {
        if (s->flag != 0) {
            func_02052d3c(s->p, s->q);
        }
        func_02052c04(s->p);
    }
    func_02053290(&s->obj);
    func_02056844(b);
}
