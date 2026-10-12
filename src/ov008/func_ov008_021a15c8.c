#include "ffc/types.h"

extern void func_02056c9c(void *obj, int x);
extern void func_0203be8c(void);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void func_0204f550(uint32_t v);
extern void *func_0205681c(uint32_t size);
extern void *func_ov008_021a12b4(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *obj);
extern char data_ov008_021a87dc[];
extern uint32_t data_0213df18[];

void *func_ov008_021a15c8(void *param)
{
    void *p = param;
    void *node;
    func_02056c9c(p, 0);
    *(void **)p = data_ov008_021a87dc;
    func_0203be8c();
    func_0203bed8(5, 3, 4, 1, 0, 0);
    func_0203c33c();
    func_0203c264();
    func_0203c36c();
    func_0203c394();
    func_0204f550(data_0213df18[0]);
    node = func_0205681c(0x158);
    if (node != 0) {
        node = func_ov008_021a12b4(node);
    }
    func_02056bc0((char *)p + 0x14, node);
    node = func_02056aec(p);
    func_02056bc0((char *)p + 0x14, node);
    return p;
}
