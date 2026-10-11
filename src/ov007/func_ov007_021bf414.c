#include "ffc/types.h"

extern void func_ov007_021c0018(void *p);
extern void func_ov007_021c0310(uint32_t h, void *p);
extern void func_ov007_021c0288(uint32_t h, uint32_t n, void *p);
extern uint32_t data_ov007_021c9d3c[];
extern uint32_t data_ov007_021c9bac[];

void func_ov007_021bf414(void)
{
    uint8_t buf1[0x80];
    uint8_t buf0[0x80];

    func_ov007_021c0018(data_ov007_021c9d3c);
    func_ov007_021c0310(data_ov007_021c9bac[1], buf1);
    func_ov007_021c0018(buf1);
    func_ov007_021c0288(data_ov007_021c9bac[1], 1, buf0);
    func_ov007_021c0018(buf0);
}
