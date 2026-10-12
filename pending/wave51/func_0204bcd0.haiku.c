#include "ffc/types.h"

extern void func_0204b098(void *p);
extern void *func_0204dc68(void *a, void *b);

typedef void (*fn_t)(void *, void (*)(void *), uint32_t);

void func_0204bcd0(void *param0, void *param1)
{
    uint8_t *o = (uint8_t *)param1;
    void *x;
    void *n;

    x = *(void **)(o + 0x34);
    if (x != 0) {
        do {
            n = *(void **)x;
            func_0204b098(x);
            x = n;
            *(void **)(o + 0x34) = x;
        } while (x != 0);
    }

    if (*(void **)(o + 0x20) != 0) {
        func_0204b098(*(void **)(o + 0x20));
    }

    if (*(void **)(o + 0x24) != 0) {
        func_0204b098(*(void **)(o + 0x24));
    }

    if (*(fn_t *)(o + 0x30) != 0) {
        (*(fn_t *)(o + 0x30))(*(void **)(o + 0x28), func_0204b098, *(uint32_t *)(o + 0x438));
        *(void **)(o + 0x28) = 0;
        *(void **)(o + 0x1c) = 0;
    }

    n = func_0204dc68(param0, o);
    if (n != 0) {
        *(uint32_t *)((uint8_t *)n + 0x14) = 0;
    }

    func_0204b098(o);
}
