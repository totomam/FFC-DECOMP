#include "ffc/types.h"

extern int func_0209a76c(int a, int b);
extern void func_ov002_021d2774(void *out, int n);
extern void func_ov002_021d10fc(int a, int b, void *base, int *cnt, void *end, int *cnt2, int *c);
extern void func_02056858(void *p);

typedef struct { uint8_t data[0x30]; } Elem;
typedef struct { Elem *base; int count; int z; } Arr;
typedef struct { int a; int b; int c; int d; } P;

void func_ov002_021d1094(P p) {
    Arr arr;
    int n;
    int cnt;
    Elem *base;

    n = func_0209a76c(p.b - p.a, 0x30);
    if (n <= 20) {
        n = 0;
    }
    func_ov002_021d2774(&arr, n);
    base = arr.base;
    cnt = arr.count;
    arr.z = 0;
    func_ov002_021d10fc(p.a, p.b, base, &cnt, base + cnt, &cnt, &p.c);
    func_02056858(base);
}
