#include "ffc/types.h"

extern int func_ov011_021c59d4(void *obj);
extern void func_02021338(int code);
extern void func_ov011_021c59cc(void *obj, int flag);
extern void *func_ov011_021c558c(void *obj);
extern void *func_020655dc(void *obj, int a, int b);
extern void func_02056bc0(void *object, void *node);

void func_ov011_021c5d3c(void *self, void *p1)
{
    if (p1 != 0) {
        void *r4;
        if (func_ov011_021c59d4(*(void **)((uint8_t *)self + 0x94)) == 0) {
            func_02021338(0xb9);
        }
        func_ov011_021c59cc(*(void **)((uint8_t *)self + 0x94), 0);
        r4 = func_ov011_021c558c(*(void **)((uint8_t *)self + 0x94));
        {
            void *r1 = func_020655dc(*(void **)((uint8_t *)self + 0x98), 3, 1);
            self = (uint8_t *)self + 0x14;
            func_02056bc0(self, r1);
        }
        func_02056bc0(self, r4);
    } else {
        void *obj = *(void **)((uint8_t *)self + 0x98);
        void **vt = *(void ***)obj;
        void (*fn)(void *, int, int) = (void (*)(void *, int, int))vt[0x38 / 4];
        fn(obj, 2, 1);
    }
}
