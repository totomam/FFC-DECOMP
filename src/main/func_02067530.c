#include "ffc/types.h"

struct L3 { uint32_t f0; uint32_t f4; };
struct L2 { uint32_t f0; struct L3 *f4; };
struct L1 { uint32_t pad[19]; struct L2 *f4c; };

uint32_t func_02067530(struct L1 *p) {
    return p->f4c->f4->f4 << 20 >> 30;
}
