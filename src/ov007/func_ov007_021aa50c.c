#include "ffc/types.h"

extern void *func_02056aec(void *p);
extern void *func_0203b708(int n);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021aa50c(void *a) {
    void *n;
    void *m;
    uint8_t *p;

    n = func_02056aec(a);
    m = func_0203b708(30);
    p = (uint8_t *)a + 0x14;
    func_02056bc0(p, m);
    func_02056bc0(p, n);
}
