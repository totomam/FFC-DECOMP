#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(int size);
extern void func_02084b2c(void *dst, int val, int len);
extern void func_02084ca4(uint32_t a, void *dst, int val);

void func_ov000_02152904(uint8_t *src, uint32_t flag, uint32_t mode)
{
    uint8_t *p;
    int i;
    uint8_t c;
    int v;
    uint32_t m;
    uint8_t *q;

    p = func_ov000_02152ae4(0x10);
    p[0x14bc] = (p[0x14bc] & ~0xf) | 1;
    func_02084b2c(p, 0, 0xf0);

    for (i = 0; i < 0x20; i++) {
        c = src[i];
        if (c == 0) {
            break;
        }
        p[0x40 + i] = c;
    }

    m = 3;
    if (flag == 0 || mode == 0) {
        q = p + 0xe6;
        *q = *q & ~m;
        return;
    }

    if (mode == 1) {
        v = 5;
    } else if (mode == 2) {
        v = 0xd;
    } else {
        v = 0x10;
    }
    func_02084ca4(flag, p + 0x80, v);
    p[0xe6] = (p[0xe6] & ~m) | ((uint8_t)mode & m);
}
