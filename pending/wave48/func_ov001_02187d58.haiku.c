#include "ffc/types.h"

struct Ctx;
typedef int (*cb_t)(struct Ctx *, const uint8_t *, uint32_t, uint32_t, uint32_t, const uint8_t *, uint32_t);

struct Ctx {
    uint8_t pad[0x490];
    cb_t fp;
    uint32_t val;
};

extern int func_ov001_02186e30(const uint8_t *p, int n);

int func_ov001_02187d58(struct Ctx *c, const uint8_t *p, int len)
{
    int flag, count, i, r, r2;
    const uint8_t *start;
    uint32_t wa, wc, m;
    uint16_t hb;
    uint8_t *q;

    if (len < 2) {
        return 4;
    }
    flag = p[0];
    count = p[1];
    p += 2;
    len -= 2;
    for (i = 0; i < count; i++) {
        start = p;
        r = func_ov001_02186e30(p, len);
        if (r == -1) {
            return 4;
        }
        p += r;
        len -= r;
        if (len < 11) {
            return 4;
        }
        q = (uint8_t *)&wa;
        q[0] = p[0];
        q[1] = p[1];
        q[2] = p[2];
        q[3] = p[3];
        q = (uint8_t *)&hb;
        q[0] = p[4];
        q[1] = p[5];
        q = (uint8_t *)&wc;
        q[0] = p[6];
        q[1] = p[7];
        q[2] = p[8];
        q[3] = p[9];
        p += 10;
        len -= 10;
        m = wc;
        wc = (m << 24) & 0xff000000u;
        wc |= (m << 8) & 0x00ff0000u;
        wc |= (m >> 8) & 0x0000ff00u;
        wc |= m >> 24;
        r2 = func_ov001_02186e30(p, len);
        if (r2 == -1) {
            return 4;
        }
        c->fp(c, start, wa, hb, wc, p, c->val);
        p += r2;
        len -= r2;
    }
    if (flag != 0) {
        c->fp(c, 0, 0, 0, 0, 0, c->val);
    }
    return 0;
}
