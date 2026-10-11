#include "ffc/types.h"

extern uint32_t data_ov007_021c2fb8[];
extern uint32_t data_ov007_021c2fc0[];

typedef struct { uint32_t a, b; } Pair;

void func_ov007_0219d740(uint8_t *p) {
    int v = *(int *)(p + 0xd4);
    switch (v) {
    case 2:
        *(Pair *)(p + 0x80) = *(Pair *)data_ov007_021c2fb8;
        return;
    case 0:
    case 1:
        *(Pair *)(p + 0x80) = *(Pair *)data_ov007_021c2fc0;
        break;
    default:
        break;
    }
}
