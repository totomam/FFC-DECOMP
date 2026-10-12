#include "ffc/types.h"

extern int func_ov006_021b4cd4(int flag);
extern void func_ov006_021a4e34(int n);
extern int func_ov006_021b4ca4(int flag);
extern void func_ov006_021b0600(int n);
extern void func_ov006_021a4cac(int n);
extern void func_ov006_021a47c8(void);
extern void func_ov006_021a47f0(void);
extern int func_ov006_021b4d04(int flag);
extern uint8_t *data_ov006_021bc6fc;
extern uint8_t *data_ov006_021b8ed4[];
extern uint8_t data_ov006_021b8102[];
extern uint8_t data_ov006_021b80ee[];

void func_ov006_021a4984(void)
{
    uint8_t *base;
    int off;
    int idx;

    if (func_ov006_021b4cd4(0x20)) {
        func_ov006_021a4e34(0);
    }
    if (func_ov006_021b4cd4(0x40)) {
        func_ov006_021a4e34(1);
    }
    if (func_ov006_021b4cd4(0x10)) {
        func_ov006_021a4e34(2);
    }
    if (func_ov006_021b4cd4(0x80)) {
        func_ov006_021a4e34(3);
    }

    if (func_ov006_021b4ca4(1)) {
        base = data_ov006_021bc6fc;
        off = 0x121;
        idx = (int8_t)base[off];
        if (idx < 0x2f) {
            if (base[off + 3] == 0) {
                func_ov006_021b0600(9);
                return;
            }
            base[off - 5] = data_ov006_021b8ed4[base[off - 4]][idx];
            if (data_ov006_021bc6fc[off - 4] == 1) {
                func_ov006_021a4cac(0);
            }
            return;
        }
        {
            int k = idx - 0x2f;
            if (k >= 4) {
                goto store33;
            }
            switch (k) {
            case 0:
                func_ov006_021a47c8();
                return;
            case 1:
                func_ov006_021a47f0();
                return;
            case 2:
                if (base[off + 3] == 0) {
                    func_ov006_021b0600(9);
                    return;
                }
                break;
            case 3:
                if (base[off + 2] == 0) {
                    func_ov006_021b0600(9);
                    return;
                }
                break;
            }
        }
        if (data_ov006_021bc6fc[0x11d] == 1) {
            func_ov006_021a4cac(0);
        }
        data_ov006_021bc6fc[0x11c] = data_ov006_021b8102[idx - 0x2f];
        return;
store33:
        base[off - 5] = data_ov006_021b80ee[idx - 0x33];
    }

tail:
    {
        uint8_t *q;
        int o;
        if (func_ov006_021b4cd4(2)) {
            o = 0x123;
            q = data_ov006_021bc6fc;
            if (q[o] == 0) {
                if (q[o + 2] != 0) {
                    return;
                }
                func_ov006_021b0600(9);
                q = data_ov006_021bc6fc;
                q[o + 2] = 1;
                return;
            } else {
                q[0x11c] = 0x80;
            }
        } else {
            o = 2;
            if (func_ov006_021b4d04(o)) {
                q = data_ov006_021bc6fc;
                q[0x125] = 0;
            }
        }
    }

    if (func_ov006_021b4ca4(0x400)) {
        func_ov006_021a47c8();
    }
    if (func_ov006_021b4ca4(0x800)) {
        func_ov006_021a47f0();
    }
}
