#include "ffc/types.h"
extern void func_ov004_0214f66c(int *out, void *obj, int flag);
extern void *func_02081210(int x, int y);
typedef struct { int pad[5]; int a; int b; int c; } L;
void func_ov004_0214f628(int *dst, uint8_t *obj) {
    L l;
    if (obj[0xf5] == 0) {
        func_ov004_0214f66c(dst, obj, 0);
        return;
    }
    func_ov004_0214f66c(&l.a, obj, 1);
    int x = l.a;
    func_ov004_0214f66c(&l.b, obj, 0);
    *(void **)dst = func_02081210(l.b + x, 2 << 12);
}
