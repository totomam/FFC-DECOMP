#include "ffc/types.h"

extern int32_t func_ov000_021652a8(int32_t a, int32_t b, int32_t c, void *d);
extern int32_t func_ov000_02165418(int32_t a, int32_t b, int32_t c);
extern int32_t func_ov000_021655a0(int32_t a);
extern int32_t func_ov000_0216564c(int32_t a, int32_t b);
extern void func_ov000_021656c8(int32_t a, int32_t b);
extern int32_t func_ov000_021654bc(int32_t a, void *b, int32_t c, int32_t d);
extern int32_t func_ov000_021655ac(int32_t a, int32_t b, int32_t *c, int32_t *d);
extern void func_ov001_02171e6c(void *a, int32_t b, int32_t c);
extern uint8_t data_ov001_0218fec0[];
extern int32_t data_ov001_0218f344;
extern int32_t data_ov001_02194be4;
extern uint16_t data_ov001_02194be0;

void func_ov001_02174818(int32_t *p)
{
    int32_t r, h;
    int32_t one = 1;
    uint32_t fr[4];
    uint8_t *fb;

    func_ov000_021652a8(8, 3, 0x10, data_ov001_0218fec0);
    if (p[20] == -1) {
        p[20] = func_ov000_02165418(2, 1, 0);
        if (p[20] == -1) {
            p[73] = one;
            p[16] = 5;
            p[21] = func_ov000_021655a0(p[20]);
            return;
        }
        r = func_ov000_0216564c(p[20], 0);
        if (r == 0) {
            p[73] = one;
            p[16] = 5;
            p[21] = func_ov000_021655a0(p[20]);
            return;
        }
        if (p[87] != 0) {
            func_ov000_021656c8(p[20], data_ov001_0218f344);
        }
        if (p[102] == 4) {
            r = ((int32_t (*)(int32_t *, int32_t *))p[111])(p, &p[101]);
            if (r == 3) {
                p[73] = one;
                p[16] = 0x11;
                return;
            }
            p[102] = 0;
        }
        fr[2] = 0;
        fr[3] = 0;
        fb = (uint8_t *)fr;
        fb[9] = 2;
        if (p[99] != 0) {
            h = *(uint16_t *)((uint8_t *)p + 0x190);
        } else if (data_ov001_02194be4 != 0) {
            h = data_ov001_02194be0;
        } else {
            h = *(uint16_t *)((uint8_t *)p + 0x20);
        }
        *(uint16_t *)(fb + 10) = (uint16_t)(((h & 0xff) << 8) | ((h >> 8) & 0xff));
        fr[3] = p[7];
        r = func_ov000_021654bc(p[20], &fr[2], 8, (h >> 8) & 0xff);
        if (r == -1) {
            r = func_ov000_021655a0(p[20]);
            if (r != -6 && r != -26 && r != -76) {
                p[73] = one;
                p[16] = 6;
                p[21] = r;
                return;
            }
        }
    }

    r = func_ov000_021655ac(p[20], 0, &fr[1], &fr[0]);
    if (r == -1) {
        p[73] = one;
        p[16] = 6;
        p[21] = func_ov000_021655a0(r);
        return;
    }
    if (r == 1 && fr[0] != 0) {
        p[73] = one;
        p[16] = 6;
        p[21] = 0;
        return;
    }
    if (r == 1 && fr[1] != 0) {
        if (p[102] == 0) {
            p[4] = 5;
        } else {
            p[4] = 4;
        }
        func_ov001_02171e6c(p, 0, 0);
    }
}
