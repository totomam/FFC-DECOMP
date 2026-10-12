#include "ffc/types.h"

extern void func_0207e890(void *object);
extern int func_0207f4bc(void *obj, uint32_t a, uint32_t b);

typedef struct {
    uint32_t p0, p4, p8, pc;
    uint32_t p10, p14, p18, p1c;
    uint32_t p20, p24, p28, p2c;
    uint32_t f30;
    uint16_t h34;
    uint16_t h36;
    uint32_t f38;
    uint32_t f3c;
    uint32_t f40;
    uint32_t *f44;
} Obj;

void func_0207f6bc(uint32_t a, uint16_t x, uint32_t b, uint32_t *out, uint32_t e) {
    uint32_t L[3];
    Obj o;

    func_0207e890(&o);
    o.h34 = x;
    o.h36 = 0;
    o.f38 = 0;
    o.f40 = e;
    o.f44 = L;
    o.p8 = a;
    o.f30 = a;
    o.f3c = b;
    if (func_0207f4bc(&o, 4, 1) != 0) {
        return;
    }
    if (e != 0) {
        *out = *(uint16_t *)&L[1];
    } else {
        *out = L[1];
    }
}
