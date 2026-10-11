#include "ffc/types.h"

extern void func_ov000_02168bdc(void *out, uint32_t a, uint32_t b);
extern void func_ov000_02168c04(void *out, uint32_t a, uint32_t b);
extern void func_ov000_02168c7c(void *out, void *in);
extern void func_ov000_02169590(void *out, uint32_t b);

void func_ov000_021695c8(uint32_t p0, uint32_t p1, uint32_t p2)
{
    uint32_t tmp[0x58 / 4];
    uint32_t loc[0x10 / 4];

    func_ov000_02168bdc(tmp, p1, p2);
    func_ov000_02168c04(tmp, p0, p1);
    func_ov000_02168c7c(loc, tmp);
    func_ov000_02169590(loc, p2);
}
