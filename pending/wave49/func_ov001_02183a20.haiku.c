#include "ffc/types.h"

#define BSWAP32(w) (((w) >> 24) | (((w) >> 8) & 0xff00u) | (((w) << 8) & 0xff0000u) | ((w) << 24))

extern int func_ov001_02182a4c(uint8_t *p);
extern void func_ov000_021652a8(int a, int b, int c, const void *fmt, ...);
extern uint32_t func_ov000_0214f148(uint32_t x);
extern uint32_t func_ov001_02182950(uint32_t x);
extern void func_ov001_021836d8(uint32_t r, uint8_t *buf, void *q);
extern void func_ov001_021837d0(uint32_t r, uint8_t *buf, void *q);
extern void func_ov001_021838e8(uint32_t r, uint8_t *buf);
extern void func_ov001_02183944(uint32_t r, uint8_t *buf, void *q);

extern char data_ov001_021925b0[];
extern char data_ov001_021925e0[];
extern char data_ov001_02192614[];
extern char data_ov001_02192658[];
extern char data_ov001_02192698[];

typedef struct {
    uint8_t a0;
    uint8_t a1;
    uint16_t h2;
    uint32_t w4;
} Q;

void func_ov001_02183a20(uint8_t *p, int n, Q *q)
{
    uint8_t buf[0x4c];
    uint8_t kind;
    uint16_t h;
    uint32_t t;
    uint32_t w;
    uint32_t r;
    uint8_t *d;
    int c;

    if (func_ov001_02182a4c(p) == 0) {
        func_ov000_021652a8(7, 0, 4, data_ov001_021925b0);
        return;
    }
    kind = p[7];
    h = q->h2;
    t = func_ov000_0214f148(q->w4);
    func_ov000_021652a8(7, 0, 8, data_ov001_021925e0, kind, n, t,
                        (uint16_t)((((h >> 8) & 0xff)) | ((h << 8) & 0xff00)));

    if (kind == 5 || kind == 7) {
        if (n < 0x14) {
            func_ov000_021652a8(7, 0, 4, data_ov001_02192614);
            return;
        }
        d = buf;
        c = 0x14;
        do {
            *d++ = *p++;
        } while (--c);
        w = *(uint32_t *)&buf[8];
        r = func_ov001_02182950(BSWAP32(w));
        if (r == 0) {
            func_ov000_021652a8(7, 0, 4, data_ov001_02192658, BSWAP32(w));
            return;
        }
        if (kind == 5) {
            func_ov001_021836d8(r, buf, q);
        } else {
            func_ov001_021837d0(r, buf, q);
        }
        return;
    }

    if (kind == 0x10) {
        if (n < 0x12) {
            return;
        }
        d = buf;
        c = 0x12;
        do {
            *d++ = *p++;
        } while (--c);
        w = *(uint32_t *)&buf[8];
        r = func_ov001_02182950(BSWAP32(w));
        if (r != 0) {
            func_ov001_021838e8(r, buf);
        }
        return;
    }

    if (n < 0x15) {
        func_ov000_021652a8(7, 0, 4, data_ov001_02192698);
        return;
    }
    d = buf;
    c = 0x15;
    do {
        *d++ = *p++;
    } while (--c);
    w = *(uint32_t *)&buf[8];
    r = func_ov001_02182950(BSWAP32(w));
    if (r != 0) {
        func_ov001_02183944(r, buf, q);
    } else {
        func_ov000_021652a8(7, 0, 4, data_ov001_02192658, BSWAP32(w));
    }
}
