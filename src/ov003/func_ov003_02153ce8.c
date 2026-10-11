#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x34];
    uint32_t f;
} Inner;

extern int func_02024d88(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);

int func_ov003_02153ce8(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f) {
    Inner *q = *(Inner **)(p + 0x1e4);
    if (q != 0) {
        return func_02024d88(q->f, a, b, c, d, e, f);
    }
    return 1;
}
