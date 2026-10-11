#include "ffc/types.h"

extern void func_02021338(void *a);
extern void func_02021344(void *a, int b);

void func_ov003_0215b1b0(uint8_t *p, void *r1, int r2)
{
    uint8_t *s = *(uint8_t **)(p + 0xa8);
    if (s[0xc] != 0) {
        if (r2 != 0) {
            func_02021338(r1);
        } else {
            func_02021344(r1, 0);
        }
    }
}
