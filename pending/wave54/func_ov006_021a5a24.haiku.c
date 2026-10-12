#include "ffc/types.h"

extern uint32_t func_ov006_021b4cd4(uint32_t x);
extern void func_ov006_021a5da0(uint32_t x);
extern uint32_t func_ov006_021b4ca4(uint32_t x);
extern void func_ov006_021b0600(uint32_t x);
extern uint32_t func_ov006_021b4d04(uint32_t x);
extern uint8_t *data_ov006_021bc700;
extern uint8_t data_ov006_021b83da[];
extern uint8_t data_ov006_021b83b7[];
extern uint8_t data_ov006_021b83b4[];

void func_ov006_021a5a24(void)
{
    uint8_t *p;
    int s;
    int t;

    if (func_ov006_021b4cd4(0x20)) {
        func_ov006_021a5da0(0);
    }
    if (func_ov006_021b4cd4(0x40)) {
        func_ov006_021a5da0(1);
    }
    if (func_ov006_021b4cd4(0x10)) {
        func_ov006_021a5da0(2);
    }
    if (func_ov006_021b4cd4(0x80)) {
        func_ov006_021a5da0(3);
    }
    if (func_ov006_021b4ca4(1)) {
        p = data_ov006_021bc700;
        s = (int8_t)p[0x63];
        if (s < 10) {
            if (p[0x67]) {
                p[0x60] = data_ov006_021b83da[s];
                return;
            }
            func_ov006_021b0600(9);
            return;
        }
        t = s - 10;
        if (t < 2) {
            if (t == 0) {
                if (p[0x66] == 0) {
                    func_ov006_021b0600(9);
                    return;
                }
            } else if (p[0x68] == 0) {
                func_ov006_021b0600(9);
                return;
            }
            p[0x60] = data_ov006_021b83b7[s - 10];
            return;
        }
        p[0x60] = data_ov006_021b83b4[s - 12];
    }

    if (func_ov006_021b4cd4(2)) {
        p = data_ov006_021bc700;
        if (p[0x66] != 0) {
            p[0x60] = 0x10;
            return;
        }
        if (p[0x69] == 0) {
            func_ov006_021b0600(9);
            p = data_ov006_021bc700;
            p[0x69] = 1;
        }
        return;
    }
    if (func_ov006_021b4d04(2)) {
        data_ov006_021bc700[0x69] = 0;
    }
}
