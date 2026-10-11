#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov003_0217b92c;
extern Pair data_ov003_0217b934;

void func_ov003_02173ab8(uint8_t *p)
{
    uint32_t idx = *(uint32_t *)(p + 0x9c);
    if (idx == (uint32_t)-2) {
        *(Pair *)(p + 0x80) = data_ov003_0217b92c;
        return;
    }
    uint32_t *tbl = *(uint32_t **)(p + 0xa8);
    *(uint32_t *)(p + 0xa4) = tbl[idx];
    *(Pair *)(p + 0x80) = data_ov003_0217b934;
}
