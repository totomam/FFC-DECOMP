#include "ffc/types.h"

extern void func_020375a4(void *p);
extern void func_0203775c(void *p);
extern void func_02037fec(void *a, void *b);
extern void *func_02037f40(void *object);
extern void func_ov001_0218cab0(void *p);
extern void func_02037700(void);
extern void *func_ov001_0218d0dc(void *p);
extern uint32_t func_ov001_0218ada0(void *a, uint32_t b, uint32_t c);
extern void func_ov001_0218c408(void *p, uint32_t v);
extern void *func_0205681c(uint32_t size);
extern void *func_021959c0(void *a, void *b, void *c, uint32_t d, uint32_t e, void *f, void *g);
extern void *data_020b8e44;
extern uint32_t data_ov001_021948b4[2];
extern uint32_t data_ov001_021959a4[];
extern uint32_t data_ov001_021948bc[2];
extern uint32_t data_ov001_021948c4[2];

void func_ov001_0218d004(void *param_1)
{
    uint8_t buf[0x32c];
    uint8_t *p = (uint8_t *)param_1;
    void *r5;
    uint32_t *q;
    uint32_t *s;
    uint32_t v0;
    uint32_t v1;

    func_020375a4(p);
    r5 = buf;
    func_0203775c(buf);
    func_02037fec(p + 0xb4c, buf);
    func_02037f40(buf);
    func_ov001_0218cab0(p);
    *(uint32_t *)(p + 0xe50) = 1;
    *(uint32_t *)(p + 0xe54) = 1;
    func_02037700();
    r5 = func_ov001_0218d0dc(p);
    q = data_ov001_021948b4;
    {
        uint32_t a1 = *q++;
        uint32_t a2 = *q;
        func_ov001_0218c408(r5, func_ov001_0218ada0(data_020b8e44, a1, a2));
    }
    r5 = func_0205681c(1000);
    if (r5 != 0) {
        r5 = func_021959c0(r5, p + 0xb4c, p + 0x66c, 0, 0, p + 0x671, data_ov001_021959a4);
    }
    func_ov001_0218c408(func_ov001_0218d0dc(p), r5);
    r5 = func_ov001_0218d0dc(p);
    q = data_ov001_021948bc;
    func_ov001_0218c408(r5, func_ov001_0218ada0(data_020b8e44, q[0], q[1]));
    s = data_ov001_021948c4;
    v0 = s[0];
    v1 = s[1];
    *(uint32_t *)(p + 0xb0) = v0;
    *(uint32_t *)(p + 0xb4) = v1;
}
