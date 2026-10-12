#include "ffc/types.h"
typedef struct { uint32_t a; int16_t b; uint16_t c; } Elem;
typedef struct { uint8_t z; } B;
extern void func_02058e98(void *list, Elem *e, B b);
void func_02058840(uint8_t *p, uint32_t v)
{
    B z;
    Elem e;
    z.z = 0;
    e.a = v;
    e.b = 0;
    e.c = 0;
    if (*(uint32_t *)(p + 0x38) < *(uint32_t *)(p + 0x3c)) {
        uint32_t n = *(uint32_t *)(p + 0x38);
        *(uint32_t *)(p + 0x38) = n + 1;
        ((Elem *)(*(uint8_t **)(p + 0x34)))[n] = e;
    } else {
        func_02058e98(p + 0x34, &e, z);
    }
    *(uint32_t *)(p + 0x1c) = (*(uint32_t *)(p + 0x38) - 1) * 32 + 1;
}
