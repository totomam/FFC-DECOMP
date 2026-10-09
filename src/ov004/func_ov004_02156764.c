#include "ffc/types.h"

typedef struct {
    int32_t fn;
    int32_t adj;
} MemPtr;

void func_ov004_02156764(uint8_t *self)
{
    MemPtr *mp = (MemPtr *)(self + 0x88);
    int32_t adj = mp->adj;
    uint8_t *obj = *(uint8_t **)(self + 0x84);
    uint8_t *thisp = obj + (adj >> 1);
    int32_t f;

    if (adj & 1) {
        f = *(int32_t *)(*(uint8_t **)thisp + mp->fn);
    } else {
        f = mp->fn;
    }
    ((void (*)(void *, uint32_t))f)(thisp, *(uint32_t *)(self + 0x90));

    *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2u;
}
