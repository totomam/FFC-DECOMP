#include "ffc/types.h"

extern void func_ov013_021bd11c(void *a, uint32_t b);
extern void *func_ov013_021bd2c0(void *a);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, uint32_t b);
extern void *func_02008d6c(void *a, void *b);
extern void *func_02056f0c(void *a, uint32_t b);
extern void func_02087620(void *object);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;
extern uint8_t data_020b0b68[];
extern uint8_t data_020b0b7c[];
extern uint32_t data_ov013_021c4eac[2];

void func_ov013_021c3340(uint8_t *p)
{
    void *s0;
    uint32_t s4[3];
    void *r7;
    void *r4;
    uint32_t r6;
    uint32_t flag;
    uint32_t t;

    flag = 1;
    func_ov013_021bd11c(*(void **)(p + 0x88), 1);
    func_02056bc0(p + 0x14, func_ov013_021bd2c0(*(void **)(p + 0x88)));

    r6 = 0;
    r7 = func_0205681c(0xc8);
    if (r7 != 0) {
        func_02005988(s4, func_020159c8(data_020b8e44, 0x223));
        r7 = func_02008d6c(r7, (r6 = flag, s4));
    }

    s0 = func_0205681c(0x18);
    if (s0 != 0) {
        s0 = func_02056f0c(s0, 1);
    }

    r4 = func_0205681c(0x34);
    if (r4 != 0) {
        uint8_t *o = (uint8_t *)r4;
        *(uint32_t *)(o + 0xc) &= ~0xffu;
        *(void **)o = data_020b0b68;
        func_02087620(o + 0x1c);
        t = *(uint8_t *)(o + 0x10);
        t &= ~0xffu;
        *(uint8_t *)(o + 0x10) = t;
        t = *(uint8_t *)(o + 0x11);
        t &= ~0xffu;
        *(uint8_t *)(o + 0x11) = t;
        t = *(uint8_t *)(o + 0x12);
        t &= ~0xffu;
        *(uint8_t *)(o + 0x12) = t;
        *(uint32_t *)(o + 0x14) = 0;
        *(void **)(o + 0x18) = o + 0x14;
        *(void **)o = data_020b0b7c;
        t = *(uint8_t *)(o + 0x11);
        t &= ~0xffu;
        *(uint8_t *)(o + 0x11) = t;
    }

    func_02056bc0(r4, s0);
    func_02056bc0(r4, r7);
    func_02056bc0(p + 0x48, r4);

    if (r6 != 0) {
        func_020059cc(s4);
    }

    {
        uint32_t v0 = data_ov013_021c4eac[0];
        uint32_t v1 = data_ov013_021c4eac[1];
        uint8_t *q = p + 0x80;
        p = p + 0x84;
        *(uint32_t *)q = v0;
        *(uint32_t *)p = v1;
    }
}
