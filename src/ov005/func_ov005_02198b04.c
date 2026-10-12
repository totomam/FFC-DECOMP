#include "ffc/types.h"

extern void func_02021338(uint32_t size);
extern void *func_020655dc(void *obj, int a, int b);
extern void *func_020655b8(void *obj);
extern void func_02056bc0(void *object, void *node);

void func_ov005_02198b04(char *s)
{
    void *o = *(void **)(s + 0x94);
    int (*check)(void *) = *(int (**)(void *))((char *)*(void **)o + 0x28);
    void *p;
    void *r4;
    void *node;
    char *obj;

    if (check(o) == 0) {
        return;
    }
    func_02021338(0xbc);
    p = *(void **)(s + 0x98);
    ((void (*)(void *, int, int))(*(void **)((char *)*(void **)p + 0x38)))(p, 3, 1);
    r4 = func_020655dc(*(void **)(s + 0x98), 2, 0);
    node = func_020655b8(*(void **)(s + 0x98));
    obj = s + 0x14;
    func_02056bc0(obj, node);
    func_02056bc0(obj, r4);
}
