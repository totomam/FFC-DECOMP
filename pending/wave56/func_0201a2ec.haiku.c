#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    void *p;
    uint32_t v;
    uint8_t f;
} H;

typedef struct {
    void *p;
    uint32_t v;
    uint8_t f;
} T;

extern void func_020095b8(void *o, void *b);
extern void func_0205323c(void *object, void *arg);
extern void func_020059cc(void *object);
extern void func_0201506c(void *object, void *src, uint32_t value);
extern void func_02052d3c(void *p, uint32_t v);
extern void func_02052c04(void *p);
extern void func_02052be0(void *p);
extern void func_02052d10(void *p, uint32_t v);
extern void func_02052c94(void *p, uint32_t v);
extern void *func_02052d90(void *p, uint32_t v);

H *func_0201a2ec(H *a, void *b, uint32_t c) {
    T w;
    T t;

    func_020095b8(&w, b);
    func_0205323c(a, &w);
    func_020059cc(&w);

    a->p = 0;
    a->f = 0;
    func_0201506c(&t, a, c);

    if ((void *)&t != (void *)&a->p) {
        if (a->p) {
            if (a->f) {
                func_02052d3c(a->p, a->v);
            }
            func_02052c04(a->p);
        }
        void *tp = t.p;
        a->p = tp;
        a->v = t.v;
        a->f = t.f;
        if (tp) {
            func_02052be0(tp);
            if (a->f) {
                func_02052d10(a->p, a->v);
            }
        }
    }

    if (t.p) {
        if (t.f) {
            func_02052d3c(t.p, t.v);
        }
        func_02052c04(t.p);
    }

    if (a->p && !a->f) {
        a->f = 1;
        func_02052c94(a->p, a->v);
    }

    func_02052d90(a->p, a->v);
    return a;
}
