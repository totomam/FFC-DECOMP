#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c281c;
extern Pair data_ov007_021c2824;
extern Pair data_ov007_021c282c;
extern Pair data_ov007_021c2834;
extern Pair data_ov007_021c283c;
extern Pair data_ov007_021c2844;
extern Pair data_ov007_021c284c;
extern Pair data_ov007_021c2854;

void func_ov007_02199d90(uint8_t *p) {
    uint32_t state;

    *(uint32_t *)(p + 0x94) = 0;
    state = **(uint32_t **)(p + 0x88);
    if (state == 2) {
        *(uint32_t *)(p + 0x94) = 1;
        *(Pair *)(p + 0x80) = data_ov007_021c281c;
        return;
    }
    if (state == 3) {
        *(uint32_t *)(p + 0x94) = 3;
        *(Pair *)(p + 0x80) = data_ov007_021c2824;
        return;
    }
    if (state == 4) {
        *(uint32_t *)(p + 0x94) = 4;
        *(Pair *)(p + 0x80) = data_ov007_021c282c;
        return;
    }
    if (state == 5) {
        *(uint32_t *)(p + 0x94) = 5;
        *(Pair *)(p + 0x80) = data_ov007_021c2834;
        return;
    }
    if (state == 6) {
        *(uint32_t *)(p + 0x94) = 6;
        *(Pair *)(p + 0x80) = data_ov007_021c283c;
        return;
    }
    if (state == 7) {
        *(uint32_t *)(p + 0x94) = 7;
        *(Pair *)(p + 0x80) = data_ov007_021c2844;
        return;
    }
    if (state == 8) {
        *(uint32_t *)(p + 0x94) = 2;
        *(Pair *)(p + 0x80) = data_ov007_021c284c;
        return;
    }
    *(uint32_t *)(p + 0x90) = 0;
    *(Pair *)(p + 0x80) = data_ov007_021c2854;
}
