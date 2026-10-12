/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
struct Al { uint8_t c; };
void func_020224fc(void *p, int q, Al a);
void func_02090380(void *destination, const void *source, uint32_t length);
void *func_020903cc(void *object, uint32_t value, uint32_t length);
void func_ov004_02152a20(void *p);
void func_ov004_02152258(void *p, int q);
}
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
struct Vec { uint32_t *begin; uint32_t size; void *cap; };
extern "C" void func_ov004_02152258(void *p, int q)
{
    Vec *v = (Vec *)p;
    
    struct W { Al a; Vec t; } w; w.a.c = 0; Al a = w.a;
    w.t.begin = 0; w.t.size = 0; w.t.cap = 0;
    func_020224fc(&w.t, q, a);
    uint32_t *b = v->begin;
    uint32_t *e = b + v->size;
    int n = (int)diff((int)e, (int)b) / 4;
    func_02090380(w.t.begin + w.t.size, b, n * 4);
    func_020903cc(b, 0, n * 4);
    w.t.size += n;
    v->size = 0;
    void *oc = v->cap; v->cap = w.t.cap; w.t.cap = oc;
    uint32_t *ob = v->begin; v->begin = w.t.begin; w.t.begin = ob;
    v->size = w.t.size;
    w.t.size = 0;
    func_ov004_02152a20(&w.t);
}
