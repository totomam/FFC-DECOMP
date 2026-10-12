#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t v);
extern uint8_t data_ov003_021795b4[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov003_021798d4;

void *func_ov003_0214b59c(void *this_, uint32_t a1, uint32_t a2, uint8_t a3, uint8_t a4, uint32_t a5, uint32_t a6)
{
    uint8_t *p = (uint8_t *)this_;

    func_02056c9c(this_, 0);
    *(uint8_t **)p = data_ov003_021795b4;
    *(uint32_t *)(p + 0x88) = a1;
    *(uint32_t *)(p + 0x8c) = a2;
    *(uint8_t *)(p + 0x90) = a3;
    *(uint8_t *)(p + 0x91) = a4;
    *(uint32_t *)(p + 0x94) = a5;
    *(uint32_t *)(p + 0x98) = 0;
    *(uint32_t *)(p + 0x9c) = a6;
    *(Pair *)(p + 0x80) = data_ov003_021798d4;
    return this_;
}
