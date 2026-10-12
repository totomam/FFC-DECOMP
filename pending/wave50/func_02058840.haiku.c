#include "ffc/types.h"

typedef struct {
    uint32_t a;
    int16_t b;
    uint16_t c;
} Elem;

typedef struct {
    uint8_t z;
    Elem e;
} Frame;

extern void func_02058e98(void *list, uint8_t v);

void func_02058840(uint8_t *p, uint32_t v)
{
    Frame f;
    uint32_t n;

    f.z = 0;
    f.e.a = v;
    f.e.b = 0;
    f.e.c = 0;

    n = *(uint32_t *)(p + 0x38);
    if (n < *(uint32_t *)(p + 0x3c)) {
        *(uint32_t *)(p + 0x38) = n + 1;
        ((Elem *)(*(uint8_t **)(p + 0x34)))[n] = f.e;
    } else {
        func_02058e98(p + 0x34, f.z);
    }
    *(uint32_t *)(p + 0x1c) = (*(uint32_t *)(p + 0x38) - 1) * 32 + 1;
}
