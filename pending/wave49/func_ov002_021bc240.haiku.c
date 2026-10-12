#include "ffc/types.h"

extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_02056c4c(void *x);
extern uint32_t func_0203b688(void);
extern uint32_t func_0203b6f0(void);
extern uint32_t func_0203b7fc(uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern void func_02021338(uint32_t v);
extern void *func_0203b95c(void *p, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern uint32_t func_0203b708(uint32_t v);
extern uint32_t func_020655dc(void *object, uint32_t a, uint32_t b);
extern void *func_02056aec(void *object);
extern uint32_t func_0203b750(void);
extern uint8_t data_ov002_021d6878[];
extern void *data_ov002_021d685c[];

void func_ov002_021bc240(uint8_t *obj, int32_t a, uint32_t idx)
{
    uint32_t r7;
    int32_t i;
    uint8_t *r4;
    int32_t c;
    int32_t len;
    uint32_t s8;
    uint32_t s0c;
    uint8_t *x;
    uint32_t s14;
    uint8_t buf[8];
    uint32_t s20;
    uint32_t s24;
    uint32_t tmp;
    void **vt;
    void *q;

    if (a == 0) {
        return;
    }
    x = *(uint8_t **)(obj + 0x80 + (idx << 2));
    func_02086ad4(buf, (uint32_t)data_ov002_021d6878, a < 0 ? -a : a);
    len = (int32_t)func_02092864(buf);
    func_02056c4c(*(void **)(x + 0x80));
    r7 = func_0203b688();
    s8 = func_0203b6f0();
    s0c = func_0203b7fc(len, len, 1);
    func_02056bc0(*(void **)(x + 0x80), (void *)r7);
    s20 = *(uint32_t *)(x + 0x84) - ((len * 12) / 2) + 8;
    s24 = *(uint32_t *)(x + 0x88) - 14;
    func_02021338(a > 0 ? 0x434 : 0x435);
    for (i = 0; i < len; i++) {
        r4 = func_0203b95c(a >= 0 ? data_ov002_021d685c[2] : data_ov002_021d685c[1], s0c, 2, 1);
        vt = *(void ***)r4;
        ((void (*)(void *, uint32_t))vt[8])(r4, 2);
        ((void (*)(void *, uint32_t))vt[15])(r4, 2);
        ((void (*)(void *))vt[10])(r4);
        ((void (*)(void *, uint32_t, uint32_t))vt[3])(r4, s20, s24);
        func_02064aa8(r4);
        func_0205f2f0(r4, 1);
        func_02056bc0((void *)s8, r4);
        s20 += 12;
        c = (int8_t)buf[i];
        if (c == 0x2b) {
            c = 11;
        } else {
            c -= 0x2f;
        }
        s14 = func_0203b708(3);
        tmp = func_020655dc(r4, c, 0);
        func_02056bc0((void *)r7, (void *)tmp);
        func_02056bc0((void *)r7, (void *)s14);
    }
    q = func_02056aec((void *)s8);
    tmp = func_0203b750();
    func_02056bc0((void *)r7, (void *)tmp);
    func_02056bc0((void *)r7, q);
    func_02056bc0((void *)s8, (void *)s0c);
    func_02056bc0(*(void **)(x + 0x80), (void *)s8);
}
