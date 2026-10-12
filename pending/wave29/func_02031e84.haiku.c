#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} S;

extern uint32_t func_02031e60(uint32_t a, uint32_t b, uint32_t *idx, uint32_t d);
extern void func_02032098(S *out, uint32_t v, uint32_t c, uint32_t mode);
extern void func_02020540(uint32_t obj, S s, uint8_t e);

void func_02031e84(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t idx = 0;
    uint32_t v = func_02031e60(a, b, &idx, d);
    uint32_t k = idx;
    uint32_t mode = 2;
    S s;
    if (k >= 5) {
        mode = 3;
    }
    func_02032098(&s, v, c, mode);
    func_02020540(d, s, (uint8_t)k);
}
