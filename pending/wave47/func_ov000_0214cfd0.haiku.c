#include "ffc/types.h"

extern void *func_02084b2c(void *p, int c, uint32_t n);
extern void func_ov000_021455ec(uint32_t a);
extern void func_ov000_021502ac(void *f);
extern void func_ov000_0214557c(void *f);
extern void func_ov000_02145300(void *f);
extern void func_ov000_021453d0(void *p);
typedef struct { uint32_t *p; uint32_t q; } DataPtr;
extern DataPtr data_ov000_02169a34;
extern uint32_t data_ov000_0216e01c[];
extern uint32_t data_ov000_0216e00c[];
extern void func_ov000_0214d120(void);
extern uint16_t data_ov000_02169a58[];
extern uint32_t data_ov000_0216bcb0[];
extern void func_ov000_0214d110(void);
extern void func_ov000_0214d0cc(void);
extern void func_ov000_0214597c(void);
extern void func_ov000_0214e72c(void);
extern void func_ov000_0214eb7c(void);

void func_ov000_0214cfd0(void) {

    uint32_t *r4 = data_ov000_0216e01c;
    uint32_t *s = data_ov000_02169a34.p;
    uint32_t v;
    uint32_t r0;

    func_02084b2c(r4, 0, 0x30);
    data_ov000_0216e00c[5] = s[6];
    data_ov000_0216e00c[6] = s[7];
    data_ov000_0216e00c[8] = (uint32_t)func_ov000_0214d120;
    data_ov000_0216e00c[9] = 0;
    data_ov000_0216e00c[10] = 0;
    data_ov000_0216e00c[15] = data_ov000_0216e00c[0];

    if (s[9] == 0) {
        r4[8] = data_ov000_02169a34.q;
    } else {
        r4[8] = s[9];
    }

    r0 = s[10];
    if (r0 == 0) {
        r0 = ((uint32_t (*)(uint32_t))data_ov000_02169a34.p[6])(r4[8]);
    }
    r4[7] = r0;

    v = s[12];
    if (v == 0) {
        v = 9 << 6;
    }
    if ((int32_t)v <= 0x5dc) {
        if ((int32_t)v < (9 << 6)) {
            v = 9 << 6;
        }
    } else {
        v = 0x5dc;
    }

    if (s[13] == 0) {
        r0 = 0x43 << 6;
    } else {
        r0 = s[13];
    }
    r4[9] = v - 0x28;
    data_ov000_02169a58[1] = (uint16_t)r0;
    data_ov000_02169a58[2] = (uint16_t)((v - 0x28) << 1);
    data_ov000_0216bcb0[0] = 0;

    if (s[0] != 0) {
        data_ov000_0216e00c[2] = 1;
        r4[0] = 0;
        r4[3] = (uint32_t)func_ov000_0214d110;
        r4[10] = data_ov000_0216e00c[1];
    } else {
        data_ov000_0216e00c[2] = 0;
        r4[0] = 1;
        r4[3] = (uint32_t)func_ov000_0214d0cc;
        r4[10] = data_ov000_0216e00c[1];
    }

    if (s[11] == 0) {
        func_ov000_021455ec(0xb);
    } else {
        func_ov000_021455ec(s[11]);
    }
    func_ov000_021502ac((void *)func_ov000_0214597c);
    func_ov000_0214557c((void *)func_ov000_0214e72c);
    func_ov000_02145300((void *)func_ov000_0214eb7c);
    func_ov000_021453d0(r4);
}
