#include "ffc/types.h"

extern int func_ov000_0215b6a0(int x);
extern int func_ov000_0215b5f8(void);
extern uint8_t *func_ov000_02163634(int x);
extern uint8_t *func_ov000_0215917c(int a, int b);
extern void func_020928f0(void *dst, void *src, int n);
extern void func_02084ca4(int a, void *b, int c);
extern void func_ov001_02180728(int a, void *b, int c, int d);
extern void func_ov000_021591a8(int a, void *b, int c);
extern uint8_t data_ov000_0216b2c0[];

void func_ov000_021644a4(uint8_t a, int b, int c, int d, int e)
{
    int v;
    int flag = 0;
    uint8_t *p;

    v = func_ov000_0215b6a0(b);
    if (v == 0) {
        if (func_ov000_0215b5f8() != 0) {
            return;
        }
        v = func_ov000_0215b6a0(func_ov000_02163634(0)[0x16]);
        if (v == 0) {
            return;
        }
        flag = 1;
    }
    if (e == 1 && flag == 1) {
        p = func_ov000_0215917c(4, d + 8);
        if (p == 0) {
            return;
        }
        func_020928f0(p, data_ov000_0216b2c0, 3);
        p[3] = a;
        *(uint32_t *)(p + 4) = 1u << b;
        func_02084ca4(c, p + 8, d);
        func_ov001_02180728(v, p, d + 8, 0);
        if (p != 0) {
            func_ov000_021591a8(4, p, 0);
        }
        return;
    }
    func_ov001_02180728(v, (void *)c, d, 0);
}
