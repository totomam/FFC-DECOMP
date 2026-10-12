#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern Pair data_ov007_021c3008;
extern Pair data_ov007_021c3010;
extern Pair data_ov007_021c3018;
extern Pair data_ov007_021c3020;
extern Pair data_ov007_021c3028;
extern Pair data_ov007_021c3030;
extern Pair data_ov007_021c3038;

void func_ov007_0219db40(uint8_t *p) {
    switch (*(uint32_t *)(p + 0xd8)) {
    case 1:
        *(Pair *)(p + 0x80) = data_ov007_021c3008;
        break;
    case 0:
        *(Pair *)(p + 0x80) = data_ov007_021c3010;
        break;
    case 2:
        *(Pair *)(p + 0x80) = data_ov007_021c3018;
        break;
    case 3:
        *(Pair *)(p + 0x80) = data_ov007_021c3020;
        break;
    case 4:
        *(Pair *)(p + 0x80) = data_ov007_021c3028;
        break;
    case 5:
        *(Pair *)(p + 0x80) = data_ov007_021c3030;
        break;
    case 8:
        *(Pair *)(p + 0x80) = data_ov007_021c3038;
        break;
    default:
        break;
    }
}
