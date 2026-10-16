#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
extern void func_ov004_0214e56c(uint32_t x, Pair p);
void func_ov004_02151e98(uint8_t *self) {
    func_ov004_0214e56c(*(uint32_t*)(self + 0x14), *(Pair*)(self + 0x18));
}
