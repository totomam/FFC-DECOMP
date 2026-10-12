#include "ffc/types.h"

extern void func_ov001_02171ee0(void);
extern void func_ov000_021653f4(void *p);
extern void func_ov001_02171a9c(void *p);
extern void func_ov001_02173a60(void *p);
extern void func_ov001_02171ee4(void);
extern int32_t data_ov001_02194be8[];

int func_ov001_02172524(int32_t *a)
{
    void *t;

    if (a == 0) {
        return 0;
    }
    if (a[0] == 0) {
        return 0;
    }
    if (a[1] < 0) {
        return 0;
    }
    if (a[1] >= data_ov001_02194be8[0]) {
        return 0;
    }

    func_ov001_02171ee0();
    func_ov000_021653f4((void *)a[5]);
    t = (void *)a[13];
    a[5] = 0;
    func_ov000_021653f4(t);
    t = (void *)a[6];
    a[13] = 0;
    func_ov000_021653f4(t);
    t = (void *)a[9];
    a[6] = 0;
    func_ov000_021653f4(t);
    t = (void *)a[11];
    a[9] = 0;
    func_ov000_021653f4(t);
    a[11] = 0;
    func_ov000_021653f4((void *)a[0x4c]);
    a[11] = 0;
    func_ov000_021653f4((void *)a[0x63]);
    a[0x63] = 0;

    func_ov001_02171a9c(&a[0x16]);
    func_ov001_02171a9c(&a[0x1f]);
    func_ov001_02171a9c(&a[0x28]);
    func_ov001_02171a9c(&a[0x31]);
    func_ov001_02171a9c(&a[0x3a]);

    if (a[0x5a] != 0) {
        func_ov001_02173a60(a);
    }

    if (a[0x67] != 0) {
        void (*f)(void *, void *) = (void (*)(void *, void *))a[0x6e];
        if (f != 0) {
            f(a, &a[0x65]);
        }
        a[0x67] = 0;
    }

    a[0x74] = 0;
    a[0] = 0;
    data_ov001_02194be8[1] = data_ov001_02194be8[1] - 1;
    func_ov001_02171ee4();
    return 1;
}
