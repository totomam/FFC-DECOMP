#include "ffc/types.h"
typedef struct { uint8_t pad0[8]; int32_t init; uint8_t pad1[0xC]; uint32_t seed; uint32_t mul; uint32_t add; } G;
typedef struct { int32_t a, b, c; } T;
extern G data_ov006_021ba1dc;
extern void func_ov006_0219ef6c(void *p, int v, int n);
extern int func_0208942c(T *p);
uint32_t func_ov006_0219f0a4(void) {
    if (data_ov006_021ba1dc.init == 0) {
        T buf;
        int32_t s = 0;
        func_ov006_0219ef6c(&buf, s, 12);
        if (func_0208942c(&buf) == 0) {
            s = s + (buf.a << 10) + ((buf.b << 3) + buf.c);
        }
        data_ov006_021ba1dc.seed = s;
        data_ov006_021ba1dc.mul = 0x5d588b65;
        data_ov006_021ba1dc.add = 0x269ec3;
        data_ov006_021ba1dc.init = 1;
    }
    data_ov006_021ba1dc.seed = data_ov006_021ba1dc.mul * data_ov006_021ba1dc.seed + data_ov006_021ba1dc.add;
    return (uint16_t)(((data_ov006_021ba1dc.seed >> 16) * 0x7fff) >> 16);
}
