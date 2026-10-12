#include "ffc/types.h"

extern uint8_t *func_ov006_021afd28(void);
extern void *func_020849f4(void *dst, const void *src, uint32_t n);
extern void func_ov006_021a6508(uint32_t x, void *out);
extern uint32_t func_ov000_02152514(void *p);
extern void func_02088f30(void);
extern void func_ov000_02152990(uint8_t v, uint8_t *p);
extern void func_ov006_021b570c(uint32_t a, void *f, uint32_t b, uint32_t c);
extern uint8_t data_ov006_021b88e8[];
extern void func_ov006_021ae888(void);

void func_ov006_021ae6e8(void)
{
    uint8_t local[0x18];
    uint8_t *p;
    uint32_t v;

    p = func_ov006_021afd28();
    func_020849f4(data_ov006_021b88e8, local + 4, 0x14);
    func_ov006_021a6508(0, local);
    if (*(uint32_t *)local == 2) {
        v = 4;
    } else {
        v = p[0xf4] + 1;
    }
    local[0xe] = v;
    if (func_ov000_02152514(local + 4) == 0) {
        func_02088f30();
    }
    if (*(uint32_t *)local == 0) {
        func_ov000_02152990(p[0xf4], p);
    }
    func_ov006_021b570c(0, func_ov006_021ae888, 0, 0x78);
}
