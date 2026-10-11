#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern void func_020159c8(uint32_t a, uint32_t b);

void func_ov001_0218ed54(uint32_t a, uint32_t b)
{
    uint32_t v = 0x10f;
    switch (b) {
    case 0xa:
        v += 0xc;
        break;
    case 0xb:
        v += 0xd;
        break;
    case 0xc:
        v += 0xe;
        break;
    }
    func_020159c8(data_020b8e44, v);
}
