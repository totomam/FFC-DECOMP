#include "ffc/types.h"

extern void func_02079838(int32_t idx, int32_t val);
extern void func_02006c34(int32_t val);
extern int32_t data_020a7ea4;

void func_020081d8(int32_t r0) {
    int32_t v;
    if (r0 < 0) {
        v = 0;
    } else if (r0 > 0x7f) {
        v = 0x7f;
    } else {
        v = r0;
    }
    data_020a7ea4 = v;
    func_02079838(0, data_020a7ea4);
    func_02079838(2, data_020a7ea4);
    func_02079838(3, data_020a7ea4);
    func_02006c34(data_020a7ea4);
}
