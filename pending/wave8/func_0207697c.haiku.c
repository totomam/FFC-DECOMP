#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b286c[];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_0207697c(uint8_t *p) {
    uint32_t a = ((uint32_t (*)(uint8_t *, uint32_t))(*(void ***)p)[5])(p, 2);
    uint8_t *q = *(uint8_t **)(p + 0x84);
    uint32_t b = ((uint32_t (*)(uint8_t *, uint32_t, uint8_t *))(*(void ***)q)[2])(q, a, p + 0x94);
    func_02056bc0(p + 0x14, (void *)b);
    Pair s = *(Pair *)data_020b286c;
    *(Pair *)(p + 0x88) = s;
}
