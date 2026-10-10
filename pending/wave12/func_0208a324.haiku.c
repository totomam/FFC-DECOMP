#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t c;
    uint8_t d[3];
} Ent;

extern Ent data_02143480[];

int func_0208a324(int idx) {
    Ent *p = &data_02143480[idx];
    int v = p->c + 1;
    p->c = v;
    return v;
}
