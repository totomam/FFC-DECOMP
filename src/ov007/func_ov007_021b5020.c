#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
extern void func_ov007_021b56a0(uint8_t *p);
extern Pair data_ov007_021c6954;

void func_ov007_021b5020(uint8_t *p) {
    func_ov007_021b56a0(p);
    *(Pair *)(p + 0xb0) = data_ov007_021c6954;
}
