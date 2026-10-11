#include "ffc/types.h"

extern void func_02084a0c(uint32_t a, uint32_t b, uint32_t c);

typedef struct {
    uint32_t f0;
    uint32_t f1;
    uint32_t f2;
    uint8_t type;
} S;

void func_02078ae8(S *p, uint32_t b) {
    uint32_t x = b;
    uint32_t m;
    if (p->type == 4) {
        x |= x << 4;
    }
    x |= x << 8;
    x |= x << 16;
    m = p->f1 * p->f2;
    func_02084a0c(x, p->f0, m * (uint32_t)(((int32_t)(p->type << 6)) / 8));
}
