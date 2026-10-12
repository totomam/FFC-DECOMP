#include "ffc/types.h"

extern void func_02073928(void);
extern int func_ov001_02188620(void (*fn)(void), void *a, void *b);

void func_02074680(uint8_t *p)
{
    void *a;
    void *b;

    if (*(uint32_t *)(p + 0x34) & 1) {
        b = *(void **)(p + 0x3c);
    } else {
        b = p + 0x35;
    }

    if (*(uint32_t *)(p + 0x28) & 1) {
        a = *(void **)(p + 0x30);
    } else {
        a = p + 0x29;
    }

    if (func_ov001_02188620(func_02073928, a, b) != 0) {
        uint8_t *q = *(uint8_t **)(p + 0x14);
        q[0x13] = 1;
    }
}
