#include "ffc/types.h"

extern void *func_02079d10(void *a, void *b, uint32_t c, uint32_t d);
extern void *func_02079e1c(void *a, void *b);
extern int func_0207af5c(void *a, int b, void *c, int d, void **e);
extern void func_02079d78(void *a);
extern int func_0207aed0(void *a, int b, void *c, int d, void **e);
extern void func_02079d80(void *a, uint32_t b, int c, void *d);
extern void func_02079a8c(void *a, uint8_t b);
extern void func_02079abc(void *a, uint8_t b);
extern void func_02079b40(void *a, void *b);

int func_0207b578(void *p6, void *r7in, void *arg2, uint32_t arg3, uint8_t *arg4, void *arg5)
{
    void *h;
    void *x;
    void *o1;
    void *o2;
    uint32_t off;

    h = func_02079d10(p6, r7in, arg3, arg3);
    if (h == 0) {
        return 0;
    }
    x = func_02079e1c(r7in, h);
    if (func_0207af5c(arg2, 6, x, 0, &o2) != 0) {
        func_02079d78(h);
        return 0;
    }
    if (func_0207aed0(arg5, 1, x, 0, &o1) != 0) {
        func_02079d78(h);
        return 0;
    }
    off = *(uint32_t *)((uint8_t *)o1 + 0x18);
    func_02079d80(h, (uint8_t *)o1 + off, 0, o2);
    func_02079a8c(p6, arg4[6]);
    func_02079abc(p6, arg4[7]);
    func_02079b40(p6, arg5);
    return 1;
}
