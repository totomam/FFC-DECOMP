#include "ffc/types.h"

extern int func_ov001_02181ddc(void *p);

typedef int (*FnT)(void *, void *, int, int, int, int, int);

typedef struct Obj {
    uint8_t pad0[0x14];
    int32_t f14;
    uint8_t pad1[4];
    int32_t f1c;
    uint8_t pad2[4];
    int32_t f24;
    FnT f28;
    FnT f2c;
} Obj;

int func_ov001_021801a4(Obj *a, Obj *b, int c, int d, int e5, int e6, int e7, int e8)
{
    FnT fn;

    if (a == 0) {
        return 1;
    }
    fn = e8 ? a->f28 : a->f2c;
    if (fn == 0) {
        return 1;
    }
    if (e7 == 0 || e6 == 0) {
        e6 = 0;
        e7 = 0;
    }
    a->f1c++;
    if (b != 0) {
        b->f24++;
    }
    fn(a, b, c, d, e5, e6, e7);
    a->f1c--;
    if (b != 0) {
        b->f24--;
    }
    if (a->f14 != 0 && a->f1c == 0) {
        func_ov001_02181ddc(a);
        return 0;
    }
    return 1;
}
