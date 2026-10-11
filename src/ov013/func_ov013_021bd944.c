#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov013_021c4258;
extern Pair data_ov013_021c4260;

void func_ov013_021bd944(uint8_t *p) {
    if (*(uint32_t *)(p + 0xd4) == 0) {
        *(Pair *)(p + 0xb8) = data_ov013_021c4258;
    } else {
        *(Pair *)(p + 0xb8) = data_ov013_021c4260;
    }
}
