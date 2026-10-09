#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
extern void func_02037568(uint8_t *p);
extern Pair data_020afe90;

void func_02048f48(uint8_t *p) {
    func_02037568(p);
    *(Pair *)(p + 0x80) = data_020afe90;
}
