#include "ffc/types.h"

extern void func_02005988(void *obj, void *data);
extern void func_0209cf5c(void *base, int count, int size, void *ctor, void *dtor);
extern void func_02035f58(void *obj);
extern void *func_02035fd0(void *object);
extern uint32_t data_020ae67c[];

typedef struct {
    uint32_t f00, f04, f08, f0c, f10, f14, f18, f1c, f20, f24, f28, f2c;
    uint16_t h[17];
    uint16_t pad;
    uint32_t f54, f58, f5c;
} Buf;

typedef struct {
    uint8_t pad0[0x0c];
    uint32_t f0c;
    uint32_t f10;
    uint8_t f14;
    uint8_t f15;
    uint32_t f18;
    Buf e[3];
    uint32_t f13c[3];
    uint32_t f148[3];
    uint8_t f154[4];
    uint32_t f158;
    uint32_t f15c;
} Outer;

Outer *func_02037abc(Outer *p)
{
    Buf buf;
    uint32_t i = 0;
    uint32_t k;
    uint32_t n = 0x60;

    func_02005988(p, data_020ae67c);
    p->f0c = i;
    p->f10 = i;
    p->f14 = i;
    p->f15 = i;
    p->f18 = i;
    func_0209cf5c(p->e, 3, n, func_02035f58, func_02035fd0);
    *(uint32_t *)((uint8_t *)p + n + 0xf8) = i;
    *(uint32_t *)((uint8_t *)p + n + 0xfc) = i;
    for (i = 0; i < 3; i++) {
        func_02035f58(&buf);

        p->e[i].f00 = buf.f00;
        p->e[i].f08 = buf.f08;
        p->e[i].f10 = buf.f10;
        p->e[i].f18 = buf.f18;
        p->e[i].f20 = buf.f20;
        p->e[i].f28 = buf.f28;
        p->e[i].f2c = buf.f2c;
        for (k = 0; k < 17; k++) {
            p->e[i].h[k] = buf.h[k];
        }
        p->e[i].f54 = buf.f54;
        p->e[i].f58 = buf.f58;
        p->e[i].f5c = buf.f5c;
        func_02035fd0(&buf);
    }
    for (i = 0; i < 3; i++) {
        p->f13c[i] = i;
    }
    for (i = 0; i < 3; i++) {
        p->f148[i] = 0;
    }
    for (i = 0; i < 4; i++) {
        p->f154[i] = 0;
    }
    return p;
}
