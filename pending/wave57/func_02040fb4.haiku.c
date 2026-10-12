#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *obj, uint32_t v);
extern void func_02056bc0(void *object, void *node);
extern char data_020af1b0[];
extern char data_020ae644[];
extern char data_020ae654[];
extern uint32_t data_020af338[];

void func_02040fb4(uint8_t *p)
{
    uint8_t *n;
    uint8_t *r7;
    uint32_t *q;
    uint8_t *s;
    uint8_t *d;
    uint32_t flag;
    uint32_t zero;
    uint8_t b;
    int i;

    n = func_0205681c(0x150);
    if (n != 0) {
        flag = *(uint32_t *)(p + 0x1c0);
        if (flag == 0) {
            r7 = p + 0x1a0;
        } else {
            r7 = 0;
        }
        func_02056c9c(n, 0);
        *(uint32_t *)n = (uint32_t)data_020af1b0;
        q = (uint32_t *)(n + 0x80);
        q[0] = *(uint32_t *)(p + 0xa4);
        q[1] = (uint32_t)data_020ae644;
        q[2] = *(uint32_t *)(p + 0xac);
        q[3] = (uint32_t)data_020ae644;
        q[4] = *(uint32_t *)(p + 0xb4);
        q[5] = (uint32_t)data_020ae644;
        q[6] = *(uint32_t *)(p + 0xbc);
        q[7] = (uint32_t)data_020ae644;
        q[8] = *(uint32_t *)(p + 0xc4);
        q[9] = (uint32_t)data_020ae644;
        q[10] = *(uint32_t *)(p + 0xcc);
        q[9] = (uint32_t)data_020ae654;
        q[11] = *(uint32_t *)(p + 0xd0);
        s = p + 0xd4;
        d = n + 0xb0;
        for (i = 0x11; i != 0; i--) {
            *(uint16_t *)d = *(uint16_t *)s;
            s += 2;
            d += 2;
        }
        q[0x0d] = *(uint32_t *)(p + 0xf8);
        q[0x0e] = *(uint32_t *)(p + 0xfc);
        q[0x0f] = *(uint32_t *)(p + 0x100);
        q = (uint32_t *)(n + 0xe0);
        q[0] = *(uint32_t *)(p + 0x104);
        q[1] = (uint32_t)data_020ae644;
        q[2] = *(uint32_t *)(p + 0x10c);
        q[3] = (uint32_t)data_020ae644;
        q[4] = *(uint32_t *)(p + 0x114);
        q[5] = (uint32_t)data_020ae644;
        q[6] = *(uint32_t *)(p + 0x11c);
        q[7] = (uint32_t)data_020ae644;
        q[8] = *(uint32_t *)(p + 0x124);
        q[9] = (uint32_t)data_020ae644;
        q[10] = *(uint32_t *)(p + 0x12c);
        q[9] = (uint32_t)data_020ae654;
        q[11] = *(uint32_t *)(p + 0x130);
        s = p + 0x134;
        d = n + 0x110;
        for (i = 0x11; i != 0; i--) {
            *(uint16_t *)d = *(uint16_t *)s;
            s += 2;
            d += 2;
        }
        q = (uint32_t *)(n + 0x80);
        q[0x0d] = *(uint32_t *)(p + 0x158);
        q[0x0e] = *(uint32_t *)(p + 0x15c);
        q[0x0f] = *(uint32_t *)(p + 0x160);
        *(uint32_t *)(n + 0x140) = (uint32_t)r7;
        zero = 0;
        *(uint32_t *)(n + 0x144) = zero;
        n[0x14c] = 0;
        b = 0;
        if (*(uint32_t *)(p + 0x1c0) != 0) {
            b = 1;
        }
        n[0x14d] = b;
    }
    func_02056bc0(p + 0x14, n);
    *(uint32_t *)(p + 0x80) = data_020af338[0];
    *(uint32_t *)(p + 0x84) = data_020af338[1];
}
