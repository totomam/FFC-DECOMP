#include "ffc/types.h"

extern void func_02092924(uint8_t *a, const uint8_t *b);
extern uint32_t func_02092b00(uint32_t a, uint8_t *b);
extern uint32_t func_02092864(const uint8_t *text);
extern uint8_t data_ov001_0218eff8[];
extern uint32_t data_ov001_02194c38[];
extern uint8_t data_ov001_02191970[];
extern int8_t data_ov001_02194e74[];

int8_t *func_ov001_0217f498(uint32_t p0, uint8_t *p1)
{
    uint8_t buf[256];
    uint8_t *src;
    uint8_t *dst;
    uint32_t n;
    uint32_t flag;
    uint32_t r;
    int8_t *s;
    int8_t *d;
    uint32_t off;

    n = 256;
    src = data_ov001_0218eff8;
    dst = buf;
    do {
        *dst = *src;
        src++;
        dst++;
        n--;
    } while (n != 0);
    flag = data_ov001_02194c38[8];
    data_ov001_02194c38[8] = flag ^ 1;
    func_02092924(buf, p1);
    func_02092924(buf, data_ov001_02191970);
    r = func_02092b00(p0, buf);
    if (r == 0) {
        return 0;
    }
    s = (int8_t *)(r + func_02092864(buf));
    off = data_ov001_02194c38[8] << 8;
    d = data_ov001_02194e74 + off;
    while (*s != 0 && *s != 0x5c) {
        *d++ = *s++;
    }
    *d = 0;
    return data_ov001_02194e74 + off;
}
