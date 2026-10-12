#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);
extern int func_ov006_021b5404(uint8_t *p, int max);
extern void func_ov006_021b453c(void *obj, int a, int val, int b, int c, void *buf, int d);
extern uint8_t data_ov006_021bc78c[];

void func_ov006_021abfa8(uint8_t *p, int a1)
{
    uint16_t buf[17];
    int i, len, n, v;
    void *obj;

    func_02084b2c(buf, 0, 0x22);
    len = func_ov006_021b5404(p, 0x20);
    n = len;
    if (n > 16) {
        n = 16;
    }
    i = 0;
    while (i < n) {
        if (p[i] == 0x20) {
            buf[i] = 0xe01d;
        } else {
            buf[i] = p[i];
        }
        i++;
    }
    v = a1 * 0x1d + 2;
    if (len <= 16) {
        v += 5;
    }
    obj = *(void **)(*(uint8_t **)(data_ov006_021bc78c + 8) + 0x14);
    func_ov006_021b453c(obj, 0x48, v, 2, 8, buf, 1);

    if (len > 16) {
        func_02084b2c(buf, 0, 0x22);
        len -= 16;
        for (i = 0; i < len; i++) {
            uint8_t c = p[i + 16];
            if (c == 0x20) {
                buf[i] = 0xe01d;
            } else {
                buf[i] = c;
            }
        }
        obj = *(void **)(*(uint8_t **)(data_ov006_021bc78c + 8) + 0x14);
        func_ov006_021b453c(obj, 0x48, v + 12, 2, 8, buf, 1);
    }
}
