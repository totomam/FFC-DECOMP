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
    sw = (uint16_t)(((v << 8) & 0xff00) | ((v >> 8) & 0xff));
    *(uint16_t *)m.h = sw;
    m.h2[0] = m.h[0];
    m.h2[1] = m.h[1];
    m.tag = 2;
    {
        uint8_t *pa = (uint8_t *)&a;
        uint8_t *pb = (uint8_t *)&b;
        m.a[0] = pa[0];
        m.a[1] = pa[1];
        m.a[2] = pa[2];
        m.a[3] = pa[3];
        m.b[0] = pb[0];
        m.b[1] = pb[1];
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
