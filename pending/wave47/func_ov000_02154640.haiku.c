#include "ffc/types.h"

extern void func_ov000_0215482c(void *a, uint8_t *buf, uint32_t n, uint32_t m);
extern const uint8_t data_ov000_021696ac[];
extern int8_t *data_ov000_02169aa0[];

void func_ov000_02154640(void *a, uint8_t *buf)
{
    uint8_t t[24];
    const uint8_t *src = data_ov000_021696ac;
    uint8_t *dst = t;
    int8_t *key;
    int i, k;
    uint8_t cur, n, v, tmp, b;
    uint32_t c = 0x18;

    do {
        b = *src;
        src++;
        *dst = b;
        dst++;
    } while (--c);

    func_ov000_0215482c(a, buf, 0x20, 0x18);

    key = data_ov000_02169aa0[2];
    for (i = 0; i < 24; i++) {
        b = buf[i];
        buf[i] = key[i] ^ b;
    }

    for (k = 0; k < 24; k++) {
        if (t[(uint8_t)k] == 0xff) {
            continue;
        }
        v = buf[(uint8_t)k];
        cur = (uint8_t)k;
        do {
            n = t[cur];
            t[cur] = 0xff;
            tmp = buf[n];
            buf[n] = v;
            v = tmp;
            cur = n;
        } while (t[cur] != 0xff);
    }

    key = data_ov000_02169aa0[0];
    for (i = 0; i < 24; i++) {
        b = buf[i];
        buf[i] = key[i] ^ b;
    }
}
