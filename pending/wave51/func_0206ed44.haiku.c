#include "ffc/types.h"

extern void *data_0213e178;
extern int func_0206cb98(void *p);
extern void *func_0206cbd4(void *p);
extern void func_02056bc0(void *object, void *node);
extern void func_0206d79c(void *p);

void func_0206ed44(void *self)
{
    uint32_t old;
    volatile uint32_t *cnt;
    void *node;

    if (func_0206cb98(data_0213e178) != 0) {
        uint32_t *flags = (uint32_t *)((uint8_t *)self + 0xc);
        *flags = (*flags & ~0xffu) | 2;
        return;
    }

    cnt = (volatile uint32_t *)((uint8_t *)self + 0x80);
    old = *cnt;
    *cnt = *cnt + 1;

    switch (old) {
    case 0:
        *(uint8_t *)((uint8_t *)data_0213e178 + 0x321c) = 1;
        node = func_0206cbd4(data_0213e178);
        func_02056bc0((uint8_t *)self + 0x14, node);
        return;
    case 1:
        func_0206d79c(data_0213e178);
        node = func_0206cbd4(data_0213e178);
        func_02056bc0((uint8_t *)self + 0x14, node);
        return;
    case 2:
        {
            uint32_t *flags = (uint32_t *)((uint8_t *)self + 0xc);
            *flags = (*flags & ~0xffu) | 2;
        }
        return;
    default:
        return;
    }
}
