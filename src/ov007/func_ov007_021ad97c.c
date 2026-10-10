#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;

extern void func_02056c9c(void *p, int x);
extern uint8_t data_ov007_021c5364[];
extern Pair data_ov007_021c53d4;

void *func_ov007_021ad97c(void *a) {
    uint8_t *p = (uint8_t *)a;
    func_02056c9c(a, 0);
    *(void **)p = data_ov007_021c5364;
    *(Pair *)(p + 0x80) = data_ov007_021c53d4;
    return a;
}
