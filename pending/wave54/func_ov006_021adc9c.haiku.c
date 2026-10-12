#include "ffc/types.h"

extern uint32_t func_ov006_021b3fb8(uint32_t x);
extern uint32_t func_ov006_021b0cbc(void);
extern uint32_t func_ov006_021a3778(void);
extern void func_ov006_021b3b9c(uint32_t x);
extern void func_ov006_021a3df0(void);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b392c(uint32_t x);
extern void func_ov006_021a3b88(void *a, void *b);
extern void func_ov006_021b4734(uint32_t a, uint32_t b);
extern void func_ov006_021a64d4(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021afd28(void);
extern void func_ov006_021a64fc(uint32_t a, uint32_t b);
extern void func_ov006_021ac904(uint32_t a);
extern void func_ov006_021a64c8(void *f);
extern void func_ov006_021b49fc(void *p);
extern uint32_t data_ov006_021bc7ac[];
extern uint32_t data_ov006_021b97cc[];
extern void func_0208243c(void);
extern void func_ov006_021a6c54(void);
extern void func_ov006_021ae0c4(void);
extern void func_ov006_021ab254(void);
extern void func_ov006_021aed98(void);
extern uint32_t data_ov006_021bc7b0[];

void func_ov006_021adc9c(void)
{
    uint32_t i;
    uint32_t *t;
    uint8_t *p;

    if (func_ov006_021b3fb8(1)) {
        return;
    }
    if (func_ov006_021b3fb8(0)) {
        return;
    }
    if (!func_ov006_021b0cbc()) {
        return;
    }
    if (!func_ov006_021a3778()) {
        return;
    }
    for (i = 0; i < 3; i++) {
        t = (uint32_t *)data_ov006_021bc7ac[1];
        if (t[i + 1]) {
            func_ov006_021b3b9c(t[i + 1]);
        }
    }
    for (i = 0; i < 3; i++) {
        t = (uint32_t *)data_ov006_021bc7ac[1];
        if (t[i + 4]) {
            func_ov006_021b3b9c(t[i + 4]);
        }
    }
    func_ov006_021a3df0();
    func_ov006_021a3b28();
    func_ov006_021b392c(((uint32_t *)data_ov006_021bc7ac[1])[0]);
    func_ov006_021a3b88(data_ov006_021b97cc, (void *)func_0208243c);
    func_ov006_021b4734(1, 1);
    func_ov006_021b4734(0, 0x14);

    p = (uint8_t *)data_ov006_021bc7ac[1];
    if (p[0x1d] == 2) {
        func_ov006_021a64d4(0, 0);
        func_ov006_021a64c8((void *)func_ov006_021a6c54);
        goto done;
    }
    switch (((uint8_t *)data_ov006_021bc7ac)[0]) {
    case 0:
    case 1:
    case 2:
        func_ov006_021a64d4(2, 0);
        if (*(uint8_t *)(func_ov006_021afd28() + 0xe7) == 0xff) {
            func_ov006_021a64c8((void *)func_ov006_021ae0c4);
        } else {
            func_ov006_021a64fc(0, 0);
            func_ov006_021ac904(0);
            func_ov006_021a64c8((void *)func_ov006_021ab254);
        }
        break;
    case 3:
        func_ov006_021a64d4(2, 1);
        func_ov006_021a64c8((void *)func_ov006_021aed98);
        break;
    }
done:
    func_ov006_021b49fc(data_ov006_021bc7b0);
}
