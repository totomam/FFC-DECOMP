#include "ffc/types.h"

extern uint32_t func_02056830(uint32_t size);
extern void func_02056858(uint32_t h);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t *func_0202270c(void *a, void *b);
extern void func_02030c74(void *p);
extern int32_t func_0202e10c(void *p, void *q);
extern void func_02005988(void *dst, void *src);
extern uint32_t func_02030f9c(void *a, void *b, uint32_t c);
extern uint32_t func_02030f04(void *a, void *b, uint32_t c);
extern void func_02015df4(uint32_t a, void *b, void *c, void *d, uint32_t e);
extern void *func_020059cc(void *object);
extern void func_02015d78(uint32_t a, void *b, uint32_t c, void *d, uint32_t e);
extern void func_02005f3c(void *a, uint32_t b, uint32_t c, void *d);
extern uint8_t data_020add48[];
extern uint8_t data_020add50[];
extern uint8_t data_020add58[];
extern uint32_t data_020b8e44;

uint32_t func_0202e8e8(uint8_t *obj, uint32_t *arg1, uint32_t arg2) {
    uint32_t h;
    uint8_t *sub;
    uint32_t *cnt;
    uint32_t v;
    uint8_t buf[0x120];
    uint32_t *it;
    uint32_t flag;
    uint32_t r;
    uint8_t t[8];
    uint8_t t2[0xc];
    uint8_t t3[0x40];
    uint32_t z1, z2;
    uint32_t i1, i2;

    h = func_02056830(0x200);
    sub = obj + 0x4b8;
    cnt = (uint32_t *)(obj + 0x4e8);
    func_0208763c(sub);
    (*cnt)++;
    if (*cnt == 1) {
        uint32_t *w = (uint32_t *)(obj + 0x54);
        *w = (*w & ~0xffu) | 1u;
        w = (uint32_t *)(obj + 0x20);
        *w = (*w & ~0xffu) | 1u;
    }
    func_02087678(sub);

    if (*arg1 & 1) {
        v = *(uint32_t *)((uint8_t *)arg1 + 8);
    } else {
        v = (uint32_t)((uint8_t *)arg1 + 1);
    }
    flag = 0;
    it = func_0202270c(&v, buf + 1);
    while (it != 0) {
        func_02030c74(obj);
        if (func_0202e10c(obj + 0xd8, data_020add48) == 0) {
            flag = 1;
        } else if (flag != 0) {
            if ((int8_t)obj[0xd8] != 0x23 && obj[0xd8] != 0) {
                if (func_0202e10c(obj + 0xd8, data_020add48) != 0 &&
                    func_0202e10c(obj + 0xd8, data_020add50) == 0) {
                    func_02005988(t, obj + 0x10a);
                    i1 = func_02030f9c(t, data_020add58, 0);
                    if (i1 != 0xffffffffu) {
                        i2 = func_02030f04(arg1, t, 0);
                        if (i2 != 0xffffffffu) {
                            z1 = 0;
                            z2 = 0;
                            func_02005988(t2, obj + 0x10a);
                            func_02015df4(data_020b8e44, t2, &z1, &z2, 0);
                            func_020059cc(t2);
                            func_02015d78(data_020b8e44, t3, arg2, &z2, 0);
                            if (t[0] & 1) {
                                r = ((uint8_t)t[0] << 24) >> 25;
                            } else {
                                r = *(uint32_t *)(t + 4);
                            }
                            func_02005f3c(arg1, i2, r, t3);
                        }
                    }
                    func_020059cc(t);
                }
            }
        }
        it = func_0202270c(&v, buf + 1);
    }
    if (h != 0) {
        func_02056858(h);
    }
    func_0208763c(sub);
    (*cnt)--;
    if (*cnt == 0) {
        uint32_t *w = (uint32_t *)(obj + 0x54);
        *w &= ~0xffu;
        w = (uint32_t *)(obj + 0x20);
        *w &= ~0xffu;
    }
    func_02087678(sub);
    return 0;
}
