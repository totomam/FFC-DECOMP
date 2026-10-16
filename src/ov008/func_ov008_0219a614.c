#include "ffc/types.h"
extern void func_02056c9c(void *p, int a);
extern void func_0203be8c(void);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0204f550(void *p);
extern void *func_0205681c(int n);
extern void *func_ov008_02199640(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *p);
extern uint32_t data_ov008_021a783c;
extern void *data_0213df18;
void *func_ov008_0219a614(uint32_t *self) {
    int z = 0;
    void *p;
    func_02056c9c(self, 0);
    *self = (uint32_t)&data_ov008_021a783c;
    func_0203be8c();
    func_0203bed8(5, 3, 4, 1, z, z);
    func_0203c33c();
    func_0203c264();
    func_0204f550(data_0213df18);
    p = func_0205681c(0x150);
    if (p != 0) p = func_ov008_02199640(p);
    func_02056bc0((uint8_t*)self + 0x14, p);
    func_02056bc0((uint8_t*)self + 0x14, func_02056aec(self));
    return self;
}
