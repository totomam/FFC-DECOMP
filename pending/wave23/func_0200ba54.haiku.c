#include "ffc/types.h"

typedef struct {
    uint32_t d;
    uint32_t e;
} Pair;

typedef uint32_t (*fn_t)(void *, uint32_t, uint32_t, Pair, uint32_t, uint32_t, uint32_t);

uint32_t func_0200ba54(uint8_t *p, uint32_t b, uint32_t c, Pair s, uint32_t f, uint32_t g, uint32_t h) {
    void *sub = *(void **)(p + 0x18);
    void **vt = *(void ***)sub;
    fn_t fn = (fn_t)vt[9];
    return fn(sub, b, c, s, f, g, h);
}
