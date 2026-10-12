#include "ffc/types.h"

extern uint32_t func_ov006_0219cedc(uint32_t);
extern void func_ov006_0219daa0(uint32_t);
extern void func_ov006_0219ef5c(void *, uint32_t, uint32_t);
extern void func_ov006_0219ec2c(void *, void *, uint32_t, uint32_t);
extern void func_ov006_0219ec90(void *, uint32_t, uint32_t, uint32_t);
extern uint32_t func_ov006_0219ecfc(uint32_t, uint32_t);
extern void func_ov006_0219ceec(uint32_t);
extern uint8_t data_ov006_021baf44[];
extern uint8_t data_ov006_021baf46[];

int func_ov006_0219eba4(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g)
{
    struct { uint32_t l[2]; uint32_t h; uint32_t p; } S;
#define h S.h
#define local S.l

    h = func_ov006_0219cedc(c);
    if (h == 0) {
        func_ov006_0219daa0(2);
        return ~(int)h;
    }
    func_ov006_0219ef5c(data_ov006_021baf44, e, 2);
    func_ov006_0219ef5c(data_ov006_021baf46, f, g);
    func_ov006_0219ec2c(local, data_ov006_021baf44, g + 2, c);
    func_ov006_0219ec90(local, b, a, c);
    if (func_ov006_0219ecfc(b, c) != d) {
        func_ov006_0219daa0(0x12);
        func_ov006_0219ceec(h);
        return -1;
    }
    func_ov006_0219ceec(h);
    return 0;
}
