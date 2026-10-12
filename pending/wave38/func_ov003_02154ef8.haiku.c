#include "ffc/types.h"

typedef struct {
    uint32_t a, b, c, d, e;
} Ent;

void func_ov003_02154ef8(uint8_t *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5) {
    ((Ent *)(p + 0x110))[*(int32_t *)(p + 0x1d8)].a = a1;
    ((Ent *)(p + 0x110))[*(int32_t *)(p + 0x1d8)].b = a2;
    ((Ent *)(p + 0x110))[*(int32_t *)(p + 0x1d8)].c = a3;
    ((Ent *)(p + 0x110))[*(int32_t *)(p + 0x1d8)].d = a4;
    ((Ent *)(p + 0x110))[*(int32_t *)(p + 0x1d8)].e = a5;
    *(int32_t *)(p + 0x1d8) += 1;
}
