#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint64_t func_0209a978(uint32_t x, uint32_t y);
extern uint32_t func_0205681c(uint32_t x);
extern uint32_t func_02031624(uint32_t a, uint32_t b, Pair c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern Pair data_020ab00c;
extern Pair data_020ab014;

void func_0200b408(uint8_t *p) {
    uint32_t v;
    if (**(uint32_t **)(p + 0xa8) != (uint32_t)~2u) {
        *(Pair *)(p + 0x80) = data_020ab00c;
        return;
    }
    *(uint32_t *)(p + 0x14c) += 1;
    *(uint32_t *)(p + 0x14c) = (uint32_t)(func_0209a978(*(uint32_t *)(p + 0x14c), 10) >> 32);
    v = func_0205681c(0x118);
    if (v != 0) {
        v = func_02031624(v, *(uint32_t *)(p + 0xa8), *(Pair *)(p + 0xac),
                          (uint32_t)(p + 0xb4) + *(uint32_t *)(p + 0x14c) * 12,
                          *(uint32_t *)(p + 0x12c), 0);
    }
    func_02056bc0(p + 0x14, (void *)v);
    *(Pair *)(p + 0x80) = data_020ab014;
}
