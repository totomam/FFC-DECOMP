#include "ffc/types.h"
extern void func_02084b2c(void *p, int v, int n);
extern void func_02084ca4(void *s, void *d);
extern uint8_t *data_ov000_0216e268;
int func_ov000_02151754(int idx, uint32_t *out)
{
    uint8_t *g = data_ov000_0216e268;
    if (*(int *)(g + 0x1a90) != 2) return -1;
    if (idx < 0 || idx >= *(int *)(g + 0x1a88)) return -1;
    func_02084b2c(out, 0, 0x78);
    out[0] = 1;
    ((uint16_t *)out)[2] = *(uint16_t *)(data_ov000_0216e268 + 0x1a48 + idx * 2);
    func_02084ca4(data_ov000_0216e268 + 0x1348 + idx * 0x70, (uint8_t *)out + 6);
    return 0;
}
