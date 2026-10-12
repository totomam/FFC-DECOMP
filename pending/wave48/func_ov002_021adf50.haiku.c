#include "ffc/types.h"

extern void *data_020b8e44;
extern void *func_02015ba4(void *unused, uint32_t index);
extern void func_02033e04(void *p);
extern void *func_02084b2c(void *p, int c, uint32_t n);
extern uint32_t func_0203608c(void *p);
extern uint32_t func_02036368(void *p);
extern uint32_t func_02036370(void *p, uint32_t i);
extern void func_02033e28(void *s, uint32_t i, uint32_t v);
extern uint32_t func_02036380(void *p);
extern void func_02033e40(void *s, uint32_t v);
extern void func_02033f28(void *a);
extern void *func_ov002_0219b850(void *p);
extern void *func_ov002_02198e58(void *p);
extern uint32_t func_ov002_0219b858(void *p);
extern uint32_t func_ov002_021ae5ec(void *self);
extern void func_02034030(void *a, void *s, uint32_t flag, uint32_t v);
extern void *func_020340c0(void *a);
extern void func_ov002_021d3350(void *p, void *q, uint32_t i);
extern void func_02034014(void *a);
extern void func_02033e24(void *s);
extern void func_ov002_021d332c(void *p, uint32_t i);
extern uint32_t func_0203c418(void);

void func_ov002_021adf50(uint8_t *self, uint32_t param)
{
    uint32_t a[0x1c];
    uint32_t sp0;
    uint32_t s[13];

    int i;
    uint32_t flag;
    uint32_t idx;
    uint32_t x;
    uint32_t value;
    uint8_t *base;
    uint8_t *obj;

    *(void **)(self + 0x138) = func_02015ba4(data_020b8e44, param);
    func_02033e04(s);
    func_02084b2c(s, 0, 0x34);
    s[0] = param;
    s[1] = func_0203608c(self + 0xc8);
    s[10] = func_02036368(self + 0xc8);
    for (i = 0; i < 4; i++) {
        func_02033e28(s, i, func_02036370(self + 0xc8, i));
    }
    func_02033e40(s, func_02036380(self + 0xc8));
    func_02033f28(a);

    base = func_ov002_02198e58(func_ov002_0219b850(*(void **)(self + 0x130)));
    idx = func_ov002_0219b858(*(void **)(self + 0x130));
    flag = (*(uint32_t *)(base + idx * 4 + 4) == 3);

    base = func_ov002_02198e58(func_ov002_0219b850(*(void **)(self + 0x130)));
    idx = func_ov002_0219b858(*(void **)(self + 0x130));
    x = func_ov002_021ae5ec(self);
    obj = base + idx * 0x160 + (uint16_t)x * 4;
    value = *(uint32_t *)(obj + 0x15c);

    func_02034030(a, s, flag, value);
    obj = func_020340c0(a);
    for (i = 0; i < 2; i++) {
        func_ov002_021d3350(self + 0x14c, obj + 0x14 + i * 8, i);
    }
    func_02034014(a);
    func_02033e24(s);

    *(uint32_t *)(self + 0x178) = 0;
    for (i = 0; i < 2; i++) {
        func_ov002_021d332c(self + 0x14c, i);
        if (func_0203c418() != 0) {
            *(uint32_t *)(self + 0x178) |= (1u << i);
        }
    }
}
