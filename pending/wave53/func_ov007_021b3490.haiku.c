#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern Pair data_ov007_021c62ec;
extern Pair data_ov007_021c62f4;
extern Pair data_ov007_021c62fc;
extern Pair data_ov007_021c6304;
extern Pair data_ov007_021c630c;
extern Pair data_ov007_021c6314;
extern Pair data_ov007_021c631c;

void func_ov007_021b3490(uint8_t *p)
{
    switch (*(uint32_t *)(p + 0xc0)) {
    case 0:
        *(Pair *)(p + 0xb0) = data_ov007_021c62ec;
        return;
    case 3:
        *(Pair *)(p + 0xb0) = data_ov007_021c62f4;
        return;
    case 4:
        *(Pair *)(p + 0xb0) = data_ov007_021c62fc;
        return;
    case 1:
        *(Pair *)(p + 0xb0) = data_ov007_021c6304;
        return;
    case 2:
        *(Pair *)(p + 0xb0) = data_ov007_021c630c;
        return;
    case 5:
        *(Pair *)(p + 0xb0) = data_ov007_021c6314;
        return;
    case 6:
        *(Pair *)(p + 0xb0) = data_ov007_021c631c;
        return;
    default:
        return;
    }
}
