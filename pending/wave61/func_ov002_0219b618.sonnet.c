/* cflags: -lang c++ */
#include "ffc/types.h"
struct B { virtual void f0(); virtual void f1(); };
extern "C" {
extern void *func_02056aec(void *a);
extern void *func_0203b708(int a);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);
void func_ov002_0219b618(uint8_t *self, void *a, B *obj);
void func_ov002_0219b618(uint8_t *self, void *a, B *obj) {
    void *t, *x, *y;
    uint8_t *q;
    if (obj != 0) {
        B *b = obj;
        if (b != 0) b->f1();
    }
    t = func_02056aec(a);
    x = func_0203b708(0x32);
    y = func_0203b688();
    func_02056bc0(y, x);
    func_02056bc0(y, t);
    q = self + 0x48;
    func_02056bc0(q, a);
    func_02056bc0(q, y);
}
}
