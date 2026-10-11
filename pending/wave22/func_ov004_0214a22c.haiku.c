#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t data_ov004_02158b08;
extern uint32_t data_ov004_02158b1c;
extern Pair data_ov004_02158c7c;

void func_ov004_0214a22c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t *src;

    if (p[0x94] != 0) {
        src = &data_ov004_02158b08;
    } else {
        src = &data_ov004_02158b1c;
    }
    *(uint32_t *)(p + 0x98) = *src;
    *(Pair *)(p + 0x80) = data_ov004_02158c7c;
}
