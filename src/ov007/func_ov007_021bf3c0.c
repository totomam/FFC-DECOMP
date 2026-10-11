#include "ffc/types.h"

extern void func_ov007_021bf91c(int code, void *msg);
extern void func_ov007_021bf414(void);
extern void func_ov007_021c0044(void);
extern void func_ov007_021c0100(uint32_t v);
extern void func_ov007_021bf9f4(void);
extern uint32_t data_ov007_021c9bac[];
extern uint8_t data_ov007_021c8704[];
extern uint8_t data_ov007_021c8718[];

uint32_t func_ov007_021bf3c0(void)
{
    uint32_t *p = data_ov007_021c9bac;
    uint32_t s = p[2];

    if (s == 0) {
        func_ov007_021bf91c(0x1a6, data_ov007_021c8704);
        return 0x13;
    }
    if (s == 2) {
        func_ov007_021bf91c(0x1ab, data_ov007_021c8718);
        return 0x14;
    }
    func_ov007_021bf414();
    p[2] = 0;
    func_ov007_021c0044();
    func_ov007_021c0100(p[1]);
    func_ov007_021bf9f4();
    return 0;
}
