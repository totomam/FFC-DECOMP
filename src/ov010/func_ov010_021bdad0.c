#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
extern void func_02056c9c(void *p, int x);
extern void func_02036750(void *p);
extern uint32_t data_ov010_021d15c8;
extern Pair data_ov010_021d15d8;
void *func_ov010_021bdad0(uint8_t *p, uint32_t a, uint32_t b) {
    int z = 0;
    func_02056c9c(p, 0);
    *(uint32_t**)p = &data_ov010_021d15c8;
    *(uint32_t*)(p + 0x88) = a;
    func_02036750(p + 0x90);
    func_02036750(p + 0xe8);
    *(uint32_t*)(p + 0x144) = z;
    *(uint32_t*)(p + 0x148) = z;
    *(uint8_t*)(p + 0x14c) = z;
    *(uint8_t*)(p + 0x14d) = z;
    *(uint8_t*)(p + 0x14e) = z;
    *(uint8_t*)(p + 0x14f) = z;
    *(uint8_t*)(p + 0x150) = z;
    *(uint32_t*)(p + 0x154) = z;
    *(uint32_t*)(p + 0x158) = z;
    *(int32_t*)(p + 0x15c) = 2;
    *(int32_t*)(p + 0x160) = -1;
    *(int32_t*)(p + 0x164) = -1;
    *(uint32_t*)(p + 0x168) = b;
    *(Pair*)(p + 0x80) = data_ov010_021d15d8;
    return p;
}
