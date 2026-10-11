#include "ffc/types.h"

extern void func_ov001_02171ee0(void);
extern void func_ov001_02171ed8(void);
extern void func_ov001_02171ee4(void);
extern uint32_t data_ov001_02194c1c;
extern uint32_t data_ov001_0218f344;
extern uint32_t data_ov001_0218f340;

void func_ov001_021732b8(void) {
    func_ov001_02171ee0();
    data_ov001_02194c1c++;
    if (data_ov001_02194c1c == 1) {
        func_ov001_02171ed8();
        data_ov001_0218f344 = 0x7d;
        data_ov001_0218f340 = 0xfa;
    } else {
        func_ov001_02171ee4();
    }
}
