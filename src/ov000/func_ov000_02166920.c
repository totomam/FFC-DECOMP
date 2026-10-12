#include "ffc/types.h"

extern void *func_ov000_02166414(void *x);
extern int func_ov001_021821ac(int a, int b, int *out);
extern void func_ov000_021652a8(int a, int b, int c, void *d, int e);
extern char data_ov000_0216b6b4[];

typedef int (*FnPtr)(int, int, int, int, int);

struct Obj {
    uint8_t pad[0x28];
    FnPtr fn;
    uint32_t f2c;
};

int func_ov000_02166920(void *x, int a, int b, int c, int d)
{
    struct Obj *o = (struct Obj *)func_ov000_02166414(x);
    if (o->fn != 0) {
        uint32_t buf[6];
        int res;
        int v = func_ov001_021821ac(a, b, (int *)buf);
        func_ov000_021652a8(12, 0, 16, data_ov000_0216b6b4, v);
        res = 0;
        if (o->fn(a, b, c, d, o->f2c)) {
            res = 1;
        }
        return res;
    }
    return 0;
}
