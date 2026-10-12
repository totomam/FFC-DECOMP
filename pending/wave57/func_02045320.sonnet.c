#include "ffc/types.h"

typedef struct {
    uint32_t f00;
    uint32_t pad04;
    uint32_t f08;
    uint32_t pad0c;
    uint32_t f10;
    uint32_t pad14;
    uint32_t f18;
    uint32_t pad1c;
    uint32_t f20;
    uint32_t pad24;
    uint32_t f28;
    uint32_t f2c;
    uint16_t arr[17];
    uint16_t pad52;
    uint32_t f54;
    uint32_t f58;
    uint32_t f5c;
} Elem;

typedef struct { uint32_t a, b; } P;
typedef struct {
    uint32_t vt;
    uint8_t pad04[0x7c];
    uint32_t f80, f84, f88, f8c, f90, f94;
    uint8_t pad98[0xc];
    Elem A[5];
    Elem B[5];
    uint32_t c0, c1, c2, c3, c4, c5;
    uint8_t c6;
} Obj;

extern void func_02056c9c(void *self, uint32_t zero);
extern void func_0209cf5c(void *base, uint32_t count, uint32_t size, void *ctor, void *dtor);
extern void func_02035f58(void *obj);
extern void *func_02035fd0(void *obj);
extern uint32_t data_020af954[];
extern P data_020afbc8;
extern P data_020afbd0;

void func_02045320(Obj *self, uint32_t p1, uint32_t p2, uint32_t p3,
                   uint32_t p5, int p6, uint32_t p7)
{
    Elem o1;
    Elem o2;
    P *src;
    int i;

    func_02056c9c(self, 0);
    self->vt = (uint32_t)data_020af954;
    self->f88 = p1;
    self->f8c = p2;
    self->f90 = p3;
    self->f94 = p5;
    func_0209cf5c(self->A, 5, 0x60, (void *)func_02035f58, (void *)func_02035fd0);
    func_0209cf5c(self->B, 5, 0x60, (void *)func_02035f58, (void *)func_02035fd0);
    {
        uint32_t *cp = &self->c0;
        cp[0] = 0; cp[1] = 0; cp[2] = 0;
    }
    self->c4 = p6;
    self->c5 = p7;
    self->c6 = 0;
    if (p6 == -1) src = &data_020afbc8; else src = &data_020afbd0;
    *(P *)&self->f80 = *src;
    for (i = 0; i < 5; i++) {
        uint8_t *d;
        uint16_t *dp;
        func_02035f58(&o1);
        d = (uint8_t *)self + i * 0x60;
        dp = (uint16_t *)(d + 0xd4);
        *(uint32_t *)(d + 0xa4) = o1.f00;
        *(uint32_t *)(d + 0xac) = o1.f08;
        *(uint32_t *)(d + 0xb4) = o1.f10;
        *(uint32_t *)(d + 0xbc) = o1.f18;
        *(uint32_t *)(d + 0xc4) = o1.f20;
        *(uint32_t *)(d + 0xcc) = o1.f28;
        *(uint32_t *)(d + 0xd0) = o1.f2c;
        { uint16_t *sp = o1.arr; uint32_t n = 17; do { *dp++ = *sp++; } while (--n); }
        *(uint32_t *)(d + 0xf8) = o1.f54;
        *(uint32_t *)(d + 0xfc) = o1.f58;
        *(uint32_t *)(d + 0x100) = o1.f5c;
        func_02035fd0(&o1);
    }
    for (i = 0; i < 5; i++) {
        uint8_t *d;
        uint16_t *dp;
        func_02035f58(&o2);
        d = (uint8_t *)self + i * 0x60;
        dp = (uint16_t *)(d + 0x2b4);
        *(uint32_t *)(d + 0x284) = o2.f00;
        *(uint32_t *)(d + 0x28c) = o2.f08;
        *(uint32_t *)(d + 0x294) = o2.f10;
        *(uint32_t *)(d + 0x29c) = o2.f18;
        *(uint32_t *)(d + 0x2a4) = o2.f20;
        *(uint32_t *)(d + 0x2ac) = o2.f28;
        *(uint32_t *)(d + 0x2b0) = o2.f2c;
        { uint16_t *sp = o2.arr; uint32_t n = 17; do { *dp++ = *sp++; } while (--n); }
        *(uint32_t *)(d + 0x2d8) = o2.f54;
        *(uint32_t *)(d + 0x2dc) = o2.f58;
        *(uint32_t *)(d + 0x2e0) = o2.f5c;
        func_02035fd0(&o2);
    }
}
