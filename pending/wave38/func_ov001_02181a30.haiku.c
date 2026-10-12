#include "ffc/types.h"

extern void func_ov001_0218085c(uint8_t *buf, int len, uint16_t arg);
extern int func_ov001_021803b0(uint8_t *self, uint8_t *buf, int len);
extern uint8_t data_ov001_02191a24[];

int func_ov001_02181a30(uint8_t *p) {
    uint8_t buf[12];
    uint8_t *b;
    uint8_t *e;
    uint8_t *src;
    int n = 0;

    if (*(int32_t *)(*(uint8_t **)(p + 8) + 0x40) == 2) {
        uint8_t *s = buf;
        uint8_t *d;
        *(uint16_t *)buf = 5;
        d = buf + 2;
        d[0] = s[0];
        n += 2;
        d[1] = s[1];
    }
    b = buf + 2;
    src = data_ov001_02191a24;
    e = b + n;
    e[0] = src[0];
    e[1] = src[1];
    b[n + 2] = 100;
    func_ov001_0218085c(b, n + 3, *(uint16_t *)(p + 0x66));
    if (func_ov001_021803b0(p, b, n + 5) != 0) {
        *(uint32_t *)(p + 0x90) = 0;
        return 1;
    }
    return 0;
}
