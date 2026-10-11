#include "ffc/types.h"

extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void func_02005988(void *dst, void *src);
extern void func_02068ddc(uint32_t value, void *obj);
extern void *func_020059cc(void *object);
extern uint8_t data_ov009_021afb00[];

void func_ov009_02199b5c(uint8_t *p, int32_t n)
{
    uint8_t a[16];
    uint8_t b[12];

    if (n >= 100000000) {
        n = 99999999;
    }
    func_02091b10(a, (uint32_t)data_ov009_021afb00, n);
    func_02005988(b, a);
    p += 0x80;
    func_02068ddc(*(uint32_t *)p, b);
    func_020059cc(b);
}
