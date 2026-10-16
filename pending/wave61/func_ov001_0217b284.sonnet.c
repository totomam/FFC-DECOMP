#include "ffc/types.h"
extern uint8_t data_ov001_02190e6c[];
extern void func_ov001_0217ef6c(int a, void *b);
extern uint32_t func_ov000_021658c0(int a);
extern int func_ov000_0216888c(int a, uint32_t *b, void *c, int d, int e);
extern uint32_t *func_ov000_0216876c(int a);
extern void func_ov000_021653f4(uint32_t a);
extern void func_ov001_0217b1bc(void);
int func_ov001_0217b284(int a, int b, int c, uint32_t *d) {
    uint32_t v;
    int r, z;
    if (c == 0) {
        func_ov001_0217ef6c(a, data_ov001_02190e6c);
        return 2;
    }
    v = func_ov000_021658c0(c);
    z = 0;
    r = func_ov000_0216888c(b, &v, (void*)func_ov001_0217b1bc, z, 1);
    if (r != z - 1) {
        *d = func_ov000_0216876c(b)[1];
    }
    func_ov000_021653f4(v);
    v = 0;
    return 0;
}
