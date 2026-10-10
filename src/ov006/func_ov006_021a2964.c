#include "ffc/types.h"

extern void func_ov006_021a3200(void *dst, const void *src, uint32_t n);
extern void func_ov006_021a28ec(void *dst, const void *src, uint32_t n);
extern void func_ov006_021a3270(void *dst, int c, uint32_t n);
extern uint8_t data_ov006_021b8c44[];

void func_ov006_021a2964(void *r0, void *r1)
{
    uint8_t buf[8];
    uint32_t idx;
    uint32_t t;

    func_ov006_021a3200(buf, (uint8_t *)r1 + 0x10, 8);
    idx = (*(uint32_t *)((uint8_t *)r1 + 0x10) >> 3) & 0x3f;
    t = (idx < 0x38) ? 0x38 - idx : 0x78 - idx;
    func_ov006_021a28ec(r1, data_ov006_021b8c44, t);
    func_ov006_021a28ec(r1, buf, 8);
    func_ov006_021a3200(r0, r1, 0x10);
    func_ov006_021a3270(r1, 0, 0x58);
}
