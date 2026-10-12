#include "ffc/types.h"

extern void func_02033e04(void *p);
extern void func_02084b2c(void *p, int c, uint32_t n);
extern uint8_t func_02036360(const void *o);
extern uint32_t func_0203608c(const void *o);
extern uint32_t func_02036370(const void *o, uint32_t i);
extern void func_02033e28(void *p, uint32_t i, uint32_t v);
extern void *func_02036380(void *o);
extern void func_02033e40(void *p, void *q);
extern void func_02033f28(void *p);
extern void func_02034030(void *a, void *b, uint32_t c, uint32_t d);
extern uint32_t *func_020340c4(void *p);
extern void func_02034014(void *p);
extern void func_02033e24(void *p);

typedef struct { uint8_t pad[0xf0]; void **objs[5]; } Self;
void func_ov009_0219f5c4(uint8_t *self, uint8_t *src)
{
    uint8_t s1[0x34];
    uint8_t s2[0x70];
    uint32_t vv[6];
    uint8_t i;
    uint8_t *d;
    uint8_t *s;

    *(uint32_t *)(self + 0x84) = *(uint32_t *)(src + 0x00);
    *(uint32_t *)(self + 0x8c) = *(uint32_t *)(src + 0x08);
    *(uint32_t *)(self + 0x94) = *(uint32_t *)(src + 0x10);
    d = self;
    s = src;
    *(uint32_t *)(self + 0x9c) = *(uint32_t *)(src + 0x18);
    *(uint32_t *)(self + 0xa4) = *(uint32_t *)(src + 0x20);
    *(uint32_t *)(self + 0xac) = *(uint32_t *)(src + 0x28);
    *(uint32_t *)(self + 0xb0) = *(uint32_t *)(src + 0x2c);
    s += 0x30;
    d += 0xb4;
    {
        uint32_t n = 0x11;
        do {
            *(uint16_t *)d = *(uint16_t *)s;
            s += 2;
            d += 2;
            n--;
        } while (n != 0);
    }
    *(uint32_t *)(self + 0xd8) = *(uint32_t *)(src + 0x54);
    *(uint32_t *)(self + 0xdc) = *(uint32_t *)(src + 0x58);
    *(uint32_t *)(self + 0xe0) = *(uint32_t *)(src + 0x5c);

    func_02033e04(s1);
    func_02084b2c(s1, 0, 0x34);
    ((uint32_t *)s1)[0] = func_02036360(self + 0x84);
    ((uint32_t *)s1)[1] = func_0203608c(self + 0x84);
    ((uint32_t *)s1)[10] = 0;

    for (i = 0; i < 4; i++) {
        func_02033e28(s1, i, func_02036370(self + 0x84, i));
    }

    func_02033e40(s1, func_02036380(self + 0x84));

    func_02033f28(s2);
    func_02034030(s2, s1, 0, 0);
    {
        uint32_t *p = func_020340c4(s2);
        vv[1] = p[0];
        vv[2] = p[1];
        vv[3] = p[2];
        vv[4] = p[3];
        vv[5] = p[4];
    }

    for (i = 0; i < 5; i++) {
        uint32_t j = i * 4;
        uint8_t *q = self + j;
        void **obj = *(void ***)(q + 0xf0);
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[6])(obj);

        obj = *(void ***)(q + 0xf0);
        vt = *(void ***)obj;
        ((void (*)(void *, uint32_t))vt[7])(obj, *(uint32_t *)((uint8_t *)&vv[1] + j));

        obj = *(void ***)(q + 0xf0);
        vt = *(void ***)obj;
        ((void (*)(void *))vt[5])(obj);
    }

    func_02034014(s2);
    func_02033e24(s1);
}
