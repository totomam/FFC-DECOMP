#include "ffc/types.h"
extern void *func_0205681c(int n);
extern void func_ov003_021656ec(void *o, int a, uint16_t b, uint16_t c, int d, int e, int f, int g, uint16_t h, int i, int j);
void func_ov003_0216bd50(int a, char *b) {
    int *p = (int *)(b + *(int *)(b + 8));
    int v0 = p[0];
    int v1 = p[1];
    int fl = p[2] == 1;
    int v3 = p[3];
    int v4 = p[4];
    int v7 = p[7];
    int v6 = p[6];
    int v5 = p[5];
    int v8 = p[8];
    void *o = func_0205681c(0xa0);
    if (o == 0) return;
    func_ov003_021656ec(o, a, v0, v1, v3, v4, v6, v5, v7, v8, fl);
}
