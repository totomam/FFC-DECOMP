#include "ffc/types.h"

extern uint8_t data_ov007_021c5bb4[];
extern void func_020771d8(void *p, int a, int b, int c, int d, int e, int f);

void *func_ov007_021b1158(void *p, int a, int b, int c, int x, int y)
{
    func_020771d8(p, a, b, c, x, y, 100);
    *(uint8_t **)p = data_ov007_021c5bb4;
    ((uint8_t *)p)[0xb0] = (x < 0);
    return p;
}
