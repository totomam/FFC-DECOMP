#include "ffc/types.h"

typedef struct { uint32_t x, y; } Pair;
extern void func_ov013_021bd11c(void *p, int32_t x);
extern Pair data_ov013_021c4b34;

void func_ov013_021c13b0(uint8_t *a) {
    func_ov013_021bd11c(*(void **)(a + 0xc0), 3);
    *(Pair *)(a + 0xb8) = data_ov013_021c4b34;
}
