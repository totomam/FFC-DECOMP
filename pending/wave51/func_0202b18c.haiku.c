#include "ffc/types.h"

extern void func_02056858(void *obj);

void func_0202b18c(uint8_t *p)
{
    void *obj;
    *(uint8_t *)(p + 0x40) = 0;
    if (*(uint8_t *)(p + 0x45) != 0) {
        obj = *(void **)(p + 0x194);
        if (obj != 0 && obj != 0) {
            void **vt = *(void ***)obj;
            ((void (*)(void *))vt[1])(obj);
        }
        *(void **)(p + 0x194) = 0;
        return;
    }
    if (*(void **)(p + 0x184) != 0) func_02056858(*(void **)(p + 0x184));
    if (*(void **)(p + 0x188) != 0) func_02056858(*(void **)(p + 0x188));
    if (*(void **)(p + 0x18c) != 0) func_02056858(*(void **)(p + 0x18c));
    if (*(void **)(p + 0x190) != 0) func_02056858(*(void **)(p + 0x190));
    *(void **)(p + 0x184) = 0;
    *(void **)(p + 0x188) = 0;
    *(void **)(p + 0x18c) = 0;
    *(void **)(p + 0x190) = 0;
}
