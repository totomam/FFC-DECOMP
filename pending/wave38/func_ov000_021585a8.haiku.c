#include "ffc/types.h"

extern void func_02084ca4(void *a, void *b, uint32_t n);
extern uint8_t data_ov000_0217000c[];
extern uint8_t data_ov000_02170011[];
extern uint8_t data_ov000_02170016[];
extern uint8_t data_ov000_02170018[];

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint32_t w12;
    uint16_t h16;
    uint16_t h18;
} S;

void func_ov000_021585a8(S *p)
{
    volatile uint32_t n = 6;
    uint32_t lo, hi;

    func_02084ca4(data_ov000_0217000c, p, 6);
    p->w0 &= n - 7;
    p->w4 &= 0x7ff;
    func_02084ca4(data_ov000_02170011, &p->w8, 6);
    lo = p->w8;
    hi = p->w12;
    p->w8 = ((lo >> 3) | (hi << 29)) & (n - 7);
    p->w12 = (hi >> 3) & 0x7ff;
    func_02084ca4(data_ov000_02170016, &p->h16, 2);
    p->h16 = (uint16_t)((int16_t)p->h16 >> 6);
    p->h16 &= 0x7ff >> 1;
    func_02084ca4(data_ov000_02170018, &p->h18, 2);
}
