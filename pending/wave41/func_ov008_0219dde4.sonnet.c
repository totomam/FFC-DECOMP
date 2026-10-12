/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_02069694(void *self, void *a, uint32_t b);
extern void func_02069600(void *self, void *a);
struct Obj { virtual void f0(); virtual void f1(); };
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
void func_ov008_0219dde4(uint8_t *p);
void func_ov008_0219dde4(uint8_t *p)
{
    uint32_t i;
    func_02069694(p, *(void **)(p + 0xc0), 4);
    func_02069694(p, *(void **)(p + 0xbc), 2);
    for (i = 0; i < *(uint32_t *)(p + 0xcc); i++) {
        func_02069600(p, (*(void ***)(p + 0xc8))[i]);
        Obj *obj = (*(Obj ***)(p + 0xc8))[i];
        if (obj != 0) {
            if (obj != 0) obj->f1();
            (*(Obj ***)(p + 0xc8))[i] = 0;
        }
    }
    int a = *(volatile int *)(p + 0xcc);
    int b = *(volatile int *)(p + 0xcc);
    *(int *)(p + 0xcc) = b - a;
}
}
