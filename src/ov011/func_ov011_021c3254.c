#include "ffc/types.h"

extern void *func_020655dc(void *obj, int a, int b);
extern void *func_020655b8(void *obj);
extern void func_02056bc0(void *object, void *node);
extern void func_02021338(uint32_t x);
extern int func_ov011_021c1234(void *obj);
extern void func_ov011_021c0a44(void *obj);
extern void func_ov011_021c0f54(void *obj);
extern void func_ov011_021c1224(void *obj, int x);

void func_ov011_021c3254(uint8_t *p)
{
    void *r6;
    void *r0;
    uint8_t *q;

    ((void (*)(void *, int, int))(*(void ***)(*(void **)(p + 0x98)))[14])(*(void **)(p + 0x98), 4, 1);

    r6 = func_020655dc(*(void **)(p + 0x98), 3, 0);
    r0 = func_020655b8(*(void **)(p + 0x98));
    q = p + 0x14;
    func_02056bc0(q, r0);
    func_02056bc0(q, r6);
    func_02021338(0xb3);

    if (func_ov011_021c1234(*(void **)(p + 0x9c)) != 0) {
        func_ov011_021c0a44(*(void **)(p + 0x9c));
    } else {
        func_ov011_021c0f54(*(void **)(p + 0x9c));
    }
    func_ov011_021c1224(*(void **)(p + 0x9c), 0);
}
