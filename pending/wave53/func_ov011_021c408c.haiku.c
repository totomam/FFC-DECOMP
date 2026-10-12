#include "ffc/types.h"

extern uint32_t func_020215cc(uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203c1ec(uint32_t a, uint32_t b);
extern uint32_t func_0203c1d4(uint32_t a, uint32_t b);
extern uint32_t func_0203c18c(uint32_t a, uint32_t b);
extern uint32_t func_0203c174(uint32_t a, uint32_t b);
extern uint32_t func_0203b6fc(void);
extern uint32_t func_ov009_0219d374(uint32_t v);
extern uint32_t func_02056aec(void *obj);
extern uint32_t data_0209de90;
extern uint32_t data_0209de8c;

void func_ov011_021c408c(uint8_t *a)
{
    uint32_t r7;
    uint32_t r4;

    if (a[0x1cb]) {
        if (*(uint32_t *)(*(uint32_t *)(a + 0xb8) + 0xc) != 2) {
            uint32_t v = func_020215cc(data_0209de90 >> 1);
            func_02056bc0(a + 0x14, (void *)v);
        }
    }

    if (a[0x1ca]) {
        uint32_t q = data_0209de8c;
        uint32_t p = data_0209de90;
        r7 = func_0203c1ec(p, q);
        r4 = func_0203c1d4(p, q);
    } else {
        uint32_t q = data_0209de8c;
        uint32_t p = data_0209de90;
        r7 = func_0203c18c(p, q);
        r4 = func_0203c174(p, q);
    }

    {
        uint32_t t = func_0203b6fc();
        func_02056bc0((void *)t, (void *)r4);
        func_02056bc0((void *)t, (void *)r7);
        func_02056bc0(a + 0x14, (void *)t);
    }
    {
        uint32_t w = func_ov009_0219d374(*(uint32_t *)(a + 0xe0));
        func_02056bc0(a + 0x14, (void *)w);
    }
    {
        uint32_t w2 = func_02056aec(a);
        func_02056bc0(a + 0x14, (void *)w2);
    }
}
