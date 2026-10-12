/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t func_02076404(uint32_t x);
extern uint32_t func_02076434(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void func_02076424(uint32_t x);
}
struct Pair { uint32_t a, b; };
extern "C" Pair data_020b291c;
struct B { virtual void v0(); virtual uint32_t v1(uint32_t); virtual void v2(); virtual uint32_t v3(uint32_t); virtual uint32_t v4(uint32_t); };
struct Obj {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual uint32_t v4(uint32_t);
};
struct G { int v; G(int x):v(x){} ~G(){} };
inline int idf(const G &g) { return g.v; }
extern "C" void func_02077814(void *a);
extern "C" void func_02077814(void *a) {
    uint8_t *obj = (uint8_t *)a;
    uint8_t *p = *(uint8_t **)(obj + 0xa0);
    uint8_t flag = p[0x12];
    uint8_t *q = p + 0x1c;
    int ok;
    uint32_t v;
    if (flag) func_0208763c(q);
    v = *(uint32_t *)(p + 0x14);
    ok = v == 0;
    if (flag) func_02087678(q);
    if (ok) {
        uint32_t r;
        B *o84 = *(B **)(obj + 0x84);
        if (func_02076404(*(uint32_t *)(obj + 0x80))) {
            r = func_02076434(*(uint32_t *)(obj + 0x80));
            r = (*(B **)(obj + 0x84))->v3(r);
            r = (*(B **)(obj + 0x84))->v1(r);
            func_02056bc0(obj + 0x14, (void *)r);
            func_02076424(*(uint32_t *)(obj + 0x80));
        } else {
            r = ((Obj*)obj)->v4(0xc);
            r = (*(B **)(obj + 0x84))->v1(r);
            func_02056bc0(obj + 0x14, (void *)r);
        }
        Pair tmp = data_020b291c;
        *(Pair *)(obj + 0x88) = tmp;
    }
}
