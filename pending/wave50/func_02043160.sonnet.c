#include "ffc/types.h"

extern uint32_t *func_0205681c(uint32_t size);
extern void func_02056c9c(uint32_t *p, uint32_t v);
extern uint8_t data_020af5c4[];

typedef struct { uint32_t x, y; } P;
uint32_t *func_02043160(uint32_t a, P p, uint32_t d, uint32_t e, uint32_t f, uint32_t g)
{
    uint32_t *obj = func_0205681c(0xa0);
    if (obj == 0) {
        return obj;
    }
    func_02056c9c(obj, 0);
    obj[0] = (uint32_t)data_020af5c4;
    obj[0x84 / 4] = a;
    obj[0x88 / 4] = p.x;
    obj[0x8c / 4] = p.y;
    obj[0x90 / 4] = d;
    obj[0x94 / 4] = e;
    obj[0x98 / 4] = f;
    obj[0x9c / 4] = g;
    return obj;
}
