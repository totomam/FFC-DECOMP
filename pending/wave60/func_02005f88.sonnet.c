#include "ffc/types.h"
extern void func_02005fd4(void *p, int n);
typedef struct { int a; int *arr; int n; } S;
void func_02005f88(S *p, int n) {
    int i = n, j = n;
    for (; j < p->n; j = i) {
        p->arr[j] = -1;
        i++;
    }
    p->n = n;
    func_02005fd4(p, n);
}
