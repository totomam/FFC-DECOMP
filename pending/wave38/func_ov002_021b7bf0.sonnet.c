#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov002_021b7c5c(void *obj, void *arg, uint32_t n);
extern void func_0200d5d4(void *object, void *slot, uint32_t value);
extern void func_02056bc0(void *object, void *node);

void *func_ov002_021b7bf0(uint8_t *self, void *param)
{
    void *v;
    union U { uint8_t b; uint32_t w; } u;
    uint8_t z;
    void *p = func_0205681c(0x28);
    v = (p != 0) ? func_ov002_021b7c5c(p, param, 6) : p;
    {
        uint32_t n = *(uint32_t *)(self + 0x10dc);
        uint32_t cap = *(uint32_t *)(self + 0x10e0);
        if (n < cap) {
            uint32_t n1 = n + 1;
            *(uint32_t *)(self + 0x10dc) = n1;
            ((void **)*(void **)(self + 0x10d8))[n1 - 1] = v;
        } else {
            z = 0;
            u.b = z;
            func_0200d5d4(self + 0x10d8, &v, u.w);
        }
    }
    func_02056bc0(self + 0x48, v);
    return v;
}
