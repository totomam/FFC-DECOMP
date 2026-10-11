#include "ffc/types.h"

extern void func_02069700(void *a, int b, int c);
extern void func_0219cfb4(void *a, int b);
extern void func_ov005_021961f8(void *a, int b);
extern void *func_02056b10(void *owner);
extern void func_02056bc0(void *object, void *node);

void func_ov010_021c8e1c(void *self, int state)
{
    uint8_t *p = (uint8_t *)self;

    func_02069700(self, 1, 0);
    func_0219cfb4(*(void **)(p + 0xe8), state);
    if (state == 4) {
        func_ov005_021961f8(*(void **)(p + 0xec), 3);
    } else {
        func_ov005_021961f8(*(void **)(p + 0xec), 2);
    }
    {
        void *node = func_02056b10((uint8_t *)*(void **)(p + 0xe8) + 0x14);
        func_02056bc0(p + 0x14, node);
    }
}
