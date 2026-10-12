#include "ffc/types.h"

uint32_t func_ov012_021d0c84(uint8_t *p) {
    int flag;
    uint32_t cnt = 0;
    uint32_t i = 0;
    uint32_t n;

    flag = *(uint32_t *)(p + 0x2EC) & 1;
    n = flag ? *(uint32_t *)(p + 0x2F0) : ((p[0x2EC] << 24) >> 25) & 0x7F;
    n = flag ? *(uint32_t *)(p + 0x2F0) : (((uint32_t)p[0x2EC] << 24) >> 25);
    while (i < n) {
        uint16_t v;
        if (flag) {
            uint16_t *base = *(uint16_t **)(p + 0x2F4);
            v = base[i];
        } else {
            uint16_t *base = (uint16_t *)(p + 0x2EE);
            v = base[i];
        }
        if (v >= 0x30 && v <= 0x39) {
            cnt++;
        }
        i++;
    }
    return cnt;
}
