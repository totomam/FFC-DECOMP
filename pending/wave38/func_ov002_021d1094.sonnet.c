#include "ffc/types.h"

typedef struct { uint8_t data[0x30]; } Elem;
typedef struct { Elem *base; int count; int z; } Arr;
typedef struct { Elem *p; int *c; } It;
typedef struct { int a; int b; int c; int d; } P;
typedef struct { int count; int z; Elem *base; } L;

extern int func_0209a76c(int a, int b);
extern void func_ov002_021d2774(void *out, int n);
extern void func_ov002_021d10fc(int a, int b, It x, It y, int *c);
extern void func_02056858(void *p);

void func_ov002_021d1094(P p) {
    L loc;
    It b;
    It e;
    Arr arr;
    int n;

    n = func_0209a76c(p.b - p.a, 0x30);
    if (n <= 20) {
        n = 0;
    }
    func_ov002_021d2774(&arr, n);
    loc.base = arr.base;
    loc.count = arr.count;
    loc.z = 0;
    e.p = loc.base + loc.count;
    e.c = &loc.count;
    b.p = loc.base;
    b.c = &loc.count;
    It b2 = b;
    func_ov002_021d10fc(p.a, p.b, b2, e, &p.c);
    func_02056858(loc.base);
}
