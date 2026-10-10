#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov007_021c5b60;
extern void func_ov007_021b08ec(void *p);

void func_ov007_021b07a4(void *r0) {
    uint8_t *p = (uint8_t *)r0;
    if (*(uint32_t *)(p + 0xc4) == 1) {
        **(uint32_t **)(p + 0xbc) = 1;
        func_ov007_021b08ec(r0);
        return;
    }
    *(Pair *)(p + 0xb0) = data_ov007_021c5b60;
}
