#include "ffc/types.h"
typedef struct { uint32_t a; uint16_t b; uint32_t c; } P;
extern int *func_ov000_02166414(uint32_t a, uint32_t b);
extern void func_ov000_021652a8(int a, int b, int c, void *d);
extern int func_ov000_0216888c(int a, P *p, void *cb, int d, int e);
extern int *func_ov000_0216876c(int a);
extern int func_ov001_0218082c(int a);
extern char data_ov000_0216b7fc[];
extern void func_ov000_02166444(void);
int func_ov000_021670e8(uint32_t a, uint16_t b) {
    int *o = func_ov000_02166414(a, b);
    P p;
    int z;
    int r;
    if (o[3] == 0) {
        func_ov000_021652a8(12, 0, 15, data_ov000_0216b7fc);
        return 0;
    }
    p.a = a;
    p.b = b;
    z = 0;
    r = func_ov000_0216888c(o[1], &p, (void*)func_ov000_02166444, 0, z);
    if (r + 1 != z) {
        return func_ov001_0218082c(func_ov000_0216876c(o[1])[2]);
    }
    return z;
}
