#include "ffc/types.h"

extern void *data_020b8e44;
extern void *func_02015ba4(void *unused, uint32_t index);
extern int func_ov002_021aaa88(int p);

int func_ov002_021acf84(int a)
{
    uint8_t *r6;
    uint32_t i;
    int count;

    r6 = (uint8_t *)func_02015ba4(data_020b8e44, *(uint32_t *)((uint8_t *)a + 0xc0));
    count = 0;
    i = 0;
    while (i < *(uint32_t *)(r6 + 0x94)) {
        uint16_t v = *(uint16_t *)(r6 + *(uint32_t *)(r6 + 0xa0) + i * 2);
        if ((int)v <= func_ov002_021aaa88(a)) {
            count++;
        }
        i++;
    }
    return count;
}
