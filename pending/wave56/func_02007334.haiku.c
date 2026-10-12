#include "ffc/types.h"

extern void func_0200753c(void *p, uint32_t x);
extern void func_02005fec(void *p);
extern int func_02007844(void *p, int i);
extern int func_02007838(void *p, int i);
extern void func_0200759c(void *p, int v, uint16_t bit);
extern int func_02007850(void *p, int i);
extern void func_02079ad0(void *p, uint16_t bit, int v);
extern void func_020076ec(void *p);

void func_02007334(void *a)
{
    uint8_t *p = (uint8_t *)a;
    int i;
    int v;

    if (p[0x14] == 0) {
        func_0200753c(a, *(uint32_t *)(p + 0x20));
    }
    func_02005fec(p + 0x14);

    for (i = 0; i < 16; i++) {
        if (func_02007844(p + 0x5c, i) != 0) {
            v = func_02007838(p + 0x5c, i);
            if (v != -1) {
                func_0200759c(a, v, (uint16_t)(1 << i));
            }
        }
    }

    for (i = 0; i < 16; i++) {
        if (func_02007844(p + 0x5c, i) != 0) {
            v = func_02007850(p + 0x5c, i);
            func_02079ad0(a, (uint16_t)(1 << i), v);
        }
    }

    func_020076ec(p + 0x5c);
}
