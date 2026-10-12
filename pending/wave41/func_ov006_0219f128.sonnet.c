#include "ffc/types.h"

extern void func_020849c4(const void *src, void *dst, uint32_t n);

typedef struct {
    uint16_t mask;
    uint8_t val;
    uint8_t pad;
} FlagEnt;

extern FlagEnt data_ov006_021b8b94[];

void func_ov006_0219f128(uint8_t *a, uint8_t *b)
{
    int i;
    uint32_t cnt;
    FlagEnt *e;

    *(uint32_t *)b = *(uint16_t *)(a + 0xa);
    func_020849c4(a + 0xc, b + 4, 0x20);
    *(uint32_t *)(b + 0x24) = *(uint16_t *)(a + 0x36);
    func_020849c4(a + 4, b + 0x30, 6);

    cnt = 0;
    e = data_ov006_021b8b94;
    for (i = 0; i < 12; i++) {
        uint16_t m = *(uint16_t *)(a + 0x30);
        if (m & e->mask) {
            b[0x3c + cnt] = e->val;
            m = *(uint16_t *)(a + 0x2e);
            if (m & e->mask) {
                b[0x3c + cnt] |= 0x80;
            }
            cnt++;
        }
        e++;
    }

    *(uint32_t *)(b + 0x38) = cnt;
    *(uint32_t *)(b + 0x4c) = *(uint16_t *)(a + 0x32);

    {
        uint32_t f = *(uint16_t *)(a + 0x2c) & 3;
        if (f == 1) {
            *(uint32_t *)(b + 0x50) = 1;
        } else if (f == 2) {
            *(uint32_t *)(b + 0x50) = 2;
        } else {
            *(uint32_t *)(b + 0x50) = 0;
        }
    }
}
