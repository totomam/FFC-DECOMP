#include "ffc/types.h"

typedef void (*fn_t)(uint8_t *, uint32_t, uint8_t, uint32_t, uint8_t, uint32_t, uint32_t, uint32_t);

void func_ov003_0214e54c(uint8_t *p) {
    int32_t *q = (int32_t *)(p + 0x88);
    int32_t flag = q[1];
    uint8_t *base = *(uint8_t **)(p + 0x84);
    int32_t off = flag >> 1;
    uint8_t *self2 = base + off;
    fn_t fn;

    if (flag & 1) {
        fn = *(fn_t *)(*(uint8_t **)(base + off) + q[0]);
    } else {
        fn = (fn_t)q[0];
    }
    fn(self2,
       *(uint32_t *)(p + 0x90),
       *(uint8_t *)(p + 0x94),
       *(uint32_t *)(p + 0x98),
       *(uint8_t *)(p + 0x9c),
       *(uint32_t *)(p + 0xa0),
       *(uint32_t *)(p + 0xa4),
       *(uint32_t *)(p + 0xa8));
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
