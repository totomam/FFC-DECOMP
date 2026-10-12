#include "ffc/types.h"

extern void func_0203be8c(void);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void func_0204f550(int v);
extern void *func_02056aec(void *obj);
extern void *func_0205681c(int key);
extern void *func_ov008_0219e91c(void *n);
extern void func_02056bc0(void *object, void *node);
extern int data_0213df18;

void func_ov008_0219f7dc(void *p) {
    int k = 5;
    void *n;
    void *node;

    func_0203be8c();
    func_0203bed8(5, 3, 4, 1, 0, 0);
    func_0203c33c();
    func_0203c264();
    func_0203c36c();
    func_0203c394();
    func_0204f550(data_0213df18);
    n = func_02056aec(p);
    node = func_0205681c(k + 0xff);
    if (node != 0) {
        node = func_ov008_0219e91c(node);
    }
    p = (char *)p + 0x14;
    func_02056bc0(p, node);
    func_02056bc0(p, n);
}
