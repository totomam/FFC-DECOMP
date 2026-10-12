#include "ffc/types.h"

extern uint32_t *data_0213df18;
extern uint8_t data_020ae884[];
extern uint8_t data_020ae664[];
extern uint32_t data_020aea44[];
extern void func_02056c9c(void *p, uint32_t x);
extern void func_021bd180(void *b);
extern void func_ov011_021bd1f4(void *b);

void func_0203a604(uint8_t *p, uint8_t v)
{
    uint8_t buf[0x84];
    uint8_t *q;
    uint8_t *d;
    uint8_t *s;
    int i;

    func_02056c9c(p, data_0213df18[9]);
    *(uint8_t **)p = data_020ae884;
    p[0x88] = v;
    *(uint32_t *)(p + 0x90) = 0;
    *(uint32_t *)(p + 0x94) = 0;

    func_021bd180(buf);

    q = p + 0x98;
    q[0] = buf[0];
    q[1] = buf[1];
    q[2] = buf[2];
    *(uint32_t *)(q + 4) = *(uint32_t *)(buf + 4);
    *(uint32_t *)(q + 8) = *(uint32_t *)(buf + 8);
    *(uint8_t **)(q + 0xc) = data_020ae664;

    s = buf + 0x10;
    d = q + 0x10;
    for (i = 0x15; i != 0; i--) {
        *(uint16_t *)d = *(uint16_t *)s;
        s += 2;
        d += 2;
    }

    *(uint32_t *)(q + 0x3c) = *(uint32_t *)(buf + 0x3c);

    s = buf + 0x40;
    d = q + 0x40;
    for (i = 0x14; i != 0; i--) {
        *d = *s;
        s++;
        d++;
    }

    *(uint32_t *)(q + 0x54) = *(uint32_t *)(buf + 0x54);
    *(uint32_t *)(q + 0x58) = *(uint32_t *)(buf + 0x58);
    *(uint32_t *)(q + 0x5c) = *(uint32_t *)(buf + 0x5c);
    *(uint32_t *)(q + 0x60) = *(uint32_t *)(buf + 0x60);

    q[0x64] = buf[0x64];
    q[0x65] = buf[0x65];
    q[0x66] = buf[0x66];
    q[0x67] = buf[0x67];
    q[0x68] = buf[0x68];

    *(uint32_t *)(q + 0x6c) = *(uint32_t *)(buf + 0x6c);
    *(uint32_t *)(q + 0x70) = *(uint32_t *)(buf + 0x70);
    *(uint32_t *)(q + 0x74) = *(uint32_t *)(buf + 0x74);
    *(uint32_t *)(q + 0x78) = *(uint32_t *)(buf + 0x78);
    *(uint32_t *)(q + 0x7c) = *(uint32_t *)(buf + 0x7c);
    *(uint32_t *)(q + 0x80) = *(uint32_t *)(buf + 0x80);

    func_ov011_021bd1f4(buf);

    *(uint32_t *)(p + 0x80) = data_020aea44[0];
    *(uint32_t *)(p + 0x84) = data_020aea44[1];
}
