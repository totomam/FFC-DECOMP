#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
extern void func_02037550(uint8_t *p);
extern Pair data_ov001_02194934;

void func_ov001_0218d77c(uint8_t *p) {
    func_02037550(p);
    *(Pair *)(p + 0xb0) = data_ov001_02194934;
}
