#include "ffc/types.h"

typedef struct { uint32_t w[65]; } Blk;

extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_02092948(const void *a, const void *b);
extern void func_ov000_02168878(void *a, void *b);
extern void func_ov001_021869a4(void);
extern void func_ov001_021869f0(void);
extern void func_ov001_02186aa4(void);
extern void func_ov001_02186afc(void);
extern uint32_t data_ov001_0219575c[];

void func_ov001_02186b54(uint8_t *self, uint32_t val, Blk s)
{
    void (*fn)(void);
    switch (s.w[64]) {
    case 0: fn = func_ov001_021869a4; break;
    case 1: fn = func_ov001_021869f0; break;
    case 2: fn = func_ov001_02186aa4; break;
    case 3: fn = func_ov001_02186afc; break;
    default: fn = func_ov001_02186afc; break;
    }
    if (func_02092864(self + 0x59c) == 0) {
        *(Blk *)(self + 0x59c) = s;
    } else if (func_02092948(&s, self + 0x498) != 0) {
        *(Blk *)(self + 0x59c) = *(Blk *)(self + 0x498);
    }
    *(Blk *)(self + 0x498) = s;
    *(uint32_t *)(self + 0x6a0) = val;
    data_ov001_0219575c[1] = (uint32_t)self;
    func_ov000_02168878(*(void **)(self + 4), (void *)fn);
}
