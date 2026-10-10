#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
} Pair;

extern Pair data_ov013_021c4218;
extern Pair data_ov013_021c4220;

void func_ov013_021bd810(uint8_t *p) {
    if (*(uint32_t *)(p + 0xf0) == 0xffffffff) {
        *(Pair *)(p + 0xb8) = data_ov013_021c4218;
    } else {
        *(Pair *)(p + 0xb8) = data_ov013_021c4220;
    }
}
