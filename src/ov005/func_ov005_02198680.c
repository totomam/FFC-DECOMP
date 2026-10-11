#include "ffc/types.h"

extern void func_02021338(int a, int b);
extern void func_ov005_021989e8(void *p);

void func_ov005_02198680(uint8_t *p, uint32_t idx, uint8_t v)
{
    uint8_t *q = p + 0xbc;
    if (v == q[idx]) {
        return;
    }
    q[idx] = v;
    if (v != 0) {
        int c = p[0x104] + 1;
        p[0x104] = c;
        func_02021338(0xbf, c);
    } else {
        int c = p[0x104] - 1;
        p[0x104] = c;
        func_02021338(0xc0, c);
    }
    func_ov005_021989e8(p);
}
