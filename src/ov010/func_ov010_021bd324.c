#include "ffc/types.h"

extern int func_02056c4c(void *p);
extern void *func_020655dc(void *p, int a, int b);
extern void *func_020655b8(void *p);
extern void func_02056bc0(void *object, void *node);
extern void func_02021338(int x);

void func_ov010_021bd324(uint8_t *self) {
    void *a = *(void **)(self + 0x98);
    void **vt = *(void ***)a;
    int r = ((int (*)(void *))vt[0x2c / 4])(a);
    if (r != 0) {
        void *b = *(void **)(self + 0x9c);
        void **vt2 = *(void ***)b;
        ((void (*)(void *, int, int))vt2[0x38 / 4])(b, 2, 1);
        func_02056c4c(self + 0x14);
        void *d = func_020655dc(*(void **)(self + 0x9c), 1, 0);
        void *e = func_020655b8(*(void **)(self + 0x9c));
        uint8_t *q = self + 0x14;
        func_02056bc0(q, e);
        func_02056bc0(q, d);
        func_02021338(0xb6);
    }
}
