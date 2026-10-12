#include "ffc/types.h"

struct Ctx {
    uint8_t *buf;
    int cap;
    int len;
};

extern void func_02084b2c(void *dst, int val, uint32_t n);
extern uint8_t *func_02092b00(uint8_t *text, const void *pat);
extern uint32_t func_02092864(const uint8_t *text);
extern int func_ov000_02156e48(uint8_t *base, struct Ctx *ctx, const uint8_t *key, uint8_t *p);
extern int func_02092a04(uint8_t *text, const void *pat, uint32_t n);
extern const uint8_t data_ov000_02169de0[];
extern const uint8_t data_ov000_02169ec0[];
extern const uint8_t data_ov000_02169ec4[];
extern const uint8_t data_ov000_02169ed0[];
extern const uint8_t data_ov000_02169e10[];
extern const uint8_t data_ov000_02169ed4[];
extern const uint8_t data_ov000_02169ed8[];
extern const uint8_t data_ov000_02169edc[];

int func_ov000_02156f0c(uint8_t *base, int flag)
{
    int qch;
    int sv;
    uint8_t *sec;
    uint8_t *end;
    uint8_t *p;
    int fch;
    struct Ctx ctx;
    uint8_t *text, *f, *q, *r, *b, *c, *g;


    ctx.buf = base + 0x1a74;
    ctx.cap = 0x20;
    ctx.len = 0;
    func_02084b2c(ctx.buf, 0, 0x100);

    text = *(uint8_t **)(base + 0x1a44);
    sec = func_02092b00(text, data_ov000_02169de0);
    if (sec == 0) {
        return 0;
    }
    end = sec + 4 + func_02092864(sec + 4);

    f = func_02092b00(text, data_ov000_02169ec0);
    if (f == 0) {
        return 0;
    }
    p = f + 1;
    fch = (int8_t)p[3];
    p[3] = 0;
    if (func_ov000_02156e48(base, &ctx, data_ov000_02169ec4, p) != 1) {
        p[3] = (uint8_t)fch;
        return 0;
    }
    p[3] = (uint8_t)fch;

    if (flag == 1 || func_02092a04(p, data_ov000_02169ed0, 3) != 0) {
        return 1;
    }

    c = func_02092b00(p + 4, data_ov000_02169e10);
    if (c == 0) {
        return 0;
    }
    c = c + 2;

    while (!((int8_t)c[0] == 13 || (int8_t)c[1] == 10)) {
        q = func_02092b00(c, data_ov000_02169ed4);
        if (q == 0) {
            break;
        }
        qch = (int8_t)q[0];
        r = q + 2;
        q[0] = 0;
        b = func_02092b00(r, data_ov000_02169e10);
        if (b == 0) {
            q[0] = (uint8_t)qch;
            break;
        }
        sv = (int8_t)b[0];
        b[0] = 0;
        if (func_ov000_02156e48(base, &ctx, c, r) != 1) {
            q[0] = (uint8_t)qch;
            b[0] = (uint8_t)sv;
            return 0;
        }
        c = r + func_02092864(r) + 2;
        q[0] = (uint8_t)qch;
        b[0] = (uint8_t)sv;
    }

    p = sec + 4;
    while (p < end) {
        f = func_02092b00(p, data_ov000_02169ed8);
        if (f == 0) {
            break;
        }
        fch = (int8_t)f[0];
        f[0] = 0;
        r = f + 1;
        g = func_02092b00(r, data_ov000_02169edc);
        if (g == 0) {
            g = func_02092b00(r, data_ov000_02169e10);
        }
        if (g != 0) {
            sv = (int8_t)g[0];
            g[0] = 0;
        }
        if (func_ov000_02156e48(base, &ctx, p, r) != 1) {
            f[0] = (uint8_t)fch;
            if (g != 0) {
                g[0] = (uint8_t)sv;
            }
            return 0;
        }
        q = r + func_02092864(r) + 1;
        f[0] = (uint8_t)fch;
        if (g != 0) {
            g[0] = (uint8_t)sv;
        }
        p = q;
    }
    return 1;
}
