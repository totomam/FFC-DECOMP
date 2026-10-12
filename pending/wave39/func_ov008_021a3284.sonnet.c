#include "ffc/types.h"

extern uint32_t func_ov008_021a3c78(void);
extern void func_02021338(uint32_t);
extern void func_ov008_021a3a84(void *);

void func_ov008_021a3284(uint8_t *p, uint32_t idx, uint32_t val)
{
    uint32_t o = 0x100;
    uint8_t *a = p + o;
    uint8_t old = a[idx];
    if (val != old) {
        a[idx] = val;
        if (val != 0) {
            uint32_t r = func_ov008_021a3c78();
            *(uint32_t *)(p + 0x20 + o) += r;
            *(p + 0x24 + o) += 1;
            func_02021338(0xbf);
        } else {
            uint32_t r = func_ov008_021a3c78();
            *(uint32_t *)(p + 0x20 + o) -= r;
            *(p + 0x24 + o) -= 1;
            func_02021338(0xc0);
        }
        func_ov008_021a3a84(p);
    }
}
