#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
extern void func_ov004_02155390(uint8_t *p);
extern Pair data_ov004_02159ce0;

void func_ov004_0215540c(uint8_t *p) {
    func_ov004_02155390(p);
    *(Pair *)(p + 0x94) = data_ov004_02159ce0;
}
