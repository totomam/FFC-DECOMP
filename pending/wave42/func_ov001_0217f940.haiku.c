#include "ffc/types.h"

extern int32_t func_ov000_02168768(void);
extern void func_ov000_02168738(uint32_t);
extern void func_ov001_0217f468(uint8_t *dst, uint32_t n);
extern void func_ov001_0217f8ac(int32_t i, uint32_t a, uint32_t b, uint8_t *p, uint32_t c);
extern uint8_t data_ov001_02194c38[];
extern uint8_t data_ov001_0218efe8[];
extern uint8_t data_ov001_021918dc[];
extern uint32_t data_ov001_021918a4;

void func_ov001_0217f940(void) {
    uint32_t n;
    uint8_t dst[16];
    uint8_t tmp[16];
    int32_t i;
    uint8_t *s;
    uint8_t *d;
    if (((uint32_t *)data_ov001_02194c38)[5] != 0) {
        i = func_ov000_02168768() - 1;
        if (i >= 0) {
            d = tmp;
            s = data_ov001_0218efe8;
            n = 16;
            do {
                *d = *s;
                s++;
                d++;
                n--;
            } while (n != 0);
            do {
                d = dst;
                s = tmp;
                n = 16;
                do {
                    *d = *s;
                    s++;
                    d++;
                    n--;
                } while (n != 0);
                data_ov001_021918a4 = (uint32_t)data_ov001_021918dc;
                func_ov001_0217f468(dst, 15);
                func_ov001_0217f8ac(i, 0, 0, dst, 0);
                i--;
            } while (i >= 0);
        }
        func_ov000_02168738(((uint32_t *)data_ov001_02194c38)[5]);
        ((uint32_t *)data_ov001_02194c38)[5] = 0;
    }
}
