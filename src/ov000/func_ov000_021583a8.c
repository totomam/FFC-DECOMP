#include "ffc/types.h"

extern uint8_t *data_ov000_02170004;
extern int func_02086fe4(uint8_t *p);
extern int func_ov000_0215842c(void);
extern void func_ov000_021569f0(uint8_t *p);
extern void func_ov000_02159014(int a, int b);

int func_ov000_021583a8(void)
{
    uint32_t v;

    if (data_ov000_02170004 == 0) {
        return 0;
    }
    if (*(uint32_t *)(data_ov000_02170004 + 0x1be8) == 0) {
        return 1;
    }
    if (func_02086fe4(data_ov000_02170004 + 0x1b7c) == 1) {
        v = *(uint32_t *)(data_ov000_02170004 + 0x1028);
        if (v == 7) {
            goto L5;
        }
        if (v != 8) {
            goto Ldef;
        }
        if (func_ov000_0215842c() != 0) {
            goto L3;
        }
        func_ov000_021569f0(data_ov000_02170004 + 8);
        return 4;
    L3:
        func_ov000_021569f0(data_ov000_02170004 + 8);
        return 3;
    L5:
        func_ov000_021569f0(data_ov000_02170004 + 8);
        return 5;
    Ldef:
        func_ov000_021569f0(data_ov000_02170004 + 8);
        func_ov000_02159014(0x10, (int)0xffffa1db);
        return 4;
    }
    return 2;
}
