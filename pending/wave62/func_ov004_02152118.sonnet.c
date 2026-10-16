#include "ffc/types.h"
typedef struct { uint8_t a; } S;
typedef struct { uint8_t a, b; } T;
extern int func_ov004_021528b0(void *x, int y);
extern void func_ov004_02152494(void *q, int v, S s);
extern int func_0209a76c(int a, int b);
void func_ov004_02152118(int *p, int *q, int r2, int r3) {
    T t;
    int v = func_ov004_021528b0(p, p[1] + r3 - p[2]);
    t.a = 0;
    t.b = t.a;
    func_ov004_02152494(q, v, *(S*)&t);
    q[4] = func_0209a76c(r2 - p[0], 0x18);
}
