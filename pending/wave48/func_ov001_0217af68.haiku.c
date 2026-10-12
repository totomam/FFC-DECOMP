#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int func_ov001_0217c8f0(void *p, uint32_t a1, void *out);
extern void *func_ov000_021653d4(uint32_t size);
extern void func_ov001_0217ef6c(void *p, void *data);
extern void func_ov001_02179e4c(void *a, void *b);
extern int func_ov001_0217b738(void *p, int x, int y, void *out, uint32_t s0, uint32_t s1, uint32_t s2);
extern int func_ov001_0217894c(void *p, uint32_t a, uint32_t b, void *buf, void *ret, int z);
extern void func_ov001_0217b7f4(void *p, void *ret);
extern int func_ov001_0217aefc(void *p, uint32_t a1, uint32_t r5);
extern int func_ov001_021768a0(void *p, uint32_t r5);
extern uint8_t data_ov001_02190cc0[];

int func_ov001_0217af68(void *p, uint32_t a1, int a2, uint32_t a3, uint32_t a4, uint32_t a5) {
    uint32_t *ret;
    uint32_t *loc;
    uint32_t *buf;
    uint32_t *ctx;
    Pair pr;
    uint32_t r5;
    int f;

    ctx = *(uint32_t **)p;
    ret = 0;
    f = 0;
    if (a2 == 1) {
        f = 1;
    }
    if (ctx[0x40] == 0) {
        f = 0;
    }

    if (a4 != 0) {
        if (f != 0) {
            if (func_ov001_0217c8f0(p, a1, &loc) != 0) {
                if (loc[4] != 0) {
                    buf = func_ov000_021653d4(0x204);
                    if (buf == 0) {
                        func_ov001_0217ef6c(p, data_ov001_02190cc0);
                        return 1;
                    }
                    func_ov001_02179e4c((void *)loc[4], buf);
                    buf[0] = 0;
                    buf[1] = a1;
                    if (func_ov001_0217b738(p, 2, 0, &ret, 1, a4, a5) == 0) {
                        pr.a = a4;
                        pr.b = a5;
                        r5 = ret[6];
                        if (func_ov001_0217894c(p, pr.a, pr.b, buf, ret, 0) == 0) {
                            func_ov001_0217b7f4(p, ret);
                            goto L_de;
                        }
                    }
                    return 0;
                }
            }
        }
    }

    if (func_ov001_0217b738(p, 2, 0, &ret, a3, a4, a5) != 0) {
        return 0;
    }
    r5 = ret[6];
    if (func_ov001_0217aefc(p, a1, r5) != 0) {
        return 0;
    }

L_de:
    if (a3 != 0) {
        if (func_ov001_021768a0(p, r5) != 0) {
            return 0;
        }
    }
    return 0;
}
