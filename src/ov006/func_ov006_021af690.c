#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7dc;
extern void func_ov006_021af858(int x);
extern void func_ov006_021af874(void);
extern void func_ov006_021af778(void);
extern uint8_t func_ov006_021af8b8(void);
extern int func_ov006_021af914(int x);
extern void func_ov006_021b0600(int x);
extern void func_ov006_021b0618(int x);
extern void func_ov006_021b4ef0(void *p);

void func_ov006_021af690(void)
{
    uint32_t zero = 0;
    uint32_t ret;

    data_ov006_021bc7dc[0x1d] = zero;
    switch (data_ov006_021bc7dc[0x1c]) {
    case 0:
        if (data_ov006_021bc7dc[0x1e] != 0) {
            return;
        }
        ret = func_ov006_021af8b8();
        switch (ret) {
        case 1:
            if (data_ov006_021bc7dc[0x1b] == 0) {
                return;
            }
            func_ov006_021b0600(0x16);
            func_ov006_021b0618(zero);
            data_ov006_021bc7dc[0x1d] = 1;
            func_ov006_021b4ef0(data_ov006_021bc7dc + 0x14);
            data_ov006_021bc7dc[0x18] = data_ov006_021bc7dc[0x1a];
            data_ov006_021bc7dc[0x1c] = 1;
            return;
        case 2:
            func_ov006_021af858(2);
            return;
        case 3:
            func_ov006_021af858(3);
            return;
        case 4:
            func_ov006_021af874();
            return;
        }
        break;
    case 1:
        func_ov006_021af778();
        return;
    case 2: {
        int k = 2;
        if (func_ov006_021af914(k) != k) {
            data_ov006_021bc7dc[0x1d] = 5;
            data_ov006_021bc7dc[0x1c] = zero;
        } else {
            if (func_ov006_021af8b8() == k) {
                func_ov006_021af858(k);
            }
        }
        return;
    }
    case 3: {
        int k = 3;
        if (func_ov006_021af914(k) != k) {
            data_ov006_021bc7dc[0x1d] = 7;
            data_ov006_021bc7dc[0x1c] = zero;
        } else {
            if (func_ov006_021af8b8() == k) {
                func_ov006_021af858(k);
            }
        }
        return;
    }
    }
}
