#include "ffc/types.h"

extern uint8_t *func_ov006_021b0378(void);
extern int32_t func_ov000_0215287c(void);
extern uint8_t *func_ov000_021588c8(void);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_ov006_021a35d8(void);
extern void func_ov006_021b4488(int32_t a);
extern void func_ov006_021b4734(int32_t a, int32_t b);
extern void func_ov006_021a64d4(void *p, int32_t v);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021aae48(void);
extern void func_ov006_021ae8e8(void);
extern uint8_t data_ov006_021bc7bc;

void func_ov006_021ae810(void)
{
    uint8_t *p = func_ov006_021b0378();

    if (func_ov000_0215287c() == 0) {
        return;
    }
    func_02084ca4(func_ov000_021588c8(), p + 0xf0, 0xe);
    func_02084ca4(func_ov000_021588c8(), p + (0x1f << 4), 0xe);
    func_ov006_021a35d8();
    p = 0;
    func_ov006_021b4488(0);
    func_ov006_021b4734(0, 0x15);
    if (data_ov006_021bc7bc == 0) {
        func_ov006_021a64d4(p, 1);
        func_ov006_021a64c8(func_ov006_021aae48);
        return;
    }
    func_ov006_021a64d4(p, 1);
    func_ov006_021a64c8(func_ov006_021ae8e8);
}
