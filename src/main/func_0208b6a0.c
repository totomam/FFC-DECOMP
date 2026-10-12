#include "ffc/types.h"

extern int func_0208b4d4(int a, int b, uint16_t *c);

int func_0208b6a0(int *a, int *b) {
    uint16_t s;
    int r = func_0208b4d4(15, 3, &s);
    if (r != 0) {
        return r;
    }
    if (a != 0) {
        *a = (s & 8) ? 1 : 0;
    }
    if (b != 0) {
        *b = (s & 4) ? 1 : 0;
    }
    return r;
}
