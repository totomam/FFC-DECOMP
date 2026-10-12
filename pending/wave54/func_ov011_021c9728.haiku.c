#include "ffc/types.h"

extern void func_02069288(void *object);
extern void func_020692a4(void *object);
extern uint8_t func_02036360(const void *object);
extern void func_ov011_021c9818(void *object);

void func_ov011_021c9728(void *object, int idx) {
    uint8_t *p = (uint8_t *)object;
    int i;
    uint8_t j;
    int o;
    uint8_t *base;

    for (i = 0; i < 5; i++) {
        func_02069288(*(void **)(p + 0xfc + i * 4));
    }
    func_020692a4(*(void **)(p + 0xfc + idx * 4));

    if (idx == p[0x3c5]) {
        p[0x3c5] = 1;
    }
    if (idx == p[0x3c6]) {
        p[0x3c6] = 3;
    }

    o = 0x4a << 2;
    base = p + o + 0x18;
    j = 0;
    if (*(uint32_t *)(p + o) > 0) {
        do {
            uint8_t k = (uint8_t)((uint32_t *)*(void **)(p + o - 4))[j];
            if (func_02036360(base + 0x60 * k)) {
                func_020692a4(*(void **)(p + o - 0x18 + j * 4));
            }
            j++;
        } while (j < *(uint32_t *)(p + o));
    }

    for (i = 0; i < 2; i++) {
        func_020692a4(*(void **)(p + 0xd8 + i * 4));
    }

    func_02069288(*(void **)(p + 0xbc));
    {
        void *q = *(void **)(*(uint8_t **)(p + 0xbc) + 0x98);
        ((void (*)(void *))((void **)*(void **)q)[10])(q);
    }

    func_020692a4(*(void **)(p + 0xc0));
    {
        void *q = *(void **)(*(uint8_t **)(p + 0xc0) + 0x98);
        ((void (*)(void *))((void **)*(void **)q)[11])(q);
    }

    func_ov011_021c9818(p);
}
