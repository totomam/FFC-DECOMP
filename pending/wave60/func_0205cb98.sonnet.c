#include "ffc/types.h"
extern void func_02059b60(void *p, int a, int b, int c, int d, int e, int f);
extern uint8_t data_020b0ee4[];
void *func_0205cb98(uint32_t *p, int a, int b, int c, int d, int e, int f) {
    func_02059b60(p, a, b, c, d, e, f);
    *(uint16_t *)((uint8_t *)p + 0x24) = 0;
    p[0] = (uint32_t)data_020b0ee4;
    p[10] = 0x1000;
    p[11] = 0x1000;
    p[12] = 0;
    p[13] = 0;
    return p;
}
