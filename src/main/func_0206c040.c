#include "ffc/types.h"

extern uint32_t *func_02056830(uint32_t size);

typedef struct {
    uint32_t *state;
    uint16_t idx;
} Mt;

void func_0206c040(Mt *m, uint32_t seed)
{
    uint32_t i;
    uint32_t v;

    m->state = func_02056830(2496);
    m->state[0] = seed;
    m->idx = 1;
    while (m->idx < 2496 / 4) {
        i = m->idx;
        v = m->state[i - 1];
        v = (v ^ (v >> 30)) * 1812433253u;
        m->state[i] = i + v;
        m->idx++;
    }
    m->idx = 0;
}
