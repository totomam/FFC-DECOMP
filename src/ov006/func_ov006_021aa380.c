#include "ffc/types.h"

extern void func_ov006_021b4624(void *p, int v);
extern void func_ov006_021b45b0(void *p, int a, int b, int c, int d, int e, int f, uint16_t *s);
extern void func_ov006_021b4690(void *p);
extern void *data_ov006_021bc780;
extern uint8_t data_ov006_021b8602[];

void func_ov006_021aa380(void) {
    uint16_t s[6];
    uint16_t *z = &s[2];
    int i = 0;
    int j;

    z[0] = i;
    z[1] = i;
    z[2] = i;
    z[3] = i;
    s[3] = 0x20;
    s[4] = 0xe;
    s[5] = 0x10;
    func_ov006_021b4624(*(void **)data_ov006_021bc780, 0);
    s[1] = i;
    j = 0;
    for (; i < 0x20; i++) {
        if (i == 0x10) {
            s[3] = 0x31;
            j = 0;
        }
        {
            uint8_t *g = (uint8_t *)data_ov006_021bc780;
            uint8_t b = g[i + 8];
            if (b == 0x20) {
                s[0] = 0xe01d;
            } else {
                s[0] = b;
            }
        }
        s[2] = data_ov006_021b8602[j];
        func_ov006_021b45b0(*(void **)data_ov006_021bc780, s[2], s[3], s[4], s[5], 2, 0x480, s);
        j++;
    }
    func_ov006_021b4690(*(void **)data_ov006_021bc780);
}
