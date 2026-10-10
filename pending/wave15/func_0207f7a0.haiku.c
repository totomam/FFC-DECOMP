#include "ffc/types.h"

extern void func_0207f4bc(void *p, uint32_t a, uint32_t b);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
} S;

void func_0207f7a0(uint32_t unused, S *p) {
    func_0207f4bc(p, 8, 1);
    p->f4 = 0;
    p->fc &= ~0x30;
}
