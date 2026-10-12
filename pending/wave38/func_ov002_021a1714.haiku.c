#include "ffc/types.h"

extern int func_ov002_021c85cc(void *p);
extern int func_ov002_021a38f4(void *p);
extern void func_02021338(int x);
extern int func_ov002_021c861c(void *p, int v);
extern int data_ov002_021d507c[];
extern int data_ov002_021d5080;

int func_ov002_021a1714(uint8_t *a0, int a1, int a2, int a3)
{
    int tmp;
    int *q;
    uint16_t h;
    int r;

    h = *(uint16_t *)(a0 + 0x130);
    r = func_ov002_021c85cc(a0 + 0x144);
    if (r == h) {
        if (a1 > *(uint16_t *)(a0 + 0x130)) {
            if (func_ov002_021a38f4(a0) != 1) {
                func_02021338(0x44f);
            }
        }
    }

    tmp = *(uint16_t *)(a0 + 0x130);
    q = (a1 < tmp) ? &a1 : &tmp;
    q = (data_ov002_021d507c[1] < *q) ? q : &data_ov002_021d5080;
    return func_ov002_021c861c(a0 + 0x144, *q);
}
