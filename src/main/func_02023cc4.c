#include "ffc/types.h"

extern void *func_02023638(void *a);

void func_02023cc4(uint8_t *self, uint8_t *param)
{
    uint8_t *ptr;
    int32_t n;
    int32_t i;
    int32_t sz;

    *(uint8_t **)(self + 0xe4) = param;
    ptr = (uint8_t *)func_02023638(param);
    n = *(int32_t *)(*(uint8_t **)(self + 0xe4) + 0x10);
    for (i = 0; i < 32; i++) {
        *(uint8_t **)(self + 0xf4 + i * 4) = 0;
    }
    if (*(int32_t *)(*(uint8_t **)(self + 0xe4) + 0x18) != 0 && ptr != 0 && n > 0) {
        do {
            int32_t idx = *(int32_t *)ptr;
            if (idx >= 32) {
                break;
            }
            ptr += 4;
            *(uint8_t **)(self + 0xf4 + idx * 4) = ptr;
            sz = *(int32_t *)(*(uint8_t **)(self + 0xe4) + 0x18) * 0x30;
            n -= sz + 4;
            ptr += sz;
        } while (n > 0);
    }
    *(uint32_t *)(self + 8) |= 2;
    self[0x1d1] = 0;
    *(uint32_t *)(self + 0x180) = 0;
}
