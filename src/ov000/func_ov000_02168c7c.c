#include "ffc/types.h"

extern void func_ov000_02169518(void *dst, const void *src, uint32_t n);
extern void func_ov000_02168c04(void *dst, const void *src, uint32_t n);
extern void func_ov000_02169588(void *dst, int c, uint32_t n);
extern uint8_t data_ov000_0216bc10[];

void func_ov000_02168c7c(void *r0, void *r1)
{
    uint8_t buf[8];
    uint32_t idx;
    uint32_t t;

    func_ov000_02169518(buf, (uint8_t *)r1 + 0x10, 8);
    idx = (*(uint32_t *)((uint8_t *)r1 + 0x10) >> 3) & 0x3f;
    t = (idx < 0x38) ? 0x38 - idx : 0x78 - idx;
    func_ov000_02168c04(r1, data_ov000_0216bc10, t);
    func_ov000_02168c04(r1, buf, 8);
    func_ov000_02169518(r0, r1, 0x10);
    func_ov000_02169588(r1, 0, 0x58);
}
