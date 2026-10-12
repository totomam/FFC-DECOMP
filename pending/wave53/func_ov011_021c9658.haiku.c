#include "ffc/types.h"

extern void func_02069288(void *object);
extern uint8_t func_02036360(const void *object);
extern void func_020692a4(void *object);
extern void func_ov011_021c9818(void *object);

void func_ov011_021c9658(void *p0)
{
    char *p = (char *)p0;
    int i;
    uint32_t k;

    for (i = 0; i < 5; i++) {
        func_02069288(*(void **)(p + 0xfc + i * 4));
    }

    *(uint8_t *)(p + 0x3c5) = 0;
    *(uint8_t *)(p + 0x3c6) = 4;

    if (*(uint32_t *)(p + 0x128) != 0) {
        k = 0;
        do {
            uint32_t *arr = *(uint32_t **)(p + 0x124);
            uint8_t idx = (uint8_t)arr[k];
            if (func_02036360(p + 0x140 + 0x60 * idx) != 0) {
                func_02069288(*(void **)(p + 0x110 + k * 4));
            }
            k = (uint8_t)(k + 1);
        } while (k < *(uint32_t *)(p + 0x128));
    }

    for (i = 0; i < 2; i++) {
        func_02069288(*(void **)(p + 0xd8 + i * 4));
    }

    {
        void *o = *(void **)(p + 0xbc);
        void *q = *(void **)((char *)o + 0x98);
        void **vt = *(void ***)q;
        func_020692a4(*(void **)(p + 0xbc));
        ((void (*)(void *))vt[0x2c / 4])(q);
    }

    func_02069288(*(void **)(p + 0xc0));

    {
        void *o = *(void **)(p + 0xc0);
        void *q = *(void **)((char *)o + 0x98);
        void **vt = *(void ***)q;
        ((void (*)(void *))vt[0x28 / 4])(q);
    }

    func_ov011_021c9818(p0);
}
