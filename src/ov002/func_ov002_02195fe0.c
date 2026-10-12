#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0203beb4(int a, int b, int c, int d);
extern void func_0203bf28(int a, int b, int c, int d, int e, int f);
extern void func_0204f550(uint32_t v);
extern uint32_t func_0203c2e4(void);
extern void func_0205947c(uint32_t r, int v);
extern void func_0203c33c(void);
extern void func_0203c354(void);
extern void func_0203c264(void);
extern void func_0203c270(void);
extern void func_0203c380(void);
extern void func_0203c394(void);
extern uint32_t func_0203c2f4(void);
extern void func_020591f4(uint32_t r, int v);
extern void func_02056dc8(uint8_t *p, uint32_t v);
extern uint32_t data_0213df18;
extern uint32_t data_0213df20;
extern S data_ov002_021d47c8;

void func_ov002_02195fe0(uint8_t *a)
{
    func_0203be8c();
    func_0203bea0();
    func_0203beb4(1, 3, 2, 1);
    func_0203bf28(5, 2, 4, 1, 0, 0);
    func_0204f550(data_0213df18);
    func_0205947c(func_0203c2e4(), 1);
    func_0203c33c();
    func_0203c354();
    func_0203c264();
    func_0203c270();
    func_0203c380();
    func_0203c394();
    func_020591f4(func_0203c2f4(), 3);
    func_02056dc8(a, data_0213df20);
    *(S *)(a + 0x3c0) = data_ov002_021d47c8;
}
