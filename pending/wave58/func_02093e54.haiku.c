#include "ffc/types.h"

extern uint8_t data_020b2f3c[];
extern uint8_t data_020b2f6c[];
extern uint8_t data_020b2f94[];
extern uint8_t data_020b2fac[];
extern uint8_t data_020b2fbc[];
extern uint8_t data_020b2fc4[];
extern uint8_t data_020b2fcc[];
extern uint8_t data_020b2fd4[];
extern uint8_t data_020b2fdc[];
extern uint8_t data_020b2fe0[];
extern uint8_t data_020b2fe4[];
extern uint8_t data_020b2fe8[];
extern uint8_t data_020b2fec[];
extern uint8_t data_020b2ff0[];
extern uint8_t data_020b2ff4[];
extern uint8_t data_020b2ff8[];
extern uint8_t data_020b2ffc[];
extern uint8_t data_020b3000[];
extern uint8_t data_020b3004[];
extern uint8_t data_020b3008[];
extern uint8_t data_020b300c[];

extern void func_02093e00(void *p, void *data, int v);
extern void func_02093cfc(void *p, void *a, void *b);

void func_02093e54(void *p, int idx) {
    uint16_t a[0x13];
    uint8_t pad[0x26];
    int k;

    if (idx > -0x35) {
        k = idx + 0x20;
        if ((uint32_t)k <= 0x28) {
            switch (k) {
            case 0: func_02093e00(p, data_020b2f94, -10); return;
            case 16: func_02093e00(p, data_020b2fac, -5); return;
            case 24: func_02093e00(p, data_020b2fbc, -3); return;
            case 25: func_02093e00(p, data_020b2fc4, -3); return;
            case 26: func_02093e00(p, data_020b2fcc, -2); return;
            case 27: func_02093e00(p, data_020b2fd4, -2); return;
            case 28: func_02093e00(p, data_020b2fdc, -2); return;
            case 29: func_02093e00(p, data_020b2fe0, -1); return;
            case 30: func_02093e00(p, data_020b2fe4, -1); return;
            case 31: func_02093e00(p, data_020b2fe8, -1); return;
            case 32: func_02093e00(p, data_020b2fec, 0); return;
            case 33: func_02093e00(p, data_020b2ff0, 0); return;
            case 34: func_02093e00(p, data_020b2ff4, 0); return;
            case 35: func_02093e00(p, data_020b2ff8, 0); return;
            case 36: func_02093e00(p, data_020b2ffc, 1); return;
            case 37: func_02093e00(p, data_020b3000, 1); return;
            case 38: func_02093e00(p, data_020b3004, 1); return;
            case 39: func_02093e00(p, data_020b3008, 2); return;
            case 40: func_02093e00(p, data_020b300c, 2); return;
            default: break;
            }
        }
    } else {
        if (idx == -0x35) {
            func_02093e00(p, data_020b2f6c, -0x10);
            return;
        }
        if (idx == -0x40) {
            func_02093e00(p, data_020b2f3c, -0x14);
            return;
        }
    }

    {
        uint8_t *q = pad;
        func_02093e54(q, idx / 2);
        func_02093cfc(p, q, q);
        if (idx & 1) {
            uint16_t *s = (uint16_t *)p;
            uint16_t *d = a;
            int n = 0x13;
            do {
                *d++ = *s++;
            } while (--n);
            if (idx > 0) {
                func_02093e00(q, data_020b2ff0, 0);
            } else {
                func_02093e00(q, data_020b2fe8, -1);
            }
            func_02093cfc(p, a, q);
        }
    }
}
