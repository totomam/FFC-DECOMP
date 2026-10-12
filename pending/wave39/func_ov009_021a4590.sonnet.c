#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct {
    uint8_t pad0[0xb8];
    uint32_t f_b8;
    uint8_t pad1[0x1c];
    void *slots[1];
} Self;

extern void *func_0205681c(uint32_t size);
extern uint8_t func_02036360(const void *object);
extern uint32_t func_020366d4(void *object);
extern uint32_t func_020363a4(const void *object);
extern void *func_ov009_0219a130(void *a, uint32_t b, Pair p, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_020695ec(void *p, void *r);
extern Pair data_ov009_021b093c[];

void func_ov009_021a4590(Self *self, int idx, void *c)
{
    void *obj = func_0205681c(0xb4);
    if (obj) {
        uint32_t x = func_02036360(c);
        uint32_t y = func_020366d4(c);
        uint32_t z = func_020363a4(c);
        obj = func_ov009_0219a130(obj, self->f_b8, data_ov009_021b093c[idx], x, y, 0, z);
    }
    func_020695ec(self, self->slots[idx] = obj);
}
