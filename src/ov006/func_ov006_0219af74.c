#include "ffc/types.h"

extern void func_020849c4(void *dst, void *src, uint32_t n);

void func_ov006_0219af74(uint8_t *p, void *a1, uint32_t mask, uint16_t v)
{
    uint8_t cnt = 1;
    int i;

    func_020849c4(a1, p + 0x35e, 0x14a);

    for (i = 0; i < 15; i++) {
        if (mask & (2u << i)) {
            cnt++;
        }
    }

    p[0x358] = cnt;
    *(uint16_t *)(p + 0x35a) = (uint16_t)(mask | 1);
    *(uint16_t *)(p + 0x35c) = v;
    p[0x4b4]++;
}
