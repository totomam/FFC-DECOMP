#include "ffc/types.h"

extern int func_0208b4d4(int a, int b, uint16_t *c);

void func_0208b6a0(int *a, int *b) {
    uint16_t s;
    if (func_0208b4d4(15, 3, &s) != 0) {
        return;
    }
    if (a != 0) {
        *a = (s & 8) ? 1 : 0;
    }
    if (b != 0) {
        *b = (s & 4) ? 1 : 0;
    }
}
