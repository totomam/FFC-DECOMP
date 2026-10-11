#include "ffc/types.h"

extern void *func_ov001_0218dde0(void *a, int b);
extern void func_02056c4c(void);
extern int func_ov001_0218de3c(void *a, void *b, void *c, void *d, int e);
extern void func_02056bc0(void *object, void *node);

void func_ov001_0218de64(void *p0, void *p1, void *p2, void *p3)
{
    int node;
    func_ov001_0218dde0(p0, 3);
    func_02056c4c();
    node = func_ov001_0218de3c(p0, p1, p2, p3, 0);
    func_02056bc0(func_ov001_0218dde0(p0, 3), (void *)node);
}
