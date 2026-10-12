#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef void (*fn_t)(void *, Pair, uint32_t, uint16_t, uint32_t);

void func_ov003_0214e60c(uint8_t *self) {
    uint8_t *base = *(uint8_t **)(self + 0x84);
    uint32_t *q = (uint32_t *)(self + 0x88);
    int32_t idx = (int32_t)q[1] >> 1;
    fn_t fn;
    if (q[1] & 1) {
        fn = *(fn_t *)(*(uint8_t **)(base + idx) + q[0]);
    } else {
        fn = *(fn_t *)q;
    }
    fn(base + idx, *(Pair *)(self + 0x90), *(uint32_t *)(self + 0x98),
       *(uint16_t *)(self + 0x9c), *(uint32_t *)(self + 0xa0));
    *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2;
}
