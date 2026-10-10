#include "ffc/types.h"

typedef struct { uint32_t x, y; } Pair;
extern void func_ov013_021bd11c(void *p, int32_t x);
extern Pair data_ov013_021c3ef8;

void func_ov013_021bce4c(uint8_t *a) {
    func_ov013_021bd11c(*(void **)(a + 0x88), 3);
    *(Pair *)(a + 0x80) = data_ov013_021c3ef8;
}
