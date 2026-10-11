#include "ffc/types.h"

typedef struct {
    uint32_t c;
    uint32_t d;
    uint32_t e;
    uint32_t f;
    uint32_t g;
} S5;

extern void func_ov003_0215b2c8(uint32_t a, uint32_t d0, uint32_t d1, uint32_t b,
                                uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern uint32_t data_ov003_0217a1e0[2];

void func_ov003_0215b294(uint32_t a, uint32_t b, S5 s)
{
    S5 *p = &s;
    uint32_t *q = &p->c;
    func_ov003_0215b2c8(a, data_ov003_0217a1e0[0], data_ov003_0217a1e0[1], b,
                        q[0], q[1], p->e, p->f, p->g);
}
