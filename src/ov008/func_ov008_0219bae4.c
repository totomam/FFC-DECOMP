#include "ffc/types.h"

extern void func_02056c9c(void *p, int a, int b, int c);
extern void func_0203be8c(void);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void func_0204f550(uint32_t v);
extern void *func_0205681c(uint32_t size);
extern void *func_ov008_0219ab9c(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *o);
extern uint32_t data_ov008_021a7ac0[];
extern uint32_t data_0213df18[];

void *func_ov008_0219bae4(void **o, void *node, int c, int d)
{
    void *r;
    func_02056c9c(o, 0, c, d);
    *o = data_ov008_021a7ac0;
    func_0203be8c();
    func_0203bed8(5, 3, 4, 1, 0, 0);
    func_0203c33c();
    func_0203c264();
    func_0203c36c();
    func_0203c394();
    func_0204f550(*(uint32_t *)data_0213df18);
    r = func_0205681c(0x11c);
    if (r != 0) {
        r = func_ov008_0219ab9c(r, node);
    }
    func_02056bc0((char *)o + 0x14, r);
    r = func_02056aec(o);
    func_02056bc0((char *)o + 0x14, r);
    return o;
}
