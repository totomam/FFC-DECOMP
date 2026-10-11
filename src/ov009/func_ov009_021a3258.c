#include "ffc/types.h"

extern void func_02059bf8(void *p);

void func_ov009_021a3258(void *self)
{
    if (*((uint8_t *)self + 0xc4) == 0) {
        void *inner = *(void **)((uint8_t *)self + 0x80);
        func_02059bf8(*(void **)((uint8_t *)inner + 0x8c));
    }
}
