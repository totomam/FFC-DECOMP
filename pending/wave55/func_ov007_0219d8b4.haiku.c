#include "ffc/types.h"

extern void *func_0201af34(void *a);
extern void func_0201af7c(void *a, void *b, void *c);
extern void *func_0205681c(uint32_t size);
extern void *func_02008cc4(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_ov007_0219da50(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void *func_02033094(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void *func_020059cc(void *object);
extern void func_02056bc0(void *object, void *node);
extern void *func_02008ce8(void *a, void *b, uint32_t c, uint32_t d);
extern void *func_ov007_0219d7f0(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void *func_0203b720(void);
extern void *func_02056aec(void *a);

extern void *data_020b93b8;
extern uint32_t data_ov007_021c2fe0[2];
extern void *data_020b8e44;
extern uint32_t data_ov007_021c2fe8[2];
extern uint32_t data_ov007_021c2ff0[2];
extern uint32_t data_ov007_021c2ff8[2];

void func_ov007_0219d8b4(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    volatile uint32_t st = **(uint32_t **)(p + 0x88);
    uint32_t buf[8];
    uint32_t tmp[3];
    uint32_t c80, c60;
    void *r1, *r5, *r6 = 0, *r7 = 0, *al;
    uint32_t *d;

    switch (st) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
        break;
    default:
        break;
    }
    r1 = func_0201af34(data_020b93b8);
    func_0201af7c(data_020b93b8, r1, buf);

    if (buf[5] & 2) {
        r6 = func_0205681c(0x94);
        if (r6 != 0) {
            r6 = func_02008cc4(r6, 0, 0, 0);
        }
        d = data_ov007_021c2fe0;
        r1 = func_ov007_0219da50(p, d[0], d[1], *(uint8_t *)(p + 0xed), 1);
        r5 = p + 0x14;
        func_02056bc0(r5, r1);
        func_02056bc0(r5, r6);
    } else {
        r5 = func_0205681c(0xa4);
        r6 = 0;
        r7 = 0;
        if (r5 != 0) {
            c80 = 0x80;
            c60 = 0x60;
            func_02005988(tmp, func_020159c8(data_020b8e44, 0x35));
            r5 = func_02033094(r5, tmp, 0, c80, c60, 4, 0);
            r6 = (void *)1;
        }
        if (r6) {
            func_020059cc(tmp);
        }
        func_02056bc0(p + 0x48, r5);
        al = func_0205681c(0x94);
        r1 = al;
        if (al != 0) {
            r1 = func_02008ce8(al, r5, 0, 0);
        }
        func_02056bc0(p + 0x14, r1);
        if (*(uint32_t *)(p + 0xd4) == 1) {
            d = data_ov007_021c2fe8;
        } else {
            d = data_ov007_021c2ff0;
        }
        r1 = func_ov007_0219d7f0(p, d[0], d[1], 1);
        func_02056bc0(p + 0x14, r1);
        r6 = func_0203b720();
        r7 = func_02056aec(r5);
        al = func_0205681c(0x94);
        r1 = al;
        if (al != 0) {
            r1 = func_02008ce8(al, r5, 0, 0);
        }
        r5 = p + 0x14;
        func_02056bc0(r5, r1);
        func_02056bc0(r5, r7);
        func_02056bc0(r5, r6);
        goto tail;
    }
    r5 = p + 0x14;
    func_02056bc0(r5, r6);
tail:
    {
        uint32_t w0 = data_ov007_021c2ff8[0];
        uint32_t w1 = data_ov007_021c2ff8[1];
        *(uint32_t *)(p + 0x80) = w0;
        *(uint32_t *)(p + 0x84) = w1;
    }
}
