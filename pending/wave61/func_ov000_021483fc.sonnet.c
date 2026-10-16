/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint64_t a; uint64_t b; } K;
typedef struct { uint8_t pad[0x30]; uint32_t r; uint32_t pad2; uint32_t v; uint8_t pad3[0x3c]; uint64_t t; } S;
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern uint8_t *func_ov000_021482f8(uint8_t *buf, int n);
extern uint8_t *func_ov000_021483e0(int a, int b, uint8_t *c, int d);
extern void func_ov000_02147e28(uint8_t *buf, int n);
extern K data_ov000_0216bce0;
extern S data_ov000_0216bc60;
extern uint8_t data_ov000_0216c182[];
uint32_t func_ov000_021483fc(void) {
    uint8_t *buf = data_ov000_0216c182;
    uint64_t t = func_0209a71c(data_ov000_0216bce0.a, data_ov000_0216bc60.t) + data_ov000_0216bce0.b;
    uint8_t *p;
    data_ov000_0216bc60.t = t;
    data_ov000_0216bc60.r = (uint32_t)(t >> 32);
    p = func_ov000_021482f8(buf, 1);
    if (data_ov000_0216bc60.v != 0) {
        p[0] = 0x32;
        p[1] = 4;
        p[2] = (uint8_t)((uint16_t)(data_ov000_0216bc60.v >> 16) >> 8);
        p[3] = (uint8_t)(data_ov000_0216bc60.v >> 16);
        p[4] = (uint8_t)((uint16_t)data_ov000_0216bc60.v >> 8);
        p[5] = (uint8_t)data_ov000_0216bc60.v;
        p += 6;
    }
    *p++ = 0xff;
    p = func_ov000_021483e0(0, 0xff + 0x2d, p, p - buf);
    func_ov000_02147e28(buf, (uint8_t*)p - buf);
    return data_ov000_0216bc60.r;
}
