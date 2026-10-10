#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int func_0206cb98(void *p);
extern Pair data_ov013_021c4270;
extern Pair data_ov013_021c4278;

void func_ov013_021bd9a8(uint8_t *p) {
    if (func_0206cb98(*(void **)(p + 0xf4)) != 0) {
        Pair v = data_ov013_021c4270;
        *(Pair *)(p + 0xb8) = v;
    } else {
        Pair v = data_ov013_021c4278;
        *(Pair *)(p + 0xb8) = v;
    }
}
