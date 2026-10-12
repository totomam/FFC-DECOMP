#include "ffc/types.h"

extern void *func_02062a30(void *owner);
extern void *func_02062a54(void *owner);
extern void *func_020655dc(void *obj, int a, int b);
extern void func_02056bc0(void *object, void *node);
extern void func_02056c4c(void *obj);

void func_ov004_0214bdb0(void *self, int flag)
{
    void **s = (void **)self;
    void *n;
    void *r5;
    void *obj;

    if (s[39] == 0) {
        return;
    }
    if (flag != 0) {
        r5 = func_02062a30(s[43]);
        obj = func_020655dc(s[39], 3, 0);
        n = s[38];
        func_02056bc0(n, obj);
        func_02056bc0(n, r5);
    } else {
        func_02056c4c(s[38]);
        r5 = func_02062a54(s[43]);
        obj = func_020655dc(s[39], 6, 0);
        n = s[38];
        func_02056bc0(n, obj);
        func_02056bc0(n, r5);
    }
}
