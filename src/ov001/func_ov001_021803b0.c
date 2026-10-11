#include "ffc/types.h"

extern int32_t func_ov001_02181fcc(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_ov000_0216591c(void);

typedef struct Obj {
    uint32_t f0;
    uint16_t f4;
    uint16_t pad6;
    uint32_t f8;
    uint8_t pad[0x88 - 12];
    uint32_t f88;
} Obj;

uint32_t func_ov001_021803b0(Obj *p, uint32_t x, uint32_t y)
{
    if (func_ov001_02181fcc(p->f8, p->f0, p->f4, x, y) == 0) {
        return 0;
    }
    p->f88 = func_ov000_0216591c();
    return 1;
}
