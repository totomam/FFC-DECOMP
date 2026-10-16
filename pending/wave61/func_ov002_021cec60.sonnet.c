#include "ffc/types.h"
typedef struct { int a; int b; } E;
typedef struct { E *p; } It;
void func_ov002_021cec60(It *out, It first, It last, E *key) {
    int n = last.p - first.p;
    while (n > 0) {
        int h = n / 2;
        E *m = first.p + h;
        if (key->b >= m->b) {
            first.p = m + 1;
            n = n - (h + 1);
        } else {
            n = h;
        }
    }
    *out = first;
}
