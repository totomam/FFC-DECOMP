#include "ffc/types.h"

extern int func_ov000_0214ed24(void *a, uint8_t *b);
extern int func_ov000_02165408(int a, int b);

int func_ov000_02165484(void *a, uint8_t *src, uint8_t c)
{
    uint8_t buf[8];
    uint32_t n;
    uint8_t *d;
    if (*(uint16_t *)(src + 2) == 0) {
        return 0;
    }
    d = buf;
    n = 8;
    do {
        *d = *src;
        src++;
        d++;
        n--;
    } while (n);
    buf[0] = c;
    return func_ov000_02165408(func_ov000_0214ed24(a, buf), -1);
}
