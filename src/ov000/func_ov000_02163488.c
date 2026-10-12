#include "ffc/types.h"

typedef struct { uint32_t w[10]; } E;
typedef struct { uint8_t pad[0x50]; uint32_t n; E e[1]; } O;
extern O *func_ov000_02163350();

uint32_t func_ov000_02163488(E *p) {
    O *o;
    O *r4;
    o = func_ov000_02163350(p);
    if (o->n == 0x20) return 0;
    r4 = func_ov000_02163350((E *)o->n);
    o = func_ov000_02163350((E *)r4);
    *(E *)((uint8_t *)r4 + o->n * 0x28 + 0x54) = *p;
    o = func_ov000_02163350();
    o->n += 1;
    return 1;
}
