#include "ffc/types.h"

extern uint32_t func_ov001_02182a9c(void);
extern void func_02092878(uint8_t *dst, const uint8_t *src);
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov000_0214f148(uint32_t x);
extern void func_ov000_021652a8(int a, int b, int c, const void *fmt, ...);
extern void func_ov001_02182a68(uint32_t a, uint32_t b, uint32_t c, uint8_t *buf, uint32_t s);
extern uint32_t func_ov001_02182adc(uint32_t x);
extern uint32_t func_ov000_0216591c(void);

extern uint8_t data_ov001_02191b58[];
extern uint32_t data_ov001_0219531c;
extern uint8_t data_ov001_02191c68[];
extern uint32_t data_ov001_021952f0[];
extern uint8_t data_ov001_02191c88[];
extern uint32_t data_ov001_02195318;
extern uint8_t data_ov001_02191cc4[];
extern uint32_t data_ov001_02195314;
extern uint8_t data_ov001_02191d00[];

void func_ov001_02182d40(uint32_t *p)
{
    uint8_t b[0x58];
    const uint8_t *src = data_ov001_02191b58;
    uint32_t v, w, t, u, a, r6, r7, h;
    uint32_t *q;
    uint8_t f = 0;

    b[0] = src[0];
    b[7] = f;
    b[1] = src[1];
    b[2] = src[2];
    b[3] = src[3];
    b[4] = src[4];
    b[5] = src[5];
    b[6] = 4;

    v = p[1];
    *(uint32_t *)&b[8] = ((v >> 24) & 0xff) | ((v >> 8) & 0xff00) | ((v << 8) & 0xff0000) | ((v << 24) & 0xff000000);
    b[0xd] = (uint8_t)p[2];
    if ((int)p[0] != -1) f = 1;
    b[0xe] = f;

    r6 = func_ov001_02182a9c();
    r7 = func_ov001_02182a9c();
    t = func_ov001_02182a9c();
    u = func_ov001_02182a9c();

    w = ((r6 & 0xff) << 24) | (((r7 >> 8) & 0xff) << 16) | (((u >> 16) & 0xff) << 8) | (t >> 24);
    b[0xf] = (uint8_t)(w >> 24);
    b[0x10] = (uint8_t)(w >> 16);
    b[0x11] = (uint8_t)(w >> 8);
    b[0x12] = (uint8_t)w;
    b[0x13] = 0;
    b[0x14] = 0;

    func_02092878(&b[0x15], (const uint8_t *)0x02170990);
    r6 = func_02092864((const uint8_t *)0x02170990) + 0x16;

    if (b[0xe] != 0 && p[8] == 0) {
        b[0xc] = 0;
        func_ov000_021652a8(7, 0, 8, data_ov001_02191c68,
                            func_ov000_0214f148(data_ov001_0219531c), 0x6cfd);
        func_ov001_02182a68(p[0], data_ov001_021952f0[11], 0x6cfd, b, r6);
    }

    if (p[9] == 0) {
        b[0xc] = 1;
        func_ov000_021652a8(7, 0, 8, data_ov001_02191c88, p[1],
                            func_ov000_0214f148(data_ov001_0219531c), 0x6cfd);
        func_ov001_02182a68(p[6], data_ov001_021952f0[11], 0x6cfd, b, r6);
    }

    if (b[0xe]) {
        r7 = p[0];
    } else {
        r7 = p[6];
    }
    if (b[0xe]) {
        v = p[0];
    } else {
        v = p[6];
    }
    a = func_ov001_02182adc(v);
    w = func_ov001_02182adc(r7);

    h = ((w & 0xff) << 8) | ((a >> 8) & 0xff);
    b[0x13] = (uint8_t)(h >> 8);
    b[0x14] = (uint8_t)h;

    if (p[10] == 0) {
        b[0xc] = 2;
        func_ov000_021652a8(7, 0, 8, data_ov001_02191cc4, p[1],
                            func_ov000_0214f148(data_ov001_02195318), 0x6cfd);
        func_ov001_02182a68(p[6], data_ov001_021952f0[10], 0x6cfd, b, r6);
    }

    if (p[11] == 0) {
        b[0xc] = 3;
        func_ov000_021652a8(7, 0, 8, data_ov001_02191d00, p[1],
                            func_ov000_0214f148(data_ov001_02195314), 0x6cfd);
        func_ov001_02182a68(p[6], data_ov001_021952f0[9], 0x6cfd, b, r6);
    }

    p[7] = 2;
    p[14] = func_ov000_0216591c() + 500;
    p[13] = 10;
}
