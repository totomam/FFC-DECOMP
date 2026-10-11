#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int func_ov003_0214b318(uint32_t a, uint32_t b);
extern Pair data_ov003_021798dc;

void func_ov003_0214b644(uint8_t *self) {
    if (func_ov003_0214b318(*(uint32_t *)(self + 0x88), *(uint32_t *)(self + 0x8c)) != 0) {
        *(Pair *)(self + 0x80) = data_ov003_021798dc;
    }
}
