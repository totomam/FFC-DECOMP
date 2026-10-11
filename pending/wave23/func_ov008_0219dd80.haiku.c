#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov008_0219dde4(void *p);
extern void func_ov008_0219de5c(void *p);
extern void func_ov008_0219da58(void *p);

int func_ov008_0219dd80(void *a)
{
    uint8_t *p = (uint8_t *)a;
    uint64_t r;

    r = func_0209a76c(p[0x100] + 1, p[0x101] + 1);
    p[0x100] = (uint8_t)(r >> 32);
    func_ov008_0219dde4(a);
    func_ov008_0219de5c(a);
    func_ov008_0219da58(a);
    return 1;
}
