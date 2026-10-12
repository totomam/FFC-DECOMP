#include "ffc/types.h"

extern uint32_t func_02091b10(void *object, void *first, ...);
extern void *func_0205681c(uint32_t x);
extern void *func_ov009_021a0240(void *a, void *b, void *c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov009_021b05d4[];
extern uint32_t data_ov009_021b0160[];

typedef struct {
    uint8_t pad0[0x1bc];
    void *a;
    uint8_t pad1[0x10];
    void *b;
    uint8_t pad2[0x8];
    void *arr[5];
} Obj;

void func_ov009_021a09a8(Obj *self)
{
    uint32_t buf[16];
    uint32_t i;

    for (i = 0; i < 5; i++) {
        void *res = 0;
        void *obj;

        func_02091b10(buf, data_ov009_021b05d4, i + 1);
        if (func_0205681c(0x94) != 0) {
            res = func_ov009_021a0240(func_0205681c(0x94), self->a, buf, data_ov009_021b0160[i]);
        }
        self->arr[i] = res;
        func_02056bc0(self->b, self->arr[i]);
        obj = self->arr[i];
        if (*(int8_t *)((uint8_t *)obj + 0xc) == 0) {
            ((void (**)(void *))(*(void **)obj))[2](obj);
        }
        obj = self->arr[i];
        *(uint32_t *)((uint8_t *)obj + 0xc) =
            (*(uint32_t *)((uint8_t *)obj + 0xc) & ~0xffu) | 1u;
    }
}
