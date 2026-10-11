#include "ffc/types.h"

extern void *func_ov007_021bfd1c(void *a, uint32_t *out);
extern void func_ov007_021bf91c(uint32_t size, void *data, void *p);
extern uint32_t func_ov007_021bfd94(void *a, void *p);
extern void func_ov000_02159014(uint32_t a, uint32_t b);
extern uint8_t data_ov007_021c89a4[];

void *func_ov007_021bfddc(void *param0, void *param1)
{
    uint32_t local;
    void *p;

    p = func_ov007_021bfd1c(param1, &local);
    if (p != 0) {
        func_ov007_021bf91c(0x6ec, data_ov007_021c89a4, p);
        func_ov000_02159014(local, func_ov007_021bfd94(param0, p));
    }
    return p;
}
