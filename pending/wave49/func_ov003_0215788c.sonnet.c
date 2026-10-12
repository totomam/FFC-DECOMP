#include "ffc/types.h"

extern void *data_020b93b8;
extern uint8_t data_ov003_0217a154[];
extern uint8_t data_ov003_0217a178[];

extern void func_0201d014(void *base, uint32_t v, void *out);
extern uint32_t func_02036bf4(void *p);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern uint32_t func_0203b9a0(void);
extern void func_02005988(void *a, void *b);
extern void func_ov003_021564e8(void *p);
extern void func_02028f0c(void *a, void *b, uint32_t c, void *d);
extern void func_02035c18(void *p);
extern void *func_020059cc(void *object);
extern void *func_0203b8bc(void *o);
extern uint32_t func_ov003_02156dd4(void *p, void *arr, uint32_t v, uint32_t w);
extern void func_0202afc0(void *a, void *b, uint32_t c, uint32_t d, void *e);
extern void func_02024db0(void *a, uint32_t b);
extern void func_02023e54(void *a, uint32_t b);
extern void func_0202b240(void *a, void *b);
extern void func_0202b24c(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

#define F32(b, o) (*(uint32_t *)((uint8_t *)(b) + (o)))
#define F16(b, o) (*(uint16_t *)((uint8_t *)(b) + (o)))
#define F8(b, o)  (*(uint8_t *)((uint8_t *)(b) + (o)))

void func_ov003_0215788c(uint8_t *p, uint32_t a1, uint32_t a2, uint32_t a3)
{
    volatile uint32_t flag;
    uint8_t * volatile sbuf;
    uint32_t r6, r7;
    uint8_t *obj;
    uint32_t n, i, off, ent, q, ret_u, ret2;
    uint8_t *e, *rr;
    uint8_t s2c[0x10];
    uint32_t s14, s10;
    uint8_t s3c[0x40];
    uint8_t s7d[0x44];
    uint32_t s20[3];

    r6 = a2;
    obj = *(uint8_t **)(p + 0xA8);
    r7 = a3;
    n = F32(obj, 0x7C);
    if (n == 0) {
        return;
    }

    for (i = 0; i < n; i++) {
        off = i * 4;
        ent = F32(obj + F32(obj, 0x80), off);
        if ((*(volatile uint16_t *)(p + 0xBE)) == F16(obj, ent)) {
            goto found;
        }
    }
    return;

found:
    func_0201d014(data_020b93b8, F16(p, 0xAC), s2c);
    if (r6 == 0) {
        ret_u = func_02036bf4(s2c);
        obj = *(uint8_t **)(p + 0xA8);
        ent = F32(obj + F32(obj, 0x80), off);
        e = obj + ent;
        q = F32(e, 8);
        r6 = F16(e + q, ret_u * 2);
    }
    if (r7 != 0) {
        sbuf = s7d + 1;
        func_02091b10(sbuf, (uint32_t)data_ov003_0217a154, r6, r7);
    } else {
        sbuf = 0;
    }

    flag = 1;
    
    if (F32(p, 0x2CC) == 0) {
        flag = 0;
        func_02091b10(s3c, (uint32_t)data_ov003_0217a178, r6);
        F32(p, 0x2CC) = func_0203b9a0();
        func_02005988(&s14, s3c);
        func_ov003_021564e8(&s10);
        func_02028f0c((void *)F32(p, 0x2CC), &s14, 0, &s10);
        func_02035c18(&s10);
        func_020059cc(&s14);
        F32(p, 0x2D8) = r6;
        F32(p, 0x2DC) = r7;
    }

    F32(p, 0x118) = (uint32_t)func_0203b8bc((void *)F32(p, 0x10C));
    rr = (uint8_t *)F32(p, 0x118);
    F32(rr, 0x2C) = 0x20;
    F32(rr, 0x18) = 0;
    F32(rr, 0x1C) = 0x40000000;

    for (i = 0; i < 3; i++) {
        s20[i] = 0;
    }
    ret2 = func_ov003_02156dd4(p, s20, ((uint16_t *)p)[0x5f], r6);
    func_0202afc0((void *)F32(p, 0x118), (void *)F32(p, 0x2CC), ret2, 0, sbuf);

    rr = (uint8_t *)F32(p, 0x118);
    F32(rr, 0xC) &= ~0xffu;
    F32(rr, 0x20) = a1;
    F8(rr, 0x41) = F8(p, 0x342);
    func_02024db0((void *)F32(rr, 0x34), F8(p, 0x343));
    func_02023e54((void *)F32(rr, 0x34), 1);
    func_0202b240(rr, p + 0x134);
    func_0202b24c(rr, p + 0x140);
    if (flag != 0) {
        F8(rr, 0x42) = 0;
    }
    func_02056bc0((void *)F32(p, 0x100), (void *)F32(p, 0x118));
    func_020059cc(s20);
}
