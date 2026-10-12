#include "ffc/types.h"

extern uint32_t func_0204de50(void *p);
extern void *func_0204de78(uint32_t x);
extern uint32_t func_0204de7c(uint32_t x);
extern void *func_0204de70(uint32_t x);
extern uint32_t func_0204aef4(void *out, uint32_t v);
extern int32_t func_0204c19c(void *p, void *data, uint32_t n);
extern int32_t func_0204c200(void *p);
extern int32_t func_0204ac00(uint32_t *a, uint32_t b, uint32_t c, int32_t d, uint32_t e);
extern void func_0204acc0(uint32_t a, uint32_t b);
extern uint8_t data_020b0248[];
extern uint8_t data_020b0254[];
extern uint8_t data_020b0258[];
extern uint8_t data_020b0264[];
extern uint8_t data_020b022c[];
extern uint8_t data_020b026c[];

int32_t func_0204c2b0(uint8_t *p)
{
    uint8_t buf[8];
    int32_t ret;
    uint32_t x = func_0204de50(p);
    uint32_t *o = *(uint32_t **)func_0204de78(x);
    uint32_t *r4 = (uint32_t *)o[3];
    uint32_t r6 = func_0204de7c(x);
    uint32_t *v4 = (uint32_t *)func_0204de70(x);
    uint32_t r7 = func_0204aef4(buf, r4[8]);

    ret = func_0204c19c(p, data_020b0248, 8);
    if (ret != 0) return ret;
    ret = func_0204c19c(p, (uint8_t *)r4[9] + 8, r4[5] - 8);
    if (ret != 0) return ret;
    ret = func_0204c19c(p, data_020b0254, 1);
    if (ret != 0) return ret;
    ret = func_0204c19c(p, buf, r7);
    if (ret != 0) return ret;
    ret = func_0204c19c(p, data_020b0258, 0xb);
    if (ret != 0) return ret;
    ret = func_0204c19c(p, data_020b0264, 6);
    if (ret != 0) return ret;
    ret = func_0204c19c(p, (uint8_t *)r4[9] + 8, r4[5] - 8);
    if (ret != 0) return ret;
    ret = func_0204c19c(p, data_020b0254, 1);
    if (ret != 0) return ret;
    ret = func_0204c19c(p, buf, r7);
    if (ret != 0) return ret;
    r7 = 2;
    ret = func_0204c19c(p, data_020b022c, 2);
    if (ret != 0) return ret;
    ret = func_0204c19c(p, data_020b026c, 0x25);
    if (ret != 0) return ret;
    ret = func_0204c200(p);
    if (ret != 0) return ret;
    func_0204c19c(p, data_020b022c, r7);

    if (((int32_t *)p)[0xc9] > 0) {
        ret = func_0204ac00(r4, v4[3], r6 + r7 + 0xfe, ((int32_t *)p)[0xc9], 0);
        if (ret < 0) return 1;
        if (ret == 0) return r7;
    }
    ((int32_t *)p)[0xc9] = 0;
    func_0204acc0(r6 + 0x100, 1u << 14);
    return 0;
}
