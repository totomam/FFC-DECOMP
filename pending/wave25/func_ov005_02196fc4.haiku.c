#include "ffc/types.h"

extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void func_02005988(void *dst, void *src);
extern void func_02068ddc(uint32_t value, void *obj);
extern void *func_020059cc(void *object);
extern uint8_t data_ov005_02199310[];

void func_ov005_02196fc4(uint8_t *p, uint32_t r1)
{
    uint8_t a[12];
    uint8_t b[12];

    if (*(uint32_t *)(p + 0x88) == 0) {
        return;
    }
    func_02091b10(a, (uint32_t)data_ov005_02199310, r1);
    func_02005988(b, a);
    func_02068ddc(*(uint32_t *)(p + 0x88), b);
    func_020059cc(b);
}
