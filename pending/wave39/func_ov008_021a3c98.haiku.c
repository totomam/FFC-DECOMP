#include "ffc/types.h"

extern void func_02056c9c(void *obj, void *arg);
extern void func_0203be8c(void);
extern void func_0203bed8(int a, int b, int c, int d, void *e, void *f);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0204f550(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_ov008_021a2998(void *p, void *arg);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *object);
extern char data_ov008_021a89e0[];
extern void *data_0213df18;

void *func_ov008_021a3c98(void **obj, void *arg)
{
    void *node;
    void *zero = 0;

    func_02056c9c(obj, zero);
    *obj = data_ov008_021a89e0;
    func_0203be8c();
    func_0203bed8(5, 3, 4, 1, zero, zero);
    func_0203c33c();
    func_0203c264();
    func_0204f550(data_0213df18);
    node = func_0205681c(0x130);
    if (node != 0) {
        node = func_ov008_021a2998(node, arg);
    }
    func_02056bc0((char *)obj + 0x14, node);
    node = func_02056aec(obj);
    func_02056bc0((char *)obj + 0x14, node);
    return obj;
}
