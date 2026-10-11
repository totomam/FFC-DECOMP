#include "ffc/types.h"

extern void *data_020b93b8;
extern int func_0201bc64(void *p, int a, int b, int c);

void func_ov007_021b2884(uint8_t *base, int idx, uint8_t val)
{
    int i = idx - 1;
    if (i >= 0 && i < 0x40) {
        *(base + i + 0xbc) = val;
        func_0201bc64(data_020b93b8, 0xe, idx, val);
    }
}
