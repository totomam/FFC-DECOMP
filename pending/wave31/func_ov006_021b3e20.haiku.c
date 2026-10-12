#include "ffc/types.h"

extern void func_020849e0(uint32_t a, void *b, uint32_t c);
extern void func_020849c4(void *dst, void *src, uint32_t n);
extern void func_020849f4(void *dst, void *src, uint32_t n);
extern uint8_t *data_ov006_021bc814[];

void func_ov006_021b3e20(uint32_t idx, uint32_t sub, uint8_t *p)
{
    uint8_t *base = data_ov006_021bc814[idx];
    uint8_t *ent = base + (sub << 3);
    uint8_t *r4 = base + *(uint32_t *)(ent + 4);
    int count = *(uint16_t *)ent;
    int i = 0;
    uint8_t buf[8];

    func_020849e0(0, buf, 8);
    if (count > 0) {
        do {
            func_020849c4(r4, buf, 6);
            func_020849f4(buf, p, 8);
            i++;
            r4 += 6;
            p += 8;
        } while (i < count);
    }
}
