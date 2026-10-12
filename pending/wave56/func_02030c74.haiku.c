#include "ffc/types.h"

extern void func_02022820(void *a, void *b);
extern int func_02022850(void *a);
extern uint32_t func_02022784(void *a);

void func_02030c74(uint8_t *p, uint32_t x, uint32_t y, uint32_t z) {
    int i;
    int j;
    uint8_t *base;

    i = 0;
    for (j = 0; j < 16; j++) {
        p[j + 0x448] = i;
        p[j + 0x3f8] = p[j + 0x448];
    }

    base = p + 0xd8;
    do {
        func_02022820(&x, base + i * 50);
        p[i + 0x3f8] = 1;
        i++;
    } while (i < 16 && func_02022850(&x) != 0);

    for (i = 0; i < 16; i++) {
        if (p[i + 0x3f8]) {
            uint8_t *q = base + i * 50;
            *(uint32_t *)(p + 0x408 + i * 4) = func_02022784(&q);
            if (*(uint32_t *)(p + 0x408 + i * 4) != 0x7fffffff) {
                p[i + 0x448] = 1;
            }
        }
    }
}
