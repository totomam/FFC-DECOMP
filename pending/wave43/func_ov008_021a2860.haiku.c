#include "ffc/types.h"

extern uint32_t *func_020696e8(const void *object);
extern void func_020697ac(void *self, uint32_t obj);
extern int func_020692e8(uint32_t obj);
extern int func_ov008_021a2388(void *self, uint8_t idx);
extern void func_ov008_021a23a8(void *self, uint8_t idx, int flag);
extern void func_ov005_02196bcc(uint32_t obj, uint32_t flag);
extern void func_ov008_021a2450(void *self);
extern void func_02069300(uint32_t obj);

void func_ov008_021a2860(uint8_t *self)
{
    uint32_t *s;
    uint32_t a, b, t;
    uint32_t x, sg, y, idx;

    s = func_020696e8(self);
    a = s[1];
    b = s[2];
    t = a & (a ^ b);
    if (t & 8) {
        func_020697ac(self, *(uint32_t *)(self + 0xd4));
    }

    s = func_020696e8(self);
    a = s[1];
    b = s[2];
    t = a & (a ^ b);
    if (t & 2) {
        x = self[0x13d];
        sg = x >> 31;
        y = (x << 29) - sg;
        idx = ((y >> 29) | (y << 3)) + sg;
        if (func_020692e8(((uint32_t *)(self + 0xdc))[idx]) != 0 &&
            func_ov008_021a2388(self, self[0x13d]) != 0) {
            func_ov008_021a23a8(self, self[0x13d], 0);
            x = self[0x13d];
            sg = x >> 31;
            y = (x << 29) - sg;
            idx = ((y >> 29) | (y << 3)) + sg;
            func_ov005_02196bcc(((uint32_t *)(self + 0xdc))[idx], 0);
            func_ov008_021a2450(self);
            return;
        }
        if (func_020692e8(*(uint32_t *)(self + 0xd0)) != 0) {
            func_02069300(*(uint32_t *)(self + 0xd0));
            return;
        }
        func_020697ac(self, *(uint32_t *)(self + 0xd0));
    }
}
