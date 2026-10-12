#include "ffc/types.h"

extern uint32_t func_02056aec(void);
extern void func_02056bc0(void *object, uint32_t node);
extern void func_02036750(void *p);
extern uint32_t func_0201b924(const void *object);
extern void func_0201f1f0(void *obj, uint32_t v, void *p);
extern void func_02035f58(void *p);
extern int func_02036994(void *p);
extern void func_0201f600(void *obj, uint32_t i, void *a, void *b);
extern void *func_0203608c(void *p);
extern void func_0200d5d4(void *object, uint32_t *pi, uint32_t value);
extern uint32_t func_020424e0(uint32_t x);
extern void func_ov003_02149768(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_ov003_02149850(uint32_t a);
extern uint32_t func_020215a4(uint32_t a, uint32_t b);
extern void func_020483ac(void *p);
extern void *func_02035fd0(void *p);
extern void func_020367a8(void);
extern void *data_020b93b8;
extern uint32_t data_020afce8[2];
extern uint32_t data_020afcf0[2];

void func_02048444(void *p) {
    uint32_t *a = (uint32_t *)p;
    uint32_t pad[6];
    uint8_t t18[0x60];
    uint8_t t78[0x50];
    uint32_t r6;
    uint32_t *src;
    uint32_t v;

    if (a[0x24] == 1) {
        uint32_t r = func_02056aec();
        func_02056bc0((uint8_t *)p + 0x14, r);
        return;
    } else if (a[0x24] == 2) {
    } else {
        uint32_t r = func_02056aec();
        func_02056bc0((uint8_t *)p + 0x14, r);
        return;
    }

    func_02036750(t78);
    v = func_0201b924(data_020b93b8);
    func_0201f1f0(data_020b93b8, v, t78);
    func_02035f58(t18);

    for (pad[5] = 0; pad[5] < 5; pad[5]++) {
        if (func_02036994(t78)) {
            func_0201f600(data_020b93b8, pad[5], t78, t18);
            if (func_0203608c((uint8_t *)a + 0x94 + pad[5] * 0x60) != func_0203608c(t18)) {
                if (a[0x9e] < a[0x9f]) {
                    a[0x9e]++;
                    ((uint32_t *)a[0x9d])[a[0x9e] - 1] = pad[5];
                } else {
                    uint8_t *zb = (uint8_t *)&pad[4];
                    zb[1] = 0;
                    func_0200d5d4(&a[0x9d], &pad[5], zb[1]);
                }
            }
        }
    }

    if (a[0x9e] != 0) {
        func_ov003_02149768(func_020424e0(a[0x22]), 3, 0x1e, 0);
        r6 = func_ov003_02149850(func_020424e0(a[0x22]));
        func_02056bc0((uint8_t *)p + 0x14, func_020215a4(0xffffffff, 0x19));
        func_02056bc0((uint8_t *)p + 0x14, r6);
        src = data_020afce8;
    } else {
        func_020483ac(p);
        a[0x24] = 3;
        src = data_020afcf0;
    }
    a[0x20] = src[0];
    a[0x21] = src[1];
    func_02035fd0(t18);
    func_020367a8();
}
