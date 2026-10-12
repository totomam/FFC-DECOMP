#include "ffc/types.h"

typedef struct Tmp {
    uint32_t pad;
    uint32_t a;
    uint32_t b;
    uint8_t flag;
} Tmp;

typedef struct Node {
    uint8_t pad[0xc];
    uint32_t v;
} Node;

extern void *func_02042730(void *a, uint32_t *b, void **out, uint8_t *f1, uint8_t *f0);
extern void func_02053234(Tmp *object);
extern void *func_0205327c(Tmp *destination, const Tmp *source);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void *func_020441f8(void *a, void *r6, uint8_t f1, uint8_t f0, uint32_t *v);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(Tmp *object);

void *func_02042660(void *a, uint32_t *b) {
    uint8_t *r4;
    Tmp t;
    Tmp u;
    uint32_t v;
    uint8_t fl[2];
    void *out;
    void *r6;
    Node *n;
    uint8_t cond;

    r6 = func_02042730(a, b, &out, &fl[1], &fl[0]);
    n = out;
    cond = 1;
    if (n != 0 && n->v >= *b) {
        cond = 0;
    }
    if (cond != 0) {
        func_02053234(&t);
        t.a = 0;
        t.flag = 0;
        v = *b;
        func_0205327c(&u, &t);
        u.a = t.a;
        u.b = t.b;
        u.flag = t.flag;
        if (t.a != 0) {
            func_02052be0();
            if (u.flag) {
                func_02052d10(u.a, u.b);
            }
        }
        r4 = (uint8_t *)func_020441f8(a, r6, fl[0], fl[1], &v) + 0xc;
        if (u.a != 0) {
            if (u.flag) {
                func_02052d3c(u.a, u.b);
            }
            func_02052c04(u.a);
        }
        func_02053290(&u);
        if (t.a != 0) {
            if (t.flag) {
                func_02052d3c(t.a, t.b);
            }
            func_02052c04(t.a);
        }
        func_02053290(&t);
        return r4;
    }
    return (uint8_t *)n + 0xc;
}
