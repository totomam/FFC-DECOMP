#include "ffc/types.h"

extern void func_ov006_021a5d44(void);
extern void func_ov006_021b0600(int32_t);
extern int8_t *data_ov006_021bc700;
extern int8_t data_ov006_021b8460[];

void func_ov006_021a5da0(int32_t r0) {
    int8_t r2 = data_ov006_021bc700[0x63];
    int8_t *q = data_ov006_021b8460 + (r2 << 2);
    int8_t v;
    data_ov006_021bc700[0x63] = q[r0];
    if (data_ov006_021bc700[0x63] == 13 && (r0 == 1 || r0 == 3)) {
        data_ov006_021bc700[0x64] = r2;
        goto done;
    }
    if (data_ov006_021bc700[0x63] == -1) {
        int8_t t = data_ov006_021bc700[0x64];
        if (t == 1 || t == 10) {
            v = 10;
        } else {
            v = 11;
        }
    } else if (data_ov006_021bc700[0x63] == -2) {
        int8_t t = data_ov006_021bc700[0x64];
        if (t == 1 || t == 10) {
            v = 1;
        } else {
            v = 2;
        }
    } else {
        goto done;
    }
    data_ov006_021bc700[0x63] = v;
done:
    func_ov006_021a5d44();
    func_ov006_021b0600(8);
}
