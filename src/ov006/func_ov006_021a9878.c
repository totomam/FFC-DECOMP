#include "ffc/types.h"

typedef void (*FnPtr)(void);

struct Priv {
    uint8_t *base;      /* 0x00 */
    uint32_t *q4;       /* 0x04 */
    uint32_t *q8;       /* 0x08 */
    uint32_t *qc;       /* 0x0c */
    uint32_t a[5];      /* 0x10 */
    uint32_t b[5];      /* 0x24 */
    uint32_t pad38;     /* 0x38 */
    uint32_t f3c;       /* 0x3c */
    uint8_t pad40[0x52 - 0x40];
    uint8_t idx;        /* 0x52 */
    uint8_t pad53;
    uint8_t flag;       /* 0x54 */
};

typedef struct Ctx {
    uint8_t mode;
    uint8_t pad[3];
    struct Priv *p;     /* 0x04 */
} Ctx;

extern Ctx data_ov006_021bc778;
extern uint8_t data_ov006_021bc77c[];

extern uint32_t func_ov006_021b3fb8(uint32_t x);
extern uint32_t func_ov006_021a3778(void);
extern void func_ov006_021b578c(uint32_t x, uint32_t y);
extern void func_ov006_021b51a8(uint32_t x);
extern void func_ov006_021b4444(uint32_t x);
extern void func_ov006_021af628(void);
extern void func_ov006_021a3df0(void);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021af484(void);
extern void func_ov006_021b392c(uint32_t x);
extern void func_ov006_021b4734(uint32_t x, uint32_t y);
extern void func_ov006_021afa00(void);
extern uint8_t *func_ov006_021afd28(void);
extern void func_ov006_021b002c(uint32_t x);
extern void func_ov006_021a64d4(uint32_t x, uint32_t y);
extern void func_ov006_021afd60(uint8_t *x);
extern void func_ov006_021a64fc(uint32_t x, uint32_t y);
extern void func_ov006_021a64c8(FnPtr f);
extern void func_ov006_021b49fc(uint8_t *x);
extern void func_ov006_021ae0c4(void);
extern void func_ov006_021ad50c(void);
extern void func_ov006_021a9f00(void);
extern void func_ov006_021aea94(void);

void func_ov006_021a9878(void)
{
    FnPtr fn;
    int i;
    uint8_t *elem;

    if (func_ov006_021b3fb8(1)) {
        return;
    }
    if (func_ov006_021b3fb8(0)) {
        return;
    }
    if (!func_ov006_021a3778()) {
        return;
    }

    func_ov006_021b578c(1, data_ov006_021bc778.p->f3c);
    for (i = 0; i < 5; i++) {
        if (data_ov006_021bc778.p->a[i]) {
            func_ov006_021b51a8(data_ov006_021bc778.p->a[i]);
        }
        if (data_ov006_021bc778.p->b[i]) {
            func_ov006_021b51a8(data_ov006_021bc778.p->b[i]);
        }
    }

    func_ov006_021b4444((uint32_t)data_ov006_021bc778.p->qc);
    func_ov006_021af628();
    func_ov006_021a3df0();
    func_ov006_021a3b28();
    func_ov006_021af484();
    func_ov006_021b392c((uint32_t)data_ov006_021bc778.p->q4);
    func_ov006_021b392c((uint32_t)data_ov006_021bc778.p->q8);
    func_ov006_021b4734(1, 1);
    func_ov006_021b4734(0, 0x1d);

    *(volatile uint32_t *)0x04000010 = 0;
    *(volatile uint32_t *)0x04000018 = 0;

    if (data_ov006_021bc778.p->flag == 0) {
        func_ov006_021afa00();
        {
            uint8_t *s = func_ov006_021afd28();
            func_ov006_021b002c(s[0xf4]);
        }
        func_ov006_021a64d4(2, 0);
        fn = func_ov006_021ae0c4;
    } else if (data_ov006_021bc778.mode == 4) {
        func_ov006_021afa00();
        func_ov006_021a64d4(0, 1);
        fn = func_ov006_021ad50c;
    } else {
        elem = data_ov006_021bc778.p->base + data_ov006_021bc778.p->idx * 0x2a;
        func_ov006_021afd60(elem);
        func_ov006_021a64d4(0, 0);
        elem = data_ov006_021bc778.p->base + data_ov006_021bc778.p->idx * 0x2a;
        if (elem[0x28]) {
            func_ov006_021a64d4(0, 1);
            func_ov006_021a64fc(1, 1);
            fn = func_ov006_021a9f00;
        } else {
            func_ov006_021a64d4(0, 1);
            func_ov006_021a64fc(0, 1);
            fn = func_ov006_021aea94;
        }
    }

    func_ov006_021a64c8(fn);
    func_ov006_021b49fc(data_ov006_021bc77c);
}
