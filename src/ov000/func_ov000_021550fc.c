#include "ffc/types.h"

extern void *func_02084b2c(void *dst, int c, uint32_t n);
extern void func_ov000_02155154(uint32_t *p);
extern void func_ov000_02154ee8(uint32_t *p, int v);
extern void func_020840a8(void *tbl, uint32_t poly);
extern uint32_t func_02084130(void *tbl, void *data, uint32_t len);

void func_ov000_021550fc(uint32_t *p, uint32_t arg)
{
    uint8_t tbl[0x400];
    func_02084b2c(p, 0, 0x40);
    p[0] = 0x40;
    p[7] = 0;
    p[9] = arg;
    func_ov000_02155154(p + 1);
    func_ov000_02154ee8(p + 4, 0);
    func_020840a8(tbl, 0xedb88320);
    p[15] = func_02084130(tbl, p, 0x3c);
    p[8] |= 1;
}
