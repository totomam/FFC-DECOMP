#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint8_t *data_020b8e44;
extern Pair data_ov007_021c781c;
extern Pair data_ov007_021c7824;

void func_ov007_021baa84(uint8_t *self) {
    uint32_t s = *(uint32_t *)(self + 0x38b8);
    if (s >= 1 && s <= 3) {
        data_020b8e44[0xc] = (uint8_t)s;
        *(Pair *)(self + 0xb0) = data_ov007_021c781c;
    } else {
        *(Pair *)(self + 0xb0) = data_ov007_021c7824;
    }
}
