#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
extern Pair data_ov007_021c780c;
void func_ov007_021ba984(uint8_t *p) {
    *(uint32_t *)(p + 0xc4) = 0;
    *(uint32_t *)(p + 0xc8) = 3;
    *(uint32_t *)(p + 0xcc) = 0;
    *(uint32_t *)(p + 0xd0) = 9999;
    *(uint8_t *)(p + 0xd4) = 1;
    *(uint8_t *)(p + 0xd5) = 1;
    *(uint8_t *)(p + 0xd6) = 1;
    *(uint8_t *)(p + 0xd7) = 20;
    *(Pair *)(p + 0xb0) = data_ov007_021c780c;
}
