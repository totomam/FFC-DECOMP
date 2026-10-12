#include "ffc/types.h"

extern void func_02056c4c(void *x);
extern void *func_020655dc(void *obj, int a, int b);
extern void *func_020655b8(void *obj);
extern void func_02056bc0(void *object, void *node);

void func_ov012_021d1294(void *p)
{
    uint8_t *b = (uint8_t *)p;
    if (*(void **)(b + 0xc0) == 0) {
        return;
    }
    func_02056c4c(*(void **)(b + 0xc4));
    {
        void *r4 = func_020655dc(*(void **)(b + 0xc0), 1, 0);
        void *r6 = func_020655b8(*(void **)(b + 0xc0));
        void *r1 = func_020655dc(*(void **)(b + 0xc0), 2, 0);
        void *obj = *(void **)(b + 0xc4);
        func_02056bc0(obj, r1);
        func_02056bc0(obj, r6);
        func_02056bc0(obj, r4);
    }
}
