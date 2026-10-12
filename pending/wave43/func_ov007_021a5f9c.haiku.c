#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *data_ov007_021c9708;
extern uint32_t func_0205e7ac(void *obj);
extern void *func_02058724(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_0205da88(void *obj);
extern void func_020588f0(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void func_02058840(void *obj, uint32_t a);
extern uint32_t func_02056aec(void *obj);
extern uint32_t func_0206cd68(uint32_t v);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021a5f9c(uint8_t *p)
{
    uint8_t *r5 = (uint8_t *)func_0205681c(0x60);
    uint32_t sp;
    uint32_t r4;
    void *r7;

    if (r5 != 0) {
        uint32_t t = func_0205e7ac(data_ov007_021c9708);
        r5 = (uint8_t *)func_02058724(r5, t, 0, 0x7fff);
    }
    func_020588f0(r5, func_0205da88(p + 0xf4), 0, 0x10);
    func_02058840(r5, func_0205da88(p + 0xf4));
    *(uint32_t *)(r5 + 0x24) = 5;
    if (r5[0x15] != 0) {
        *(uint32_t *)(r5 + 0x1c) = 0x50;
    }
    sp = func_02056aec(p);
    r4 = func_0206cd68(*(uint32_t *)(p + 0xc0));
    r7 = func_0203b6fc();
    func_02056bc0(r7, (void *)r4);
    func_02056bc0(r7, r5);
    p = (uint8_t *)((uint32_t)p + 0x14);
    func_02056bc0(p, r7);
    func_02056bc0(p, (void *)sp);
}
