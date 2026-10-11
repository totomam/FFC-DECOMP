#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c60a8;
extern Pair data_ov007_021c60b0;

void func_ov007_021b2a94(uint8_t *p) {
    int32_t flag = *(int32_t *)(p + 0xfc);
    if (flag == 0) {
        uint32_t a = data_ov007_021c60a8.a;
        uint32_t b = data_ov007_021c60a8.b;
        *(uint32_t *)(p + 0x3114) = a;
        *(uint32_t *)(p + 0x3118) = b;
        return;
    }
    if (flag > 0x40) {
        *(int32_t *)(p + 0xfc) = 0x40;
    }
    {
        uint32_t a = data_ov007_021c60b0.a;
        uint32_t b = data_ov007_021c60b0.b;
        *(uint32_t *)(p + 0x3114) = a;
        *(uint32_t *)(p + 0x3118) = b;
    }
}
