#include "ffc/types.h"

extern int32_t data_ov000_02170970;
extern int64_t data_ov000_02170974;
extern int64_t data_ov000_0217097c;
extern int32_t func_020894a0(void);
extern int64_t func_020898d0(int64_t t);
extern void func_020899e8(int64_t t);

int32_t func_ov000_021649dc(int64_t t)
{
    int64_t v, d;

    if (data_ov000_02170970 == 0) {
        return 0;
    }
    if (func_020894a0() != 0) {
        return 0;
    }
    v = func_020898d0(t);
    if (((uint32_t)v & (uint32_t)(v>>32)) == 0xffffffffu) {
        return 0;
    }
    if (v < data_ov000_02170974) {
        v += 0xbc191380LL;
    }
    d = v - data_ov000_0217097c;
    if (d >= 0 && d <= 0xbc19137fLL) {
        func_020899e8(t);
        return 1;
    }
    return 0;
}
