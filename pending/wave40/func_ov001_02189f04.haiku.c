#include "ffc/types.h"

typedef struct Pair { uint32_t a; uint32_t b; } Pair;

extern Pair data_ov001_021945e0;
extern Pair data_ov001_021945e8;
extern void func_02084b2c(void *dst, int val, uint32_t size);
extern uint32_t func_0203b738(void);
extern void func_02056bc0(void *object, void *node);

void func_ov001_02189f04(void *self)
{
    *(uint32_t *)((uint8_t *)self + 0x6bc) = 0;
    *(uint32_t *)((uint8_t *)self + 0x6c0) = 0;
    ((void (*)(void *))(*(void ***)self)[10])(self);
    if (((uint32_t (*)(void *))(*(void ***)self)[13])(self) != 0) {
        *(Pair *)((uint8_t *)self + 0xf4) = data_ov001_021945e0;
        return;
    }
    ((uint8_t *)self)[0x725] = 1;
    ((void (*)(void *))(*(void ***)self)[18])(self);
    func_02084b2c((uint8_t *)self + 0x104, 0, 0x5b0);
    func_02056bc0((uint8_t *)self + 0x14, (void *)func_0203b738());
    *(Pair *)((uint8_t *)self + 0xf4) = data_ov001_021945e8;
}
