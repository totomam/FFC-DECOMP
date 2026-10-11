#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_0201cf34(uint32_t, uint32_t *);
extern void func_0201ce70(uint32_t, uint32_t *);

void func_ov003_02167404(uint32_t *p)
{
    uint32_t buf[38];

    func_0201cf34(data_020b93b8, buf);
    buf[7] = (buf[7] & ~0xfU) | (p[5] & 0xfU);
    func_0201ce70(data_020b93b8, buf);
}
