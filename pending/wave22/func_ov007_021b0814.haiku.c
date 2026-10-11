#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_ov007_021b08ec(void);
extern Pair data_ov007_021c5b70;

void func_ov007_021b0814(uint8_t *p)
{
    if (*(uint32_t *)(p + 0xc4) == 1) {
        uint32_t *q = *(uint32_t **)(p + 0xbc);
        *q = 2;
        func_ov007_021b08ec();
    }
    *(Pair *)(p + 0xb0) = data_ov007_021c5b70;
}
