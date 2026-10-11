#include "ffc/types.h"

extern void func_02056bf4(void *a, void *b);
extern void func_01ffde24(void *a, void *b);

void func_ov004_02151b0c(uint8_t *p)
{
    func_02056bf4(p + 0x48, *(void **)(p + 0x140));
    if (*(void **)(p + 0x140) != 0) {
        if (*(void **)(p + 0x140) != 0) {
            void *obj = *(void **)(p + 0x140);
            ((void (*)(void *))((*(void ***)obj)[1]))(obj);
        }
        *(void **)(p + (5 << 6)) = 0;
    }
    func_01ffde24(*(void **)(p + 0x90), *(void **)(p + 0xe4));
}
