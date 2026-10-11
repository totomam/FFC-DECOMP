#include "ffc/types.h"

extern void *func_ov000_0214ed44(void *p, uint8_t *buf);
extern void func_ov000_02165408(void *p, int32_t v);

void func_ov000_021654bc(void *p, const uint8_t *src, uint8_t c)
{
    uint8_t buf[8];
    uint32_t n;
    uint8_t *d;

    d = buf;
    n = 8;
    do {
        uint8_t t = *src;
        src++;
        *d = t;
        d++;
        n--;
    } while (n != 0);

    buf[0] = c;
    p = func_ov000_0214ed44(p, buf);
    func_ov000_02165408(p, -1);
}
