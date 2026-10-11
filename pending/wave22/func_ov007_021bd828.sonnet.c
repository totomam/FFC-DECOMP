#include "ffc/types.h"
extern void *func_ov007_021bc310(void *p, uint32_t r1, uint32_t r2, uint32_t r3, uint32_t r4);
extern char data_ov007_021c800c[];
typedef struct { uint32_t vt; uint8_t pad[0xb1]; uint8_t f; uint8_t pad2[0x1d4-0xb6]; uint32_t a; uint8_t b; } S;
void *func_ov007_021bd828(S *p, uint32_t r1, uint32_t a, uint8_t b, uint32_t c)
{
    uint32_t one = 1;
    func_ov007_021bc310(p, r1, c, 0, 0);
    p->vt = (uint32_t)data_ov007_021c800c;
    p->a = a;
    p->b = b;
    *(volatile uint8_t*)&p->f = one;
    return p;
}
