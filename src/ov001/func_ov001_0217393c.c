#include "ffc/types.h"

extern void func_0208fd8c(uint32_t x);

void func_ov001_0217393c(uint32_t *p) {
    uint32_t *q = (uint32_t *)p[0];
    if (*q == 0) return;
    if (*q != 1) return;
    if (p[2] != 0) {
        func_0208fd8c(p[2]);
    }
    p[2] = 0;
}
