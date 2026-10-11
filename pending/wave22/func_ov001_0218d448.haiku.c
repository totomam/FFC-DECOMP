#include "ffc/types.h"

extern uint32_t func_02037748(void);
extern void func_02037728(void);
extern void func_020375b0(void);
extern uint32_t data_ov001_021948fc[2];

void func_ov001_0218d448(uint8_t *p)
{
    uint32_t a, b;
    if (func_02037748() != 0) {
        func_02037728();
    }
    func_020375b0();
    a = data_ov001_021948fc[0];
    b = data_ov001_021948fc[1];
    *(uint32_t *)(p + 0xb0) = a;
    *(uint32_t *)(p + 0xb4) = b;
}
