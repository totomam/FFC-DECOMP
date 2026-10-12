#include "ffc/types.h"

extern void *func_02015ba4(void *unused, uint32_t index);
extern int func_ov002_021aaa88(void *p);
extern void *data_020b8e44;

uint16_t func_ov002_021ad008(uint8_t *a, uint32_t n, int *out)
{
    uint8_t *obj = (uint8_t *)func_02015ba4(data_020b8e44, *(uint32_t *)(a + 0xc0));
    uint32_t i;

    for (i = 0; i < *(uint32_t *)(obj + 0x94); i++) {
        int v = ((uint16_t *)(obj + *(uint32_t *)(obj + 0xa0)))[i];
        if (v <= func_ov002_021aaa88(a)) {
            if (n-- != 0) {
                continue;
            }
            if (out != 0) {
                *out = (obj + *(uint32_t *)(obj + 0xb0))[i] - 1;
            }
            return ((uint16_t *)(obj + *(uint32_t *)(obj + 0x98)))[i];
        }
    }
    return 0;
}
