#include "ffc/types.h"

extern void func_0203be8c(void);
extern void func_0203bed8(int a, int b, int c, int d, int e, int f);
extern int func_0203c2e4(void);
extern void func_0205947c(int a, int b);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0204f550(uint32_t v);
extern void func_0203c36c(void);
extern void func_0203c394(void);
extern uint32_t data_0213df18;

void func_ov010_021bdef8(void) {
    int x = 1;
    int y = 1;
    func_0203be8c();
    func_0203bed8(4, 0, 4, 1, x, y);
    {
        int r = func_0203c2e4();
        func_0205947c(r, 1);
    }
    func_0203c33c();
    func_0203c264();
    func_0204f550(data_0213df18);
    func_0203c36c();
    func_0203c394();
}
