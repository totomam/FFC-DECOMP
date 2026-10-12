#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_ov004_02149be0(void *p);
extern uint32_t func_ov004_02153114(uint32_t x);
extern uint32_t func_ov004_02149c04(void *p);
extern void func_ov004_0214edcc(void *out, uint32_t a, uint32_t b, Pair c);
extern void func_02064390(void *object, uint32_t first, uint32_t second);
extern uint32_t func_ov004_02153514(uint32_t x);
extern uint32_t func_ov004_0214f740(uint32_t a, uint32_t b);

typedef struct {
    uint8_t pad[0x88];
    void *o88;
    void *o8c;
    void *o90;
} Obj;

typedef void (*Fn1)(void *, uint32_t);
typedef void (*Fn2)(void *, Pair);

void func_ov004_0214ae54(Obj *p, Pair s)
{
    Pair out;
    uint32_t t;
    uint32_t x;
    uint32_t r4;
    uint32_t v6;
    uint32_t v7;
    uint32_t cmp;

    t = func_ov004_02153114(func_ov004_02149be0(p));
    x = func_ov004_02149c04(p);
    func_ov004_0214edcc(&out, t, x, s);
    func_02064390(p->o88, 0, out.b);
    func_02064390(p->o8c, out.a, 0);
    ((Fn2)(*(void ***)p->o90)[3])(p->o90, out);

    v6 = func_ov004_02153114(func_ov004_02149be0(p));
    cmp = func_ov004_02153514(func_ov004_02149be0(p));
    v6 = func_ov004_0214f740(v6, cmp);

    v7 = func_ov004_02153114(func_ov004_02149be0(p));
    cmp = func_ov004_02149c04(p);
    cmp = func_ov004_0214f740(v7, cmp);

    r4 = 0;
    if (v6 != cmp) {
        r4 = 1;
    }
    if (r4 != 0) {
        r4 = 3;
    } else {
        r4 = 2;
    }
    ((Fn1)(*(void ***)p->o88)[8])(p->o88, r4);
    ((Fn1)(*(void ***)p->o8c)[8])(p->o8c, r4);
    ((Fn1)(*(void ***)p->o90)[8])(p->o90, r4);
}
