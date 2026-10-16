#include "ffc/types.h"
typedef struct H { uint16_t a; uint16_t b; int32_t size; uint32_t c; uint32_t d; } H;
typedef struct O { H *h; uint32_t end; } O;
H *func_02077ca8(O *o, uint32_t v) {
    H *h = o->h;
    h->a = v;
    h->b = 0;
    h->size = o->end - (uint32_t)(h + 1);
    h->c = 0;
    h->d = 0;
    return h;
}
