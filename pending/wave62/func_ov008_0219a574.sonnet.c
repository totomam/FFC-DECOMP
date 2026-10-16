#include "ffc/types.h"
extern uint32_t *func_020696e8(void *o);
extern void func_020697ac(void *o, uint32_t v);
extern int func_ov008_02199e40(void *o);
extern void func_ov008_02199e4c(void *o, int a, int b);
extern void func_ov005_02196bcc(void *o, int a);
extern void func_ov008_02199e8c(void *o);
extern int func_020692e8(uint32_t v);
extern void func_02069300(uint32_t v);
void func_ov008_0219a574(uint8_t *self)
{
    uint32_t *p = func_020696e8(self);
    uint32_t a = p[1] ^ p[2];
    if (p[1] & a & 8) func_020697ac(self, *(uint32_t *)(self + 0xc4));
    p = func_020696e8(self);
    a = p[1] ^ p[2];
    if (p[1] & a & 2) {
        int i = self[0x143];
        if (i != 0xff && func_ov008_02199e40(self) != 0) {
            func_ov008_02199e4c(self, self[0x143], 0);
            func_ov005_02196bcc(((uint32_t **)*(uint32_t *)(self + 0xcc))[self[0x143] % 8], 0);
            func_ov008_02199e8c(self);
            return;
        }
        if (func_020692e8(*(uint32_t *)(self + 0xc0)) != 0) {
            func_02069300(*(uint32_t *)(self + 0xc0));
            return;
        }
        func_020697ac(self, *(uint32_t *)(self + 0xc0));
    }
}
