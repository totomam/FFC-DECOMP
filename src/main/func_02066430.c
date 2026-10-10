#include "ffc/types.h"

struct L3 { uint32_t pad[4]; uint32_t f10 : 2; };
struct L2 { uint32_t pad[6]; struct L3 *f18; };
struct L1 { uint32_t pad[8]; struct L2 *f20; };

uint32_t func_02066430(struct L1 *p) {
    return p->f20->f18->f10;
}
