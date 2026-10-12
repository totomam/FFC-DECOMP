#include "ffc/types.h"

extern void func_ov008_021a03fc(uint8_t *p, uint32_t v, uint32_t idx);

void func_ov008_021a0230(uint8_t *p, uint32_t v)
{
    uint32_t n = p[0x100];
    uint8_t i = 0;
    uint32_t shift = n << 3;
    uint32_t *arr = *(uint32_t **)(p + 0xd0);

    do {
        uint8_t idx = (uint8_t)(i + shift);
        if (v == arr[i]) {
            uint32_t flag;
            if (idx >= *(uint32_t *)(p + 0xf0)) {
                return;
            }
            flag = p[0x102];
            if (flag == 0) {
                return;
            }
            func_ov008_021a03fc(p, flag, idx);
            return;
        }
        i++;
    } while (i < 8);
}
