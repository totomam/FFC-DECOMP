#include "ffc/types.h"

extern void func_ov009_021adbdc(void *a, uint32_t b);
extern void func_02005988(void *dst, const void *src);
extern void func_02068ddc(uint32_t v, void *p);
extern void *func_020059cc(void *object);
extern uint32_t data_ov009_021b0bb4[];

typedef struct {
    uint8_t pad[0xec];
    uint32_t arr1[10];
    uint32_t arr2[1];
} Obj;

void func_ov009_021a4774(Obj *self, uint32_t idx)
{
    uint32_t local[3];

    func_ov009_021adbdc(self, self->arr1[idx]);
    func_02005988(local, data_ov009_021b0bb4);
    func_02068ddc(self->arr2[idx], local);
    func_020059cc(local);
}
