#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
extern void *func_0205681c(uint32_t n);
extern void func_ov003_021494c0(void *o, uint32_t a, uint32_t b, uint16_t c, uint32_t d, uint16_t e, uint16_t f, uint32_t g);
extern uint8_t data_ov003_021797c4[];
void *func_ov003_02149588(uint32_t a, uint32_t b, P p, uint16_t c, uint32_t d, uint16_t e, uint16_t f, uint32_t g) {
    uint32_t *o = func_0205681c(0x30);
    if (o) {
        P q = p;
        func_ov003_021494c0(o, a, b, c, d, e, f, g);
        o[0] = (uint32_t)data_ov003_021797c4;
        o[10] = q.a;
        o[11] = q.b;
    }
    return o;
}
