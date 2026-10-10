#include "ffc/types.h"

extern void func_ov002_021aa8b8(uint32_t a, uint32_t b, uint8_t c);

typedef struct {
    uint32_t w00;
    uint32_t w04;
    uint32_t w08;
    uint32_t w0c;
    uint32_t w10;
    uint32_t w14;
    uint32_t w18;
    uint8_t b1c;
} Obj;

void func_ov002_021ad218(Obj *p)
{
    func_ov002_021aa8b8(p->w14, p->w18, p->b1c);
    p->w0c = (p->w0c & ~0xffu) | 2u;
}
