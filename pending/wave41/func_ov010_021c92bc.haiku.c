#include "ffc/types.h"

extern void func_ov010_021c9260(void *self, uint32_t arg, void *p);
extern void func_ov009_0219bc64(uint32_t obj, void *buf, uint32_t zero);
extern void *func_02035fd0(void *object);
extern uint8_t data_020ae644[];
extern uint8_t data_020ae654[];

typedef struct {
    uint32_t f0;
    void *f1;
    uint32_t f2;
    void *f3;
    uint32_t f4;
    void *f5;
    uint32_t f6;
    void *f7;
    uint32_t f8;
    void *f9;
    uint32_t f10;
    uint32_t f11;
    uint16_t h[17];
    uint16_t pad;
    uint32_t f21;
    uint32_t f22;
    uint32_t f23;
} S;

void func_ov010_021c92bc(void *self, void *param)
{
    S *p = (S *)param;
    S s;
    int i;
    uint16_t *src;
    uint16_t *dst;

    func_ov010_021c9260(self, *(uint32_t *)((uint8_t *)self + 0x10c), param);

    s.f0 = p->f0;
    s.f1 = data_020ae644;
    src = (uint16_t *)((uint8_t *)param + 0x30);
    dst = s.h;
    s.f2 = p->f2;
    s.f3 = data_020ae644;
    s.f4 = p->f4;
    s.f5 = data_020ae644;
    s.f6 = p->f6;
    s.f7 = data_020ae644;
    s.f8 = p->f8;
    s.f9 = data_020ae644;
    s.f10 = p->f10;
    s.f11 = p->f11;
    s.f9 = data_020ae654;

    for (i = 0x11; i != 0; i--) {
        *dst++ = *src++;
    }

    s.f21 = p->f21;
    s.f22 = p->f22;
    s.f23 = p->f23;

    func_ov009_0219bc64(*(uint32_t *)((uint8_t *)self + 0xe8), &s, 0);
    func_02035fd0(&s);
}
