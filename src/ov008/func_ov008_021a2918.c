#include "ffc/types.h"

extern void func_02056c9c(void *obj, int x);
extern void func_0203be8c(void);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void func_0204f550(void *p);
extern void *func_0205681c(int size);
extern void *func_ov008_021a1770(void *p, void *b, int c);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *obj);
extern uint8_t data_ov008_021a8a28[];
extern uint8_t data_0213df18[];

void *func_ov008_021a2918(void *obj, void *b, int c)
{
    void *node;

    func_02056c9c(obj, 0);
    *(void **)obj = data_ov008_021a8a28;
    func_0203be8c();
    func_0203bed8(5, 3, 4, 1, 0, 0);
    func_0203c33c();
    func_0203c264();
    func_0203c36c();
    func_0203c394();
    func_0204f550(*(void **)data_0213df18);
    node = func_0205681c(0x14c);
    if (node) {
        node = func_ov008_021a1770(node, b, c);
    }
    func_02056bc0((uint8_t *)obj + 0x14, node);
    node = func_02056aec(obj);
    func_02056bc0((uint8_t *)obj + 0x14, node);
    return obj;
}
