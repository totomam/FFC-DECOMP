#include "ffc/types.h"

extern void func_01ffde60(void *p);
extern void func_01ffd020(void *p);
extern void *func_02056dd4(void *p);
extern void func_0206047c(void *p);
extern void func_02060e80(void *object);

void func_ov004_0214e508(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t *o;

    if (*(void **)(p + 0x94) != 0) {
        o = *(uint32_t **)(p + 0xa8);
        o[3] = (o[3] & ~0xffu) | 2;
        o = *(uint32_t **)(p + 0x94);
        o[3] = (o[3] & ~0xffu) | 2;
        *(void **)(p + 0x94) = 0;
    }
    func_01ffde60(*(void **)(p + 0x90));
    func_01ffd020(*(void **)(p + 0x90));
    func_0206047c(*(void **)((uint8_t *)func_02056dd4(self) + 0x20));
    func_02060e80(*(void **)((uint8_t *)func_02056dd4(self) + 0x24));
}
