#include "ffc/types.h"

typedef struct {
    int a;
    int b;
} Pair;

extern int func_0209a978(int a, int b, int c);
extern int func_02062a78(void *obj, Pair p, Pair q, int c, int d, Pair r);
extern void func_02056bc0(void *object, void *node);

int func_ov004_02148f38(char *self)
{
    void *x = *(void **)(self + 0xa0);
    void **vt = *(void ***)x;
    int ret;
    int d;
    Pair p, q;

    ((void (*)(void *, int, int))vt[14])(x, 1, 0);

    x = *(void **)(self + 0xa0);
    vt = *(void ***)x;
    ((void (*)(void *))vt[10])(x);

    q.a = 0x80;
    d = 100 - *(int *)(self + 0x84);
    ret = func_0209a978(100 * d, 100, d) + 0x2e;

    p.a = 0x80;
    p.b = 0x92;
    q.b = ret;
    ret = func_02062a78(*(void **)(self + 0xa0), p, q, 0x5a, -1, q);
    func_02056bc0(self + 0x14, (void *)ret);
    return 0;
}
