#include "ffc/types.h"
extern uint8_t data_ov003_021d4e68;
extern void func_ov003_02157b6c(int a, int b, int c, int d, int e, int f, int g);
void func_ov003_02158130(int a, int b, int c) {
    data_ov003_021d4e68 = 1;
    func_ov003_02157b6c(a, b, c, 0x1000, 0, 0, 0);
    data_ov003_021d4e68 = 0;
}
