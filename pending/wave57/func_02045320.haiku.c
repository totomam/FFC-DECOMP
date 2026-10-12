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

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t pad;
    uint32_t d;
    uint32_t e;
    uint8_t f;
} Ctl;

extern void func_02056c9c(void *self, uint32_t zero);
extern void func_0209cf5c(void *base, uint32_t count, uint32_t size, void *ctor, void *dtor);
extern void func_02035f58(void *obj);
extern void *func_02035fd0(void *obj);
extern uint32_t data_020af954[];
extern uint32_t data_020afbc8[];
extern uint32_t data_020afbd0[];

void func_02045320(uint8_t *self, uint32_t p1, uint32_t p2, uint32_t p3,
                   uint32_t p5, uint32_t p6, uint32_t p7)
{
    Elem o1;
    Elem o2;
    uint32_t *src;
    uint32_t i;
    int j;
    Elem *d;

    func_02056c9c(self, 0);
    *(uint32_t **)self = data_020af954;
    *(uint32_t *)(self + 0x88) = p1;
    *(uint32_t *)(self + 0x8c) = p2;
    *(uint32_t *)(self + 0x90) = p3;
    *(uint32_t *)(self + 0x94) = p5;

    func_0209cf5c(self + 0xa4, 5, 0x60, (void *)func_02035f58, (void *)func_02035fd0);
    func_0209cf5c(self + 0x284, 5, 0x60, (void *)func_02035f58, (void *)func_02035fd0);

    *(uint32_t *)(self + 0x464) = 0;
    *(uint32_t *)(self + 0x468) = 0;
    *(uint32_t *)(self + 0x46c) = 0;
    *(uint32_t *)(self + 0x474) = p6;
    *(uint32_t *)(self + 0x478) = p7;
    self[0x47c] = 0;

    if (p6 == 0xffffffff) {
        src = data_020afbc8;
    } else {
        src = data_020afbd0;
    }
    *(uint32_t *)(self + 0x80) = src[0];
    *(uint32_t *)(self + 0x84) = src[1];

    for (i = 0; i < 5; i++) {
        func_02035f58(&o1);
        d = (Elem *)(self + 0xa4 + i * 0x60);
        d->f00 = o1.f00;
        d->f08 = o1.f08;
        d->f10 = o1.f10;
        d->f18 = o1.f18;
        d->f20 = o1.f20;
        d->f28 = o1.f28;
        d->f2c = o1.f2c;
        for (j = 0; j < 17; j++) {
            d->arr[j] = o1.arr[j];
        }
        d->f54 = o1.f54;
        d->f58 = o1.f58;
        d->f5c = o1.f5c;
        func_02035fd0(&o1);
    }

    for (i = 0; i < 5; i++) {
        func_02035f58(&o2);
        d = (Elem *)(self + 0x284 + i * 0x60);
        d->f00 = o2.f00;
        d->f08 = o2.f08;
        d->f10 = o2.f10;
        d->f18 = o2.f18;
        d->f20 = o2.f20;
        d->f28 = o2.f28;
        d->f2c = o2.f2c;
        for (j = 0; j < 17; j++) {
            d->arr[j] = o2.arr[j];
        }
        d->f54 = o2.f54;
        d->f58 = o2.f58;
        d->f5c = o2.f5c;
        func_02035fd0(&o2);
    }
}
