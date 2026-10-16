#include "ffc/types.h"
typedef struct O { int a; int kind; } O;
extern O *func_ov001_0217f324(int a, int b);
extern long long *func_ov001_0217f30c(void);
extern int func_ov001_0217f27c(int a);
extern int func_ov001_0217f2c4(O *o, int v);
extern long long func_020996c0(long long a, long long b);
extern int func_ov001_0217f28c(long long a);
int func_ov001_0217f090(int a, int b, long long *c) {
    O *o = func_ov001_0217f324(a, b);
    long long *p;
    if (o == 0) return 0;
    if (o->kind == 0) {
        p = func_ov001_0217f30c();
        return func_ov001_0217f2c4(o, func_ov001_0217f27c(*(int*)p - *(int*)c));
    }
    if (o->kind == 1) {
        p = func_ov001_0217f30c();
        return func_ov001_0217f2c4(o, func_ov001_0217f28c(func_020996c0(*p, *c)));
    }
    p = func_ov001_0217f30c();
    return (int)p;
}
