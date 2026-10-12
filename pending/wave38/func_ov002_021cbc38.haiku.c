#include "ffc/types.h"

extern void func_ov002_021cc934(void *out, int n);
extern void func_ov002_021cbc9c(int a, int b, void *begin, int *pm, void *end, int *pm2, void *pc);
extern void func_02056858(void *p);

typedef struct {
    int a;
    int b;
    void *c;
    int d;
} P;

typedef struct {
    void *p;
    int n;
} Buf;

void func_ov002_021cbc38(P s) {
    Buf buf;
    int n;
    int m;
    void *begin;
    void *end;

    n = (s.b - s.a) / 8;
    if (n <= 20) {
        n = 0;
    }
    func_ov002_021cc934(&buf, n);
    begin = buf.p;
    m = buf.n;
    end = (uint8_t *)begin + (m << 3);
    func_ov002_021cbc9c(s.a, s.b, begin, &m, end, &m, &s.c);
    func_02056858(begin);
}
