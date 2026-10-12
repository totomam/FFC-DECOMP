#include "ffc/types.h"

extern void func_ov006_0219ef5c(void *dst, const void *src, uint32_t n);
extern void *func_ov006_0219f090(void *p);
extern int32_t func_ov006_0219ed94(void *a, uint32_t n, void *b, void *c);
extern void func_ov006_0219daa0(int32_t x);
extern uint32_t func_ov006_0219f078(uint32_t x);
extern int32_t func_ov006_0219e1dc(uint32_t x, void *p);
extern void *func_ov006_0219cedc(void);
extern int32_t func_ov006_0219eba4(void *a, void *b, uint32_t c, uint32_t d, void *e, void *f, uint32_t g);
extern void func_ov006_0219ceec(void *p);
extern int32_t func_ov006_0219daac(void);
extern uint32_t func_ov006_0219f038(uint32_t x);
extern uint8_t data_ov006_021b8b8c[];
extern uint8_t data_ov006_021baf3c[];

int32_t func_ov006_0219e0e8(uint8_t *p) {
    uint8_t buf[8];
    uint8_t *r4 = p + 0x18;
    uint32_t r6;
    void *r7;
    int32_t res;
    void *t;
    int32_t ret;

    func_ov006_0219ef5c(buf, p + 0x10, 8);
    t = func_ov006_0219f090(data_ov006_021b8b8c);
    res = func_ov006_0219ed94(buf, 8, data_ov006_021b8b8c, t);
    if (res + 1 == 0) {
        func_ov006_0219daa0(2);
        return -100;
    }
    res = func_ov006_0219e1dc(func_ov006_0219f078(*(uint16_t *)(p + 6)), buf);
    if (res != 0) {
        return res;
    }
    if (func_ov006_0219f078(*(uint16_t *)(p + 6)) == 0x1000) {
        func_ov006_0219ef5c(data_ov006_021baf3c, buf, 8);
    }
    if ((func_ov006_0219f078(*(uint16_t *)(p + 0xc)) & 0xf) == 0) {
        return 0;
    }
    r6 = func_ov006_0219f078(*(uint16_t *)r4);
    r7 = func_ov006_0219cedc();
    if (r7 == 0) {
        func_ov006_0219daa0(2);
        return 100;
    }
    ret = func_ov006_0219eba4(r4 + 4, r7, r6, p[0xe], r4 + 2, data_ov006_021baf3c, 8);
    if (ret < 0) {
        func_ov006_0219ceec(r7);
        if (func_ov006_0219daac() == 2) {
            return 100;
        }
        return 200;
    }
    func_ov006_0219ef5c(r4, r7, r6);
    *(uint16_t *)(p + 0xa) = (uint16_t)func_ov006_0219f038((uint16_t)r6);
    func_ov006_0219ceec(r7);
    return 0;
}
