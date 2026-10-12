#include "ffc/types.h"

extern void func_02056c9c(void *object, uint32_t a, uint32_t b, uint32_t c);
extern void *func_0203b95c(uint32_t a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern char data_ov009_021af82c[];
extern uint32_t data_ov009_021af7c0[];

typedef void (*VFn)(void *, uint32_t, uint32_t);

void *func_ov009_02199648(uint8_t *self, void *a1, uint32_t a2, uint32_t a3, ...)
{
    uint32_t i;

    func_02056c9c(self, 0, a2, a3);
    *(void **)self = (void *)data_ov009_021af82c;

    for (i = 0; i < 5; i++) {
        *(void **)(self + 0x80 + i * 4) = func_0203b95c(data_ov009_021af7c0[1], a1, 2, 1);
        ((VFn)(*(void ***)(*(void **)(self + 0x80 + i * 4)))[14])(*(void **)(self + 0x80 + i * 4), 1, 0);
        func_02064390(*(void **)(self + 0x80 + i * 4), a2 + ((i - 2) << 3), a3);
        ((VFn)(*(void ***)(*(void **)(self + 0x80 + i * 4)))[8])(*(void **)(self + 0x80 + i * 4), 2, 0);
        ((void (*)(void *))(*(void ***)(*(void **)(self + 0x80 + i * 4)))[10])(*(void **)(self + 0x80 + i * 4));
        func_02056bc0(self + 0x48, *(void **)(self + 0x80 + i * 4));
        func_02064aa8(*(void **)(self + 0x80 + i * 4));
        func_0205f2f0(*(void **)(self + 0x80 + i * 4), 1);
    }
    return self;
}
