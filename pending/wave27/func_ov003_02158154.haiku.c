#include "ffc/types.h"

extern int func_02024928(void *p);
extern void func_0202b258(void *a, void *b, int c);

void func_ov003_02158154(void *a, void *unused, void *c) {
    void *p;
    int r;
    if (c == 0) return;
    if (*(void **)((uint8_t *)c + 0x34) == 0) return;
    p = *(void **)((uint8_t *)a + 0x110);
    if (p == 0) return;
    if (*(void **)((uint8_t *)p + 0x34) == 0) return;
    r = func_02024928(*(void **)((uint8_t *)p + 0x34));
    if (r == -1) return;
    func_0202b258(c, *(void **)((uint8_t *)a + 0x110), r);
}
