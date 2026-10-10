#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int func_0206cb98(void *p);
extern Pair data_ov007_021c4240;
extern Pair data_ov007_021c4248;

void func_ov007_021a4ebc(uint8_t *p) {
    if (func_0206cb98(*(void **)(p + 0xc8)) != 0) {
        Pair v = data_ov007_021c4240;
        *(Pair *)(p + 0xb8) = v;
    } else {
        Pair v = data_ov007_021c4248;
        *(Pair *)(p + 0xb8) = v;
    }
}
