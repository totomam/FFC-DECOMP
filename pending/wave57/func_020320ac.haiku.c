#include "ffc/types.h"

typedef struct {
    uint32_t a, b, c, d;
} V4;

extern void func_02021338(uint32_t v);
extern uint32_t func_0203b6fc(void);
extern uint32_t func_020315ec(uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_020655dc(uint32_t a, uint32_t b, uint32_t c);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_02056aec(void *object);
extern uint32_t func_02020cf8(uint32_t a, V4 v);
extern char data_020adf68[];

#define F32(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

uint32_t func_020320ac(void *self, uint32_t x, uint32_t y, uint32_t flag)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t i, j, n, t, r6, res, A, B, bc, c0;
    V4 v;
    volatile V4 p;
    uint32_t *o;

    n = F32(s, 0xec);
    if (n == 0) {
        return 0;
    }
    i = 0;
    for (;;) {
        if (x == ((uint32_t *)F32(s, 0xc4))[i]) {
            break;
        }
        i++;
        if (i >= F32(s, 0xec)) {
            return 0;
        }
    }
    *(uint32_t *)F32(s, 0xdc) = *(uint32_t *)((uint8_t *)F32(s, 0xe8) + i * 16);

    func_02021338(y);
    t = func_0203b6fc();
    for (j = 0; j < F32(s, 0xec); j++) {
        func_02056bc0((void *)t, (void *)func_020315ec(((uint32_t *)F32(s, 0xc4))[j]));
    }

    t = func_020655dc(*(uint32_t *)(F32(s, 0xd8) + 0x14), 2, 1);
    func_02056bc0(s + 0x14, (void *)t);

    if (flag) {
        o = (uint32_t *)func_0205681c(0x28);
        if (o != 0) {
            o[3] &= ~0xffu;
            o[0] = (uint32_t)data_020adf68;
            o[5] = (uint32_t)s;
            o[8] = 0;
            *((uint8_t *)o + 0x24) = 1;
            o[6] = F32(x, 0xac);
            o[7] = F32(x, 0xb0);
        }
        func_02056bc0(s + 0x14, o);
    }

    r6 = func_02056aec(s);
    A = (F32(s, 0xe4) - F32(s, 0xfc)) - F32(s, 0x108);
    B = (F32(s, 0xe0) - F32(s, 0xf8)) - F32(s, 0x104);
    bc = F32(s, 0xbc);
    c0 = F32(s, 0xc0);
    p.a = B;
    p.c = B;
    p.b = A;
    p.d = A;
    v.a = bc * 4 + B;
    v.b = A;
    v.c = bc * 4 + B;
    v.d = c0 * 8 + A;
    res = func_02020cf8(F32(s, 0xb8), v);

    func_02056bc0(s + 0x14, (void *)func_0203b6fc());
    func_02056bc0(s + 0x14, (void *)res);
    func_02056bc0(s + 0x14, (void *)r6);
    return 1;
}
