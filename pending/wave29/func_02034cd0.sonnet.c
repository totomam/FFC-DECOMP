#include "ffc/types.h"

extern void func_02068580(void *obj, uint32_t arg);

void func_02034cd0(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t i = 0;
    volatile uint32_t *pa;
    if (i < *(uint32_t *)(p + 0xe0)) {
        pa = &a;
        do {
            func_02068580(*(void **)(p + 0x8c + i * 4), *pa);
            i++;
        } while (i < *(uint32_t *)(p + 0xe0));
    }
}
