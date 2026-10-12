#include "ffc/types.h"

extern uint32_t func_ov000_0216591c(void *hdr);
extern void func_ov000_0216552c(uint32_t a, void *buf, int len, int z, void *p, int n);
extern void func_ov001_021856b8(void *a, void *b);
extern uint8_t data_ov001_021941c4[];
extern uint8_t data_ov001_021941d4[];

typedef struct {
    uint32_t v;
    uint8_t pad;
    uint8_t t;
    uint16_t h;
    uint32_t w;
} Hdr;

typedef struct {
    uint32_t f0;
    uint8_t _p4[0x1c];
    uint32_t f20;
    uint8_t _p24[4];
    uint32_t f28;
    uint8_t f2c[0x28];
    uint32_t f54;
} A;

typedef struct {
    uint32_t w0;
    uint16_t h4;
    uint8_t _p6[2];
    uint32_t w8;
    uint16_t hc;
    uint8_t _pe[6];
    uint8_t fl14;
    uint8_t fl15;
    uint8_t _p16[6];
    uint32_t r1c;
    uint32_t r20;
} B;

void func_ov001_02185754(A *p, B *q) {
    Hdr hdr;
    uint8_t buf[0x100];
    uint8_t *rb;
    int len;
    int r3;
    int i;
    int n;
    uint32_t x, v, w;
    uint16_t h;
    uint8_t fl;

    hdr.t = 2;
    q->r1c = func_ov000_0216591c(&hdr);
    fl = q->fl14;
    if (fl & 0x20) goto skip;

    if (p->f0 == 1) {
        if (fl & 0x80) {
            buf[0] = 0xfe;
            buf[1] = 0xfd;
            buf[2] = 9;
            rb = (uint8_t *)&q->r1c;
            buf[3] = rb[0];
            buf[4] = rb[1];
            buf[5] = rb[2];
            buf[6] = rb[3];
            len = 7;
        } else {
            x = q->r20;
            v = (x << 24) | ((x << 8) & 0x00ff0000) | ((x >> 8) & 0x0000ff00) | (x >> 24);
            hdr.v = v;
            buf[0] = 0xfe;
            buf[1] = 0xfd;
            buf[2] = 0;
            rb = (uint8_t *)&q->r1c;
            buf[3] = rb[0];
            buf[4] = rb[1];
            buf[5] = rb[2];
            buf[6] = rb[3];
            r3 = 7;
            if (v != 0) {
                uint8_t *hb = (uint8_t *)&hdr;
                buf[7] = hb[0];
                buf[8] = hb[1];
                buf[9] = hb[2];
                buf[10] = hb[3];
                r3 = 11;
            }
            if (fl & 4) {
                n = p->f54;
                buf[r3] = n;
                r3++;
                for (i = 0; i < p->f54; i++) {
                    buf[r3] = p->f2c[i];
                    r3++;
                }
                buf[r3] = 0;
                buf[r3 + 1] = 0;
                len = r3 + 2;
            } else {
                buf[r3] = 0xff;
                buf[r3 + 1] = 0xff;
                buf[r3 + 2] = 0xff;
                buf[r3 + 3] = 1;
                len = r3 + 4;
            }
        }
    } else {
        if (fl & 4) {
            for (i = 0; i < 13; i++) {
                buf[i] = data_ov001_021941c4[i];
            }
            len = 13;
        } else {
            for (i = 0; i < 8; i++) {
                buf[i] = data_ov001_021941d4[i];
            }
            len = 8;
        }
    }

    if (q->w0 == p->f28 && (q->fl15 & 2)) {
        w = q->w8;
        h = q->hc;
    } else {
        w = q->w0;
        h = q->h4;
    }
    hdr.w = w;
    hdr.h = h;
    func_ov000_0216552c(p->f20, buf, len, 0, &hdr.pad, 8);
    func_ov001_021856b8((uint8_t *)p + 8, q);
    return;
skip:
    q->r1c = 0;
}
