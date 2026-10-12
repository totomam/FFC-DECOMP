#include "ffc/types.h"

extern void func_02081944(int);
extern void func_02082de0(int);
extern void func_02082f30(int);
extern void func_020819e8(int, int, int);
extern void func_02081a48(void *, int);
extern void func_02081b5c(void *, int);
extern void func_0208336c(int);
extern void func_020833c8(int);
extern void func_02081a34(int);
extern void func_ov006_021b415c(void);
extern void func_ov006_021b50d4(void);
extern void func_ov006_021b51f8(void);
extern void func_ov006_021b398c(void);
extern void func_020819ac(void);

void func_ov006_021a624c(void)
{
    uint32_t z = 0;
    uint32_t *r5;
    uint32_t *r4;
    uint16_t * volatile q;
    uint16_t * volatile a;
    uint16_t * volatile c;
    uint16_t * volatile e;
    uint16_t * volatile g;
    uint16_t * volatile i;
    uint16_t * volatile k;
    uint16_t * volatile m;

    func_02081944(0);
    func_02082de0(1);
    func_02082f30(2);
    func_020819e8(1, 0, 0);

    r5 = (uint32_t *)(1 << 26);
    *r5 &= 0xffffe0ff;
    *r5 &= 0xffff1fff;
    func_02081a48((void *)((uint8_t *)r5 + 0x6c), 0);

    q = (uint16_t *)((uint8_t *)r5 + 8);
    *r5 = (*r5 & 0xffcfffef) | 0x200010;
    *q &= 0xffbf;
    a = (uint16_t *)((uint8_t *)r5 + 0xa);
    *a &= 0xffbf;
    c = (uint16_t *)((uint8_t *)r5 + 0xc);
    *c &= 0xffbf;
    e = (uint16_t *)((uint8_t *)r5 + 0xe);
    *e &= 0xffbf;

    r5[4] = z;
    r5[5] = z;
    r5[6] = z;
    r5[7] = z;
    func_02081b5c((void *)((uint8_t *)r5 + 0x50), 0x3f);

    func_0208336c(0x80);
    func_020833c8(0x100);
    func_02081a34(0);

    r4 = (uint32_t *)0x04001000;
    *r4 &= 0xffffe0ff;
    *r4 &= 0xffff1fff;
    func_02081a48((void *)((uint8_t *)r4 + 0x6c), 0);

    *r4 = (*r4 & 0xffcfffef) | 0x10;
    g = (uint16_t *)((uint8_t *)r4 + 8);
    *g &= 0xffbf;
    i = (uint16_t *)((uint8_t *)r4 + 0xa);
    *i &= 0xffbf;
    k = (uint16_t *)((uint8_t *)r4 + 0xc);
    *k &= 0xffbf;
    m = (uint16_t *)((uint8_t *)r4 + 0xe);
    *m &= 0xffbf;

    r4[4] = z;
    r4[5] = z;
    r4[6] = z;
    r4[7] = z;
    func_02081b5c((void *)((uint8_t *)r4 + 0x50), 0x3f);

    *q = (*q & 0x43) | 0xc00;
    *a = (*a & 0x43) | 0xd08;
    *c = (*c & 0x43) | 0xe10;
    *e = (*e & 0x43) | 0xf10;
    *g = (*g & 0x43) | 0xc00;
    *i = (*i & 0x43) | 0xd00;
    *k = (*k & 0x43) | 0xe00;
    *m = (*m & 0x43) | 0xf00;

    *r5 &= 0xc7ffffff;
    *r5 &= 0xf8ffffff;

    {
        uint16_t *w = (uint16_t *)0x04000304;
        *w &= 0x7fff;
        func_ov006_021b415c();
        func_ov006_021b50d4();
        func_ov006_021b51f8();
        func_ov006_021b398c();
        func_020819ac();
        *r4 = *r4 | ((uint32_t)w >> 10);
    }
    func_02081944(1);
}
