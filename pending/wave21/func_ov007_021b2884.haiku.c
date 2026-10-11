#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201bc64(void *p, int a, int b);

void func_ov007_021b2884(uint8_t *base, int idx, uint8_t val)
{
    uint8_t v = val;
    int i = idx - 1;
    if (i < 0 || i >= 0x40) {
        return;
    }
    *(base + i + 0xbc) = v;
    func_0201bc64(data_020b93b8, 0xe, idx);
}
