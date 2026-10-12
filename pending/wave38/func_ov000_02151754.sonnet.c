#include "ffc/types.h"

extern void func_02084b2c(void *dst, int val, int size);
extern void func_02084ca4(const void *src, void *dst);
extern uint8_t *data_ov000_0216e268;

int func_ov000_02151754(int idx, void *out)
{
    uint8_t *base = data_ov000_0216e268;
    if (*(int32_t *)(base + 0x1a90) != 2) {
        return -1;
    }
    if (idx < 0 || idx >= *(int32_t *)(base + 0x1a88)) {
        return -1;
    }
    func_02084b2c(out, 0, 0x78);
    *(int32_t *)out = 1;
    *(uint16_t *)((uint8_t *)out + 4) = *(uint16_t *)(data_ov000_0216e268 + 0x1a48 + idx * 2);
    func_02084ca4(data_ov000_0216e268 + 0x1348 + idx * 0x70, (uint8_t *)out + 6);
    return 0;
}
