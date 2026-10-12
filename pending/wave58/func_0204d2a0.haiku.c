#include "ffc/types.h"

extern uint8_t data_020b0294[];
extern uint8_t data_020b02e4[];
extern uint8_t data_020b02f4[];
extern uint8_t data_020b0300[];
extern uint8_t data_020b030c[];
extern uint8_t data_020b0320[];

extern int func_0204de50(uint8_t *a);
extern uint8_t **func_0204de78(void);
extern uint8_t *func_0204de7c(int x);
extern int func_0204b6d8(uint8_t *p, uint8_t *q, int a, int b);
extern int func_0204accc(uint8_t *p, uint8_t *d, int n);
extern int func_0204ae94(uint8_t *p, int n);
extern int func_0204b540(uint8_t *p, int n, int v, int *o, int z);
extern int func_0204bd34(uint8_t *p, uint8_t *d, int *o);
extern int func_0204b640(uint8_t *p, int x, int y, uint8_t *d, int z);

int func_0204d2a0(uint8_t *a) {
    uint8_t *s = a;
    uint8_t *r6;
    int t;
    int off;
    uint8_t *p2;
    uint8_t *sp8;
    int v, out1, out2, r7, flag;

    t = func_0204de50(s);
    p2 = *(uint8_t **)(*func_0204de78() + 0xc);
    r6 = *(uint8_t **)(p2 + 0x2c);
    sp8 = func_0204de7c(t);

    off = 0x304;
    if (func_0204b6d8(r6, s + off, 0, 0xe) != 0) {
        if (func_0204accc(s + off, data_020b0294, 5) == 0) {
            if (*(int8_t *)(s + off + 8) == 0x20) {
                v = func_0204ae94(s + off + 9, 3);
                *(int *)(r6 + 0x18) = v;
                if (v >= 0) {
                    v = func_0204b540(r6, 0xc, *(int *)r6, &out2, 0);
                    if (v >= 0) {
                        v = func_0204bd34(r6, data_020b02e4, &out1);
                        *(int *)(s + off + 0x28) = v;
                        if (v == 0) {
                            *(int *)(s + off + 0x2c) = 0;
                            return 0;
                        }
                        r7 = 0xc;
                        if (v <= ((r7 + 0xf4) << 6)) {
                            if (v > 0) {
                                if (func_0204b6d8(r6, sp8 + r7 + 0xf4, out1, v) == 0) goto fail7;
                                v = func_0204ae94(sp8 + r7 + 0xf4, *(int *)(s + off + 0x28));
                                *(int *)(s + off + 0x28) = v;
                                if (v < 0) goto fail7;
                                *(int *)(r6 + 0xc) = v;
                            } else {
                                r7 -= 0xd;
                                *(int *)(r6 + 0xc) = r7;
                            }
                            goto after;
                        }
                    }
                }
            }
        }
    }
    goto fail7;

after:
    if (*(int *)(p2 + 8) == 0) {
        v = func_0204bd34(r6, data_020b02f4, &out1);
        if (v == 0) goto fail7_338;
        if (v > 0x4000 || v <= 0) {
            flag = 0;
        } else {
            if (func_0204b640(r6, out1, out1 + v, data_020b0300, 0) == 0) {
                flag = 1;
            } else {
                *(int *)(s + 0x338) = 0;
                goto L019a;
            }
        }
    } else {
        flag = 0;
    }
    *(int *)(s + 0x338) = flag;

L019a:
    v = func_0204bd34(r6, data_020b030c, &out1);
    *(int *)(s + 0x33c) = v;
    if (v == 0) {
        *(int *)(s + 0x330) = 7;
        return 0;
    }
    if (v > 0x4000) {
        *(int *)(s + 0x33c) = 0;
    } else if (v > 0) {
        flag = (func_0204b640(r6, out1, out1 + v, data_020b0320, 0x3b) == 0) ? 1 : 0;
        *(int *)(s + 0x33c) = flag;
    } else {
        *(int *)(s + 0x33c) = 0;
    }
    *(int *)(s + 0x330) = 0;
    *(int *)(r6 + 0x14) = 1;
    return 1;

fail7_338:
    *(int *)(s + 0x330) = 7;
    *(int *)(s + 0x338) = 0;
    return 0;

fail7:
    *(int *)(s + 0x330) = 7;
    return 0;
}
