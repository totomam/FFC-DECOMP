#include "ffc/types.h"

extern int32_t func_ov001_021856f0(void *p);
extern void func_ov001_02185754(void *p, int32_t v);

void func_ov001_02185ccc(int32_t *p) {
    void *r4 = (void *)(p + 5);
    while (!(p[4] >= p[1]) && p[7] > 0) {
        func_ov001_02185754(p, func_ov001_021856f0(r4));
    }
}
