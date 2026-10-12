#include "ffc/types.h"

extern int func_ov001_02187288(void *p, int a, int b, int c, int d);
extern int func_ov001_02187214(void *p, uint8_t *buf, int n, uint8_t *buf2);
extern int func_ov000_0216551c(void *obj, int a, int b, int c);

typedef struct { int32_t state; uint8_t pad[0x6b4 - 4]; void *obj; } Ctx;
typedef struct {
    uint8_t h[2];
    uint8_t h2[2];
    uint8_t tag;
    uint8_t a[4];
    uint8_t b[2];
    uint8_t pad[9];
} Msg;

int func_ov001_0218821c(void *p, uint32_t a, uint16_t b, int c, uint32_t x)
{
    int ret = c;
    Ctx *ctx = (Ctx *)p;
    Msg m;
    uint16_t v;
    uint16_t sw;
    int res;
    if (ctx->state == 1) {
        func_ov001_02187288(p, 0, 0, 2, 0);
    }
    if (ctx->state == 1) {
        return 3;
    }

    v = (uint16_t)(x + 9);
    sw = (uint16_t)(((v >> 8) & 0xff) | ((v << 8) & 0xff00));
    *(uint16_t *)m.h = sw;
    { uint8_t *s0 = m.h; uint8_t *d0 = m.h2; d0[0] = s0[0]; d0[1] = s0[1]; }
    m.tag = 2;
    {
        uint8_t *pa, *pb;
        uint8_t *da = &m.tag + 1;
        uint8_t *db = &m.a[3] + 1;
        pa = (uint8_t *)&a;
        da[0] = pa[0];
        da[1] = pa[1];
        da[2] = pa[2];
        da[3] = pa[3];
        pb = (uint8_t *)&b;
        db[0] = pb[0];
        db[1] = pb[1];
    }

    res = func_ov001_02187214(p, m.h2, 9, m.b);
    if (res != 0) {
        return res;
    }
    {
        res = func_ov000_0216551c(ctx->obj, ret, x, 0);
        ret = 0;
        if (res < 0) {
            ret = 3;
        }
    }
    return ret;
}
