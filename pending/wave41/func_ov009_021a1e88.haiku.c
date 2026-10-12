#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint32_t func_ov009_0219e428(uint32_t x);
extern void func_ov009_021a1e0c(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_020363bc(const void *object);
extern void func_02021338(uint16_t v);
extern Pair data_ov009_021b06a8;

void func_ov009_021a1e88(uint8_t *p)
{
    *(int32_t *)(p + 500) += 1;
    if (*(int32_t *)(p + 500) >= (int32_t)func_ov009_0219e428(145)) {
        uint8_t *q = *(uint8_t **)(p + 448);
        q[0x41] = 1;
    }
    func_ov009_021a1e0c(p, 0, 0x8c, 0x96, 0x19);
    if (func_ov009_0219e428(200) == *(uint32_t *)(p + 500)) {
        func_02021338(*(uint16_t *)(func_020363bc(p + 328) + 0x58));
    }
    if (*(int32_t *)(p + 500) >= (int32_t)func_ov009_0219e428(220)) {
        *(Pair *)(p + 128) = data_ov009_021b06a8;
    }
}
