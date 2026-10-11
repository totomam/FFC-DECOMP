#include "ffc/types.h"

extern void func_ov002_021ab160(uint32_t a, uint8_t b, uint32_t c);

typedef struct {
    uint32_t w00;
    uint32_t w04;
    uint32_t w08;
    uint32_t w0c;
    uint32_t w10;
    uint32_t w14;
    uint8_t b18;
    uint8_t pad19[3];
    uint32_t w1c;
} Obj;

void func_ov002_021ad1fc(Obj *p)
{
    func_ov002_021ab160(p->w14, p->b18, p->w1c);
    p->w0c = (p->w0c & ~0xffu) | 2u;
}
