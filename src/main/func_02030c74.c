#include "ffc/types.h"

extern void func_02022820(void *a, void *b);
extern int func_02022850(void *a);
extern uint32_t func_02022784(void *a);

void func_02030c74(uint8_t *p, uint32_t x, uint32_t y, uint32_t z) {
    int i;
    int j;
    uint8_t *base;
    uint8_t *q;
    uint32_t *xp;
    uint32_t *v;
    uint8_t *f;

    i = 0;
    for (j = 0; j < 16; j++) {
        p[j + 0x448] = i;
        p[j + 0x3f8] = p[j + 0x448];
    }

    xp = &x;
    base = p + 0xd8;
    do {
        func_02022820(xp, base + i * 50);
        p[i + 0x3f8] = 1;
        i++;
    } while (i < 16 && func_02022850(xp) != 0);

    base = p + 0xd8;
    for (i = 0; i < 16; i++) {
        f = p + i;
        if (f[0x3f8]) {
            q = base + i * 50;
            v = (uint32_t *)(p + i * 4);
            v[0x102] = func_02022784(&q);
            if (v[0x102] != 0x7fffffff) {
                f[0x448] = 1;
            }
        }
    }
}
