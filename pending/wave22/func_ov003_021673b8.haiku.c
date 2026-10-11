#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_0201cf34(uint32_t handle, uint32_t *buf);
extern void func_0201ce70(uint32_t handle, uint32_t *buf);

void func_ov003_021673b8(uint32_t *a)
{
    uint32_t buf[38];

    func_0201cf34(data_020b93b8, buf);
    buf[5] = (buf[5] & 0xfff83fff) | ((a[5] << 27) >> 13);
    func_0201ce70(data_020b93b8, buf);
}
