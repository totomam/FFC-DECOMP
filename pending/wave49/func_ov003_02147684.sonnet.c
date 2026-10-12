#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint32_t func_020817c8(int32_t first, int32_t second);
extern int32_t func_ov003_02146574(void *a, uint32_t *b, Pair *c, uint32_t d, uint32_t *e, int32_t f, int32_t g);
extern uint32_t func_0209ab5c(uint32_t v);
extern int32_t func_ov003_0214730c(void *a, uint32_t *pos, uint32_t sz);
extern uint32_t func_0209b108(uint32_t a, uint32_t b);
extern int32_t func_02026c84(void *obj, uint32_t x, uint32_t y, uint32_t *flag);
extern Pair data_ov003_02178df8[8];

int32_t func_ov003_02147684(void *p0, uint32_t *p1, uint32_t p2, uint32_t p3, uint32_t p4)
{
    uint32_t sz;
    uint32_t i, j, k;
    uint32_t flag;
    uint8_t *obj;
    Pair pr;
    uint32_t out;
    uint32_t s, a, b;
    uint32_t x, y, x1, y1, x2, y2;
    uint32_t pos[2];
    uint32_t t[48];

    t[0]=0;
    sz = func_020817c8(p4, 0);
    for (i = 0; i < 8; i++) {
        pr = data_ov003_02178df8[i];
        out = 0;
        if (func_ov003_02146574(p0, p1, &pr, p2, &out, 1, 0) == 0) {
            s = func_0209ab5c(p2) << 12;
            a = func_020817c8(pr.b, s);
            b = func_020817c8(pr.a, s);
            pos[0] = p1[0] + b;
            pos[1] = p1[1] + a;
            if (func_ov003_0214730c(p0, t[0]?t:pos, sz) == 0) {
                return 0;
            }
        }
    }

    obj = 0;
    {
        uint8_t *q = *(uint8_t **)((uint8_t *)p0 + 0x9c);
        if (q) {
            uint8_t *q2 = *(uint8_t **)(q + 0x1e4);
            if (q2) {
                uint8_t *q3 = *(uint8_t **)(q2 + 0x34);
                obj = *(uint8_t **)(q3 + 0x178);
            }
        }
    }
    if (obj == 0) {
        return 0;
    }

    flag = 0;
    for (;;) {
        p2 = func_0209b108(p2, p3);
        for (j = 0; j < 8; j++) {
            pr = data_ov003_02178df8[j];
            s = func_0209ab5c(p2) << 12;
            a = func_020817c8(pr.b, s);
            b = func_020817c8(pr.a, s);
            x = p1[0] + b;
            y = p1[1] + a;
            pos[0] = x;
            pos[1] = y;
            if (func_02026c84(obj, x, y, &flag) == 0) {
                continue;
            }
            if (func_ov003_0214730c(p0, pos, p4) != 0) {
                continue;
            }
            for (k = 0; k < 8; k++) {
                if (k == j) {
                    continue;
                }
                x1 = x + pr.a;
                y1 = y + pr.b;
                if (func_02026c84(obj, x1, y1, &flag) == 0) {
                    continue;
                }
                x2 = x1 + pr.a;
                y2 = y1 + pr.b;
                if (func_02026c84(obj, x2, y2, &flag) == 0) {
                    continue;
                }
                pos[0] = x1;
                pos[1] = y1;
                if (func_ov003_0214730c(p0, pos, p4) != 0) {
                    continue;
                }
                p1[0] = x;
                p1[1] = y;
                return 1;
            }
        }
    }
}
