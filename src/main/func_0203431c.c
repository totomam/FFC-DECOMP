#include "ffc/types.h"

typedef struct {
    uint32_t a, b, c, d, e, f, g;
} Arg7;

extern uint32_t data_020aadd0[];
extern uint32_t data_020ae350[];
extern uint32_t data_020ae370[];
extern uint32_t data_020ae384[];
extern void func_02054910(void *p, uint32_t x, uint32_t y);
extern void func_02054498(void *p);
extern void func_020342cc(void *p);
extern void func_02084b2c(uint32_t x, uint32_t y, uint32_t z);
extern void func_020890f8(void);
extern void func_0208b260(void);
extern void func_0208b65c(uint32_t x);
extern void func_0208b68c(uint32_t x);
extern void func_0208ae8c(void);
extern void func_0208afa0(Arg7 *s);

void *func_0203431c(void *self, uint32_t size)
{
    uint32_t *w = (uint32_t *)self;
    Arg7 s;
    uint32_t sz;

    w[0] = (uint32_t)data_020aadd0;
    w[3] = w[3] & ~0xffu;
    func_02054910((uint8_t *)self + 0x14, 0, 1);
    func_02054498((uint8_t *)self + 0x20);
    func_020342cc(self);
    w[0] = (uint32_t)data_020ae350;
    w[5] = (uint32_t)data_020ae370;
    w[8] = (uint32_t)data_020ae384;
    func_02084b2c(size, 0, 0x420);
    sz = (size + 0x1f) & ~0x1fu;
    w[11] = sz;
    s.a = 2;
    s.b = sz;
    s.c = 0x400;
    s.d = 0x105d;
    s.e = 1;
    s.f = 0;
    s.g = 0;
    func_020890f8();
    func_0208b260();
    func_0208b65c(1);
    func_0208b68c(0);
    func_0208ae8c();
    func_0208afa0(&s);
    *((uint8_t *)self + 0x34) = 0;
    w[12] = 0;
    w[14] = 0;
    return self;
}
