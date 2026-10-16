#include "ffc/types.h"
extern uint8_t data_ov001_02191a24[];
extern int func_ov001_02181fcc(void *a, int b, int c, uint8_t *d, int n);
int func_ov001_02181b3c(uint8_t *p, int b, int c) {
    uint16_t t;
    uint8_t buf[6];
    uint16_t n = 0;
    if (*(int *)(p + 0x40) == 2) {
        uint8_t *s = (uint8_t *)&t;
        uint8_t *d = buf;
        t = 3;
        d[0] = s[0];
        d[1] = s[1];
        n += 2;
    }
    {
        uint8_t *s = data_ov001_02191a24;
        uint8_t *d = buf + n;
        d[0] = s[0];
        d[1] = s[1];
    }
    buf[n + 2] = 0x68;
    if (func_ov001_02181fcc(p, b, c, buf, n + 3) == 0) return 0;
    return 1;
}
