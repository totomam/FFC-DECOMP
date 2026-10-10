#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;

extern void func_02056c9c(void *p, int x);
extern uint8_t data_ov013_021c49a4[];
extern Pair data_ov013_021c4b18;

void *func_ov013_021c0db0(void *a) {
    uint8_t *p = (uint8_t *)a;
    func_02056c9c(a, 0);
    *(void **)p = data_ov013_021c49a4;
    *(Pair *)(p + 0x80) = data_ov013_021c4b18;
    return a;
}
