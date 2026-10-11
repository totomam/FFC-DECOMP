#include "ffc/types.h"

extern void func_ov006_021b20f0(uint32_t x);
extern void func_02088f30(void);

typedef struct {
    uint16_t a;
    uint16_t kind;
} Obj;

void func_ov006_021b2984(Obj *p)
{
    if (p->kind == 8) {
        func_ov006_021b20f0(9);
        func_02088f30();
    }
}
