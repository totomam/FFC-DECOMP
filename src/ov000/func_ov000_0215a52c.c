#include "ffc/types.h"

extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_ov000_02156024(void *p);
extern uint32_t *data_ov000_02170060;

void func_ov000_0215a52c(uint32_t *p0, uint32_t p1, uint32_t p2, uint32_t p3,
                         uint32_t p4, uint32_t p5, uint32_t p6, uint32_t p7)
{
    uint32_t *t;
    data_ov000_02170060 = p0;
    func_02084b2c(data_ov000_02170060, 0, 0x26 << 4);
    data_ov000_02170060[0] = p2;
    data_ov000_02170060[1] = 0;
    data_ov000_02170060[2] = p3;
    data_ov000_02170060[3] = p4;
    data_ov000_02170060[4] = p5;
    data_ov000_02170060[5] = p6;
    data_ov000_02170060[6] = p7;
    t = data_ov000_02170060;
    t[7] = p1;
    func_ov000_02156024(t);
}
