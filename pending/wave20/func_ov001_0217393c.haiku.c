#include "ffc/types.h"

extern void func_0208fd8c(void *p);

void func_ov001_0217393c(void **a) {
    int32_t v = *(int32_t *)*a;
    if (v == 0) {
        return;
    }
    if (v != 1) {
        return;
    }
    if (a[2] != 0) {
        func_0208fd8c(a[2]);
    }
    a[2] = 0;
}
