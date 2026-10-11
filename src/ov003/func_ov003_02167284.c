#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t);
extern void func_ov003_0214bbb8(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

typedef struct {
    uint32_t a0, a4, a8, a0c, a10;
    uint32_t p14;
    uint32_t p18;
    uint8_t b1c;
    uint8_t pad1d[3];
    uint32_t p20;
    uint8_t b24;
    uint8_t pad25[3];
    uint32_t p28;
    uint32_t p2c;
    uint32_t p30;
} FfcObj;

void func_ov003_02167284(FfcObj *p)
{
    uint32_t r;
    r = func_020424e0(p->p14);
    func_ov003_0214bbb8(r, p->p18, p->b1c, p->p20, p->b24, p->p28, p->p2c, p->p30);
}
