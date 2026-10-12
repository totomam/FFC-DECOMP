#include "ffc/types.h"

extern void func_020061e4(void *a, int b, uint32_t *c);
extern uint32_t data_020b3af8[];

void func_02006ca4(uint32_t a, ...)
{
    uint32_t arr[128];
    uint32_t *p;
    uint32_t *q;
    int i;
    int v;

    arr[0] = a;
    p = (uint32_t *)((uint32_t)&a & ~3u);
    i = 1;
    q = p + 1;
    for (;;) {
        q++;
        v = (int)q[-1];
        if (v == -1) {
            break;
        }
        arr[i] = (uint32_t)v;
        i++;
    }
    func_020061e4(data_020b3af8, i, arr);
}
