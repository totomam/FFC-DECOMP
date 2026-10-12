#include "ffc/types.h"

extern void func_0203be8c(void);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void func_0204f550(void *x);
extern void *func_02056aec(void *obj);
extern void *func_0205681c(uint32_t size);
extern void *func_ov008_021a5e80(void *a, void *b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern void *data_0213df18;

void func_ov008_021a7114(void *p)
{
    void *r4;
    void *r1;

    func_0203be8c();
    func_0203bed8(5, 3, 4, 1, 0, 0);
    func_0203c33c();
    func_0203c264();
    func_0203c36c();
    func_0203c394();
    func_0204f550(data_0213df18);
    r4 = func_02056aec(p);
    r1 = func_0205681c(0x114);
    if (r1 != 0) {
        r1 = func_ov008_021a5e80(r1, (uint8_t *)p + 0x80, 0);
    }
    p = (uint8_t *)p + 0x14;
    func_02056bc0(p, r1);
    func_02056bc0(p, r4);
}
