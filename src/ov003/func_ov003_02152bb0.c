#include "ffc/types.h"

extern int32_t func_ov003_02152b0c(void *p);
extern void func_0201cf34(uint32_t arg, void *out);
extern uint32_t data_020b93b8;

void func_ov003_02152bb0(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    uint32_t buf[38];

    if (func_ov003_02152b0c(p) != 0) {
        if (*(int32_t *)(p + 0xdc) < 0) {
            func_0201cf34(data_020b93b8, buf);
            *(uint32_t *)(p + 0xdc) = (buf[7] << 27) >> 31;
        }
        *(uint32_t *)(p + 0xdc) = (*(uint32_t *)(p + 0xdc) == 0) ? 1 : 0;
    }
}
