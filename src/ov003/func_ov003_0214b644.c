#include "ffc/types.h"

extern int32_t func_ov003_0214b318(uint32_t a, uint32_t b);
extern uint32_t data_ov003_021798dc[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov003_0214b644(uint32_t *p) {
    if (func_ov003_0214b318(p[0x22], p[0x23]) != 0) {
        *(Pair *)&p[0x20] = *(Pair *)data_ov003_021798dc;
    }
}
