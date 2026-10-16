#include "ffc/types.h"
typedef struct { int *a; int *b; } R;
extern int func_ov009_021a5cdc(int a, int *b, int c);
void func_ov009_021a5494(int **out, R r, int c, int key) {
    int pad[3]; pad[0]=0; int *first = r.a;
    int n = (r.b - first);
    while (n > 0) {
        int h = n / 2;
        int *mid = first + h;
        if (func_ov009_021a5cdc(key, mid, c)) {
            first = mid + 1;
            *(int *volatile *)&r.a = first;
            n -= h + 1;
        } else {
            n = h;
        }
    }
    *out = *(int *volatile *)&r.a;
}
