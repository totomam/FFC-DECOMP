#include "ffc/types.h"

typedef struct {
    int a;
    int b;
} Pair;

extern int func_0209a978(int a, int b, int c);
extern int func_02062a78(void *obj, Pair p, int c, int d, int e, int f, int g, int h);
extern void func_02056bc0(void *object, void *node);

int func_ov004_02148f38(char *self)
{
    void *x = *(void **)(self + 0xa0);
    void **vt = *(void ***)x;
    int ret;
    int v;
    int d;
    int k;
    Pair p;

    ((void (*)(void *, int, int))vt[14])(x, 1, 0);

    x = *(void **)(self + 0xa0);
    vt = *(void ***)x;
    ((void (*)(void *))vt[10])(x);

    v = *(int *)(self + 0x84);
    d = 100 - v;
    k = 0x80;
    ret = func_0209a978(100 * d, 100, d);

    p.a = k;
    p.b = 0x92;
    ret = func_02062a78(*(void **)(self + 0xa0), p, k, ret + 0x2e, 0x5a, -1, k, 0);
    func_02056bc0(self + 0x14, (void *)ret);
    return 0;
}
