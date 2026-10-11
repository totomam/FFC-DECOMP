#include "ffc/types.h"

extern void func_ov001_02171ee0(void);
extern void func_ov001_021727d8(void);
extern void func_ov000_021653f4(void);
extern void func_ov001_02171ee4(void);
extern void func_ov001_02171edc(void);
extern uint32_t data_ov001_02194c1c;
extern uint32_t data_ov001_02194be4;

void func_ov001_021732f0(void)
{
    func_ov001_02171ee0();
    if (--data_ov001_02194c1c == 0) {
        func_ov001_021727d8();
        if (data_ov001_02194be4 != 0) {
            func_ov000_021653f4();
            data_ov001_02194be4 = 0;
        }
        func_ov001_02171ee4();
        func_ov001_02171edc();
    } else {
        func_ov001_02171ee4();
    }
}
