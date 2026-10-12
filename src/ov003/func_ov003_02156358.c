#include "ffc/types.h"

extern void func_ov003_02156530(uint8_t *obj);
extern uint32_t func_02091b10(void *object, void *first, ...);
extern uint32_t func_0203b9a0(void);
extern void func_02005988(void *dst, void *src);
extern void func_ov003_021564e8(void *p);
extern void func_02028f0c(uint32_t a, void *b, uint32_t c, void *d);
extern void func_02035c18(void *p);
extern void *func_020059cc(void *object);
extern uint8_t *func_0203b8bc(uint8_t *obj);
extern void func_0202afc0(uint8_t *q, void *s, uint32_t h, uint32_t z, uint32_t w);
extern void func_02024db0(uint8_t *x, uint8_t v);
extern void func_02023e54(uint8_t *x, uint32_t v);
extern uint32_t func_0202b2c8(uint8_t *q);
extern void func_ov003_0215b62c(void *dst, uint8_t *obj);
extern void func_02056bc0(uint8_t *obj, uint8_t *node);
extern uint8_t data_ov003_0217a0d8[];

void func_ov003_02156358(uint8_t *obj, uint16_t g, uint32_t a0)
{
    uint32_t *ap = &a0;
    uint32_t s4;
    uint32_t s14[3];
    uint32_t s8[3];
    uint32_t s20[17];
    uint32_t zero = 0;
    uint8_t *q;

    func_ov003_02156530(obj);
    *(uint32_t *)(obj + 0x2e0) = ap[0];
    *(uint32_t *)(obj + 0x2e4) = ap[1];
    *(uint32_t *)(obj + 0x2e8) = 0;
    *(uint32_t *)(obj + 0x2ec) = (ap[2] & 0xfff) << 4;
    func_02091b10(s20, data_ov003_0217a0d8, g);
    *(uint32_t *)(obj + 0x2f4) = func_0203b9a0();
    func_02005988(s14, s20);
    func_ov003_021564e8(&s4);
    func_02028f0c(*(uint32_t *)(obj + 0x2f4), s14, 0, &s4);
    func_02035c18(&s4);
    func_020059cc(s14);
    q = func_0203b8bc(*(uint8_t **)(obj + 0x10c));
    *(uint8_t **)(obj + 0x2f0) = q;
    *(uint32_t *)(q + 0x19c) |= 1;
    *(uint32_t *)(q + 0x19c) &= ~zero;
    *(uint32_t *)(*(uint8_t **)(obj + 0x2f0) + 0x2c) = 0x20;
    q = *(uint8_t **)(obj + 0x2f0);
    *(uint32_t *)(q + 0x18) = 0;
    *(uint32_t *)(q + 0x1c) = 0x40000000;
    func_0202afc0(*(uint8_t **)(obj + 0x2f0), s20, *(uint32_t *)(obj + 0x2f4), 0, 0);
    *(uint32_t *)(*(uint8_t **)(obj + 0x2f0) + 0xc) &= ~0xffu;
    *(uint32_t *)(*(uint8_t **)(obj + 0x2f0) + 0x20) = 1;
    *(uint8_t *)(*(uint8_t **)(obj + 0x2f0) + 0x41) = obj[0x342];
    func_02024db0(*(uint8_t **)(*(uint8_t **)(obj + 0x2f0) + 0x34), obj[0x343]);
    func_02023e54(*(uint8_t **)(*(uint8_t **)(obj + 0x2f0) + 0x34), 1);
    *(uint32_t *)(*(uint8_t **)(obj + 0x2f0) + 0x1c) = (func_0202b2c8(*(uint8_t **)(obj + 0x2f0)) << 4) - 1;
    *(uint32_t *)(*(uint8_t **)(obj + 0x2f0) + 0x24) = ap[3] << 4;
    func_ov003_0215b62c(s8, obj);
    *(uint32_t *)(obj + 0x2f8) = s8[0];
    *(uint32_t *)(obj + 0x2fc) = s8[1];
    *(uint32_t *)(obj + 0x300) = s8[2];
    *(uint8_t **)(*(uint8_t **)(*(uint8_t **)(obj + 0x2f0) + 0x34) + 0x2e0) = obj + 0x304;
    func_02056bc0(*(uint8_t **)(obj + 0x100), *(uint8_t **)(obj + 0x2f0));
    *(uint16_t *)(obj + 0x30c) = g;
    *(uint16_t *)(obj + 0x30e) = (uint16_t)ap[4];
}
