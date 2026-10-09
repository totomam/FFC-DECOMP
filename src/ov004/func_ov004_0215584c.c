#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
extern void func_020214f8(uint8_t *p);
extern Pair data_ov004_02159d38;

void func_ov004_0215584c(uint8_t *p) {
    func_020214f8(p);
    *(Pair *)(p + 0x94) = data_ov004_02159d38;
}
