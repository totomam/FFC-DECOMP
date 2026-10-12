#include "ffc/types.h"

extern uint8_t data_ov001_0218f120[];
extern int32_t data_ov001_02195888[];
extern uint8_t data_ov001_02195894[];
extern int32_t func_ov000_021532b8(void *p);
extern void func_ov001_02189a00(uint8_t *buf);
extern void func_ov001_021899e8(uint8_t *dst, uint8_t *src, int32_t n);
extern void func_ov001_021889d4(void *p, uint8_t *buf, int32_t n);

int32_t func_ov001_02188da4(void *p)
{
    uint8_t buf[13];
    uint32_t n;
    uint8_t *dst;
    uint8_t *src;
    int32_t v;
    uint8_t c;

    src = data_ov001_0218f120;
    dst = buf;
    n = 13;
    do {
        c = *src;
        src++;
        *dst = c;
        dst++;
    } while (--n);

    if (func_ov000_021532b8(data_ov001_02195888) != 0) {
        v = data_ov001_02195888[0];
        if (v >= 0 && v < 10) {
            buf[1] = (uint8_t)(v + 0x30);
        } else if (v >= 10 && v < 100) {
            func_ov001_02189a00(buf);
        }

        if (data_ov001_02195888[0] == 4 || data_ov001_02195888[0] == 8) {
            v = data_ov001_02195888[1];
            if (v >= 0 && v < 10) {
                buf[3] = (uint8_t)(v + 0x30);
            }
            func_ov001_021899e8(buf + 4, data_ov001_02195894, 9);
        }

        func_ov001_021889d4(p, buf, 13);
        return 1;
    }
    return 0;
}
