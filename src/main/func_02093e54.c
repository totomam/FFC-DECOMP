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

typedef struct { uint16_t v[0x13]; } S;

void func_02093e54(void *p, int idx) {
    uint16_t pad[0x13];
    S sa;
    int k;

    switch (idx) {
    case -0x40: func_02093e00(p, data_020b2f3c, -0x14); return;
    case -0x35: func_02093e00(p, data_020b2f6c, -0x10); return;
    case -32: func_02093e00(p, data_020b2f94, -10); return;
    case -16: func_02093e00(p, data_020b2fac, -5); return;
    case -8: func_02093e00(p, data_020b2fbc, -3); return;
    case -7: func_02093e00(p, data_020b2fc4, -3); return;
    case -6: func_02093e00(p, data_020b2fcc, -2); return;
    case -5: func_02093e00(p, data_020b2fd4, -2); return;
    case -4: func_02093e00(p, data_020b2fdc, -2); return;
    case -3: func_02093e00(p, data_020b2fe0, -1); return;
    case -2: func_02093e00(p, data_020b2fe4, -1); return;
    case -1: func_02093e00(p, data_020b2fe8, -1); return;
    case 0: func_02093e00(p, data_020b2fec, 0); return;
    case 1: func_02093e00(p, data_020b2ff0, 0); return;
    case 2: func_02093e00(p, data_020b2ff4, 0); return;
    case 3: func_02093e00(p, data_020b2ff8, 0); return;
    case 4: func_02093e00(p, data_020b2ffc, 1); return;
    case 5: func_02093e00(p, data_020b3000, 1); return;
    case 6: func_02093e00(p, data_020b3004, 1); return;
    case 7: func_02093e00(p, data_020b3008, 2); return;
    case 8: func_02093e00(p, data_020b300c, 2); return;
    default: break;
    }

    {
        func_02093e54(pad, (int)(((uint32_t)(idx & 0x80000000u) >> 31) + idx) >> 1);
        func_02093cfc(p, pad, pad);
        if (idx & 1) {
            sa = *(S *)p;
            if (idx > 0) {
                func_02093e00(pad, data_020b2ff0, 0);
            } else {
                func_02093e00(pad, data_020b2fe8, -1);
            }
            func_02093cfc(p, &sa, pad);
        }
    }
}
