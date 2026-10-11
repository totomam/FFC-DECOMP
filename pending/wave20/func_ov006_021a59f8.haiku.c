#include "ffc/types.h"

extern void func_ov006_021a5cb8(int32_t a, int32_t b);
extern int8_t *data_ov006_021bc700;

void func_ov006_021a59f8(int32_t a) {
    if (a != data_ov006_021bc700[0x62]) {
        func_ov006_021a5cb8(a, 1);
        func_ov006_021a5cb8(data_ov006_021bc700[0x62], 0);
        data_ov006_021bc700[0x62] = a;
    }
}
