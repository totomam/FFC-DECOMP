#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_0206df9c(void *p, int arg);
extern void func_02055ae8(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

void func_ov001_0218b4ec(void *self)
{
    uint8_t *p = (uint8_t *)self;
    if (*(void **)(p + 0x734) == 0) {
        void *v = func_0205681c(0x29c);
        if (v != 0) {
            v = func_0206df9c(v, 0);
        }
        *(void **)(p + 0x734) = v;
        {
            void *arg = p;
            if (p) {
                arg = p + 0xb0;
            }
            func_02055ae8(*(void **)(p + 0x734) + 0x20, arg);
        }
        func_02056bc0(p + 0x48, *(void **)(p + 0x734));
    }
}
