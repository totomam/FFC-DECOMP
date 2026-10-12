#include "ffc/types.h"

extern uint32_t data_0213ec3c[];
extern void func_020849e0(uint32_t a, uint32_t b, uint32_t c);
extern void func_020878ac(uint32_t a, uint32_t b);
extern void func_02089c40(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_0207a534(void)
{
    uint32_t *p = data_0213ec3c;
    uint32_t m;
    if (p[0] == 0) {
        return;
    }
    {
        uint32_t a = p[3];
        uint32_t b = p[5];
        m = 0;
        p[7] = m;
        func_020849e0(0, a, b);
    }
    func_020849e0(0, p[4], p[5]);
    func_020878ac(p[3], p[5]);
    func_020878ac(p[4], p[5]);
    m = 0;
    if ((int32_t)p[11] >= 0) {
        m = 1u << (int32_t)p[11];
    }
    func_02089c40(p[9], p[10], m, 0);
}
