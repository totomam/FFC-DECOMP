#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
} Obj;

extern void func_ov006_021b2140(uint32_t v);
extern void func_ov006_021b20f0(int32_t v);
extern int32_t func_ov006_021b2234(uint32_t v);

void func_ov006_021b2210(Obj *p)
{
    uint32_t v = p->b;
    if (v != 0) {
        func_ov006_021b2140(v);
        func_ov006_021b20f0(9);
    } else {
        if (func_ov006_021b2234(v) == 0) {
            func_ov006_021b20f0(9);
        }
    }
}
