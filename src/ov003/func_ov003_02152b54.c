#include "ffc/types.h"

extern int func_ov003_02152b0c(uint8_t *p);
extern void func_0201cf34(uint32_t d, uint32_t *buf);
extern void func_ov003_02152bb0(uint8_t *p);
extern void func_0201ce70(uint32_t d, uint32_t *buf);
extern uint32_t data_020b93b8;

void func_ov003_02152b54(uint8_t *p)
{
    uint32_t buf[38];

    if (func_ov003_02152b0c(p) != 0) {
        func_0201cf34(data_020b93b8, buf);
        if ((int32_t)*(int32_t *)(p + 0xdc) < 0) {
            func_ov003_02152bb0(p);
        }
        buf[7] = (buf[7] & ~0x10u) | ((*(uint32_t *)(p + 0xdc) & 1u) << 4);
        func_0201ce70(data_020b93b8, buf);
    }
}
