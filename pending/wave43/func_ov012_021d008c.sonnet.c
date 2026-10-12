#include "ffc/types.h"

int func_ov012_021d008c(uint8_t *s)
{
    uint8_t i = 0;
    uint8_t n = s[0x339];
    uint8_t *a2;
    uint16_t *a3;
    uint32_t lim;

    while (i < n) {
        a2 = (*(uint32_t *)(s + 0x31c) & 1) ? *(uint8_t **)(s + 0x324) : s + 0x31e;
        a2 += 0x3a;
        a3 = (*(uint32_t *)(s + 0x2ec) & 1) ? *(uint16_t **)(s + 0x2f4) : (uint16_t *)(s + 0x2ee);
        if (a3[i] != *(uint16_t *)a2) {
            return 1;
        }
        i++;
        if (i >= n) {
            break;
        }
        lim = (*(uint32_t *)(s + 0x2ec) & 1) ? *(uint32_t *)(s + 0x2f0) : ((s[0x2ec] >> 1) & 0x7f);
        if (i >= lim) {
            break;
        }
    }
    return 0;
}
