#include "ffc/types.h"

extern void func_ov001_02184134(void *p, int v);
extern uint8_t data_ov000_0217022c[];

void func_ov000_02162518(int a, void *p)
{
    int i;
    switch (a) {
    case 0:
        func_ov001_02184134(p, 8);
        func_ov001_02184134(p, 0xa);
        func_ov001_02184134(p, 0x32);
        func_ov001_02184134(p, 0x33);
        func_ov001_02184134(p, 0x34);
        func_ov001_02184134(p, 0x35);
        func_ov001_02184134(p, 0x36);
        func_ov001_02184134(p, 0x37);
        func_ov001_02184134(p, 0x38);
        for (i = 0; i < 0x9a; i++) {
            uint8_t v = data_ov000_0217022c[i * 12];
            if (v != 0) {
                func_ov001_02184134(p, v);
            }
        }
        break;
    case 1:
        break;
    case 2:
        break;
    }
}
