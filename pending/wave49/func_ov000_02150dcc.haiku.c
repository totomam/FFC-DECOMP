#include "ffc/types.h"

extern void *func_ov000_0214fa54(void);
extern void func_ov000_0214fbe4(int code);
extern void func_ov000_02150958(void);
extern int func_0208dfb0(void *fn, void *buf, int size);
extern void func_ov000_0214fb84(int code, void *buf, int a, int b);
extern int func_ov000_02150fd4(void);

void func_ov000_02150dcc(uint16_t *msg)
{
    uint8_t *ctx = (uint8_t *)func_ov000_0214fa54();
    uint16_t cmd = msg[1];
    int sub;
    int r;

    if (cmd > 12) {
        goto err142;
    }

    switch (cmd) {
    case 0:
        sub = msg[4];
        if (sub > 9) {
            if (sub == 0x1a) {
                return;
            }
            goto err11a;
        }
        if (sub < 0) {
            goto err11a;
        }
        switch (sub) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            goto err11a;
        case 6:
            return;
        case 7:
            if (ctx[0x12de] == 0xc) {
                func_ov000_0214fbe4(8);
                func_ov000_02150958();
                return;
            }
            if (msg[5] < 1 || msg[5] > 0x7d7) {
                func_ov000_02150958();
                return;
            }
            *(uint16_t *)(ctx + 0x22e8) = msg[5];
            r = func_0208dfb0(func_ov000_02150fd4, ctx + 0x600, 0x620);
            if (r == 2) {
                return;
            }
            if (r == 8) {
                func_ov000_0214fbe4(0xc);
                func_ov000_0214fb84(1, ctx + 0x12e0, 0, 0x430);
                return;
            }
            func_ov000_0214fbe4(0xb);
            func_ov000_0214fb84(7, ctx + 0x12e0, 0, 0x439);
            return;
        case 8:
        case 9:
            switch (ctx[0x12de] - 8) {
            case 0:
                func_ov000_0214fbe4(0xc);
                return;
            case 1:
                *(uint16_t *)(ctx + 0x12da) = 6;
                func_ov000_02150958();
                return;
            case 2:
                *(uint16_t *)(ctx + 0x22e8) = 0;
                func_ov000_0214fbe4(0xc);
                return;
            case 3:
                return;
            case 4:
                func_ov000_02150958();
                return;
            default:
                return;
            }
        }
        return;
    case 1:
        *(uint16_t *)(ctx + 0x22ea) = msg[7];
        func_ov000_0214fbe4(8);
        func_ov000_02150958();
        return;
    case 6:
    case 11:
    case 12:
        func_ov000_0214fbe4(8);
        func_ov000_02150958();
        return;
    default:
        goto err142;
    }

err11a:
    func_ov000_0214fbe4(0xb);
    func_ov000_0214fb84(7, ctx + 0x12e0, sub, 0x447);
    return;

err142:
    func_ov000_0214fbe4(0xb);
    func_ov000_0214fb84(7, ctx + 0x12e0, 0, 0x45e);
    return;
}
