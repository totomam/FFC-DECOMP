#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203bf04(int a, int b, int c, int d);
extern void func_0203c354(void);
extern void func_0203c270(void);
extern void *func_0203c22c(void);
extern void func_02060e88(void *p, int v);
extern void func_02060ea4(void *p, int v);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern void func_0204f550(void *p);
extern void *func_0201c9ac(void *p, int v);
extern void *func_02056aec(void *p);
extern void *func_ov012_021cdf2c(void *obj, Pair s, void *c);
extern void *func_0205681c(int size);
extern void *func_ov012_021cbeac(void *p, void *obj);
extern void func_02056bc0(void *object, void *node);
extern void *data_0213df18;
extern void *data_020b93b8;
extern Pair data_ov012_021d3ba8;

void func_ov012_021cde60(uint8_t *obj)
{
    void *r1;
    void *r5;
    void *r6;
    uint8_t *sub;

    func_0203be8c();
    if (obj[0x84] != 0) {
        func_0203bea0();
        func_0203bf04(5, 4, 0, 0);
        func_0203c354();
        func_0203c270();
        func_02060e88(func_0203c22c(), 2);
        func_02060ea4(func_0203c22c(), 0x10);
    }
    func_0203bed8(5, 3, 4, 1, 0, 0);
    func_0203c33c();
    func_0203c264();
    func_0203c36c();
    func_0203c394();
    func_0204f550(data_0213df18);
    r5 = func_0201c9ac(data_020b93b8, 6);
    r6 = func_02056aec(obj);
    r5 = func_ov012_021cdf2c(obj, data_ov012_021d3ba8, r5);
    r1 = func_0205681c(0x110);
    if (r1 != 0) {
        r1 = func_ov012_021cbeac(r1, obj + 0x80);
    }
    sub = obj + 0x14;
    func_02056bc0(sub, r1);
    func_02056bc0(sub, r5);
    func_02056bc0(sub, r6);
}
