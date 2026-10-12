#include "ffc/types.h"

extern void func_02069434(void *p, int n);
extern void func_020695e4(void *p);
extern void func_ov002_02198d08(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021b3c90(void);
extern uint32_t func_ov002_0219b860(void);
extern uint32_t data_ov002_021d5aec[];

typedef struct L { uint32_t a; uint32_t b; uint32_t *c; } L;
#define FLD(T, off) (*(T *)((uint8_t *)self + (off)))

void *func_ov002_021b3cf0(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t e, uint8_t f)
{
    func_02069434(self, 2);
    FLD(void *, 0) = data_ov002_021d5aec;
    FLD(uint32_t, 0xc0) = b;
    FLD(uint32_t, 0xc4) = d;
    FLD(uint32_t, 0xd4) = 0x40;
    FLD(uint32_t, 0xd8) = 0x70;
    FLD(uint8_t, 0xdc) = 0;
    FLD(uint32_t, 0xe0) = a;
    FLD(uint32_t, 0xe4) = c;
    FLD(uint32_t, 0xe8) = 0;
    FLD(uint32_t, 0xf0) = 0;
    FLD(uint32_t, 0xf8) = 0;
    FLD(uint32_t, 0x108) = 0;
    {
        L *l = (L *)((uint8_t *)self + 0x10c);
        l->a = 0;
        l->b = 0;
        l->c = &l->b;
    }
    FLD(uint32_t, 0x118) = 0;
    FLD(uint8_t, 0x150) = 1;
    FLD(uint8_t, 0x151) = e;
    FLD(uint8_t, 0x152) = f;
    func_020695e4(self);
    func_ov002_02198d08(FLD(uint32_t, 0xe0), FLD(uint32_t, 0xc0));
    FLD(uint32_t, 0xbc) = func_ov002_021b3c90();
    FLD(uint32_t, 0xb8) = 2;
    func_ov002_02198d08(FLD(uint32_t, 0xe0), FLD(uint32_t, 0xc0));
    FLD(uint32_t, 0xd0) = func_ov002_0219b860();
    FLD(uint32_t, 0xcc) = FLD(uint32_t, 0xd0);
    return self;
}
