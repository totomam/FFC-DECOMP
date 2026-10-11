#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint8_t *data_0213df20;
extern uint8_t data_ov009_021bd120;
extern uint32_t data_0209de10;
extern Pair data_ov009_021b070c;

extern void func_020591f4(uint32_t a, uint32_t b);
extern uint32_t func_ov009_0219e428(uint32_t a);

void func_ov009_021a2ba0(uint8_t *p)
{
    Pair v;
    func_020591f4(*(uint32_t *)(data_0213df20 + 0x14), 0);
    if (data_ov009_021bd120 != 0) {
        *(uint32_t *)(p + 0x20c) = func_ov009_0219e428(0xb4);
    } else {
        *(uint32_t *)(p + 0x20c) = data_0209de10;
    }
    v = data_ov009_021b070c;
    *(Pair *)(p + 0x80) = v;
}
