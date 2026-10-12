#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint8_t flag;
} FfcCtx;

extern void *data_020b8e44;
extern void func_02016074(void *dst, const void *src, uint32_t n);
extern void *func_02052d90(uint32_t a, uint32_t b);
extern void *func_ov002_021d2aa0(const void *p3, uint32_t idx);
extern uint32_t func_ov002_021a1868(uint32_t a, uint32_t b);
extern uint32_t func_ov002_02198700(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021aa850(uint32_t obj);
extern uint32_t func_ov002_021ac8d8(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021aa780(uint32_t obj);
extern uint32_t func_ov002_021a38c4(uint32_t a, uint32_t b);
extern uint32_t func_0208f694(int32_t v);
extern uint32_t func_ov002_021a3ac0(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov002_021a16ec(uint32_t a);
extern uint8_t func_ov002_021aab4c(uint32_t a);
extern uint32_t func_ov002_021ac8f4(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *p);

void func_ov002_021cb870(uint8_t *p0, uint32_t *p1, uint32_t p2, uint32_t *p3)
{
    uint32_t v;
    uint32_t h;
    uint32_t x;
    int32_t k;
    uint32_t j;
    uint32_t *obj;
    uint32_t i;
    uint32_t s;
    uint8_t *base;
    uint8_t *list;
    int32_t val;
    FfcCtx ctx;

    func_02016074(&ctx, data_020b8e44, 12);
    base = (uint8_t *)func_02052d90(ctx.w1, ctx.w2);

    for (k = 0; k < 3; k++) {
        if (p1[k] == 0) {
            continue;
        }
        list = base + *(uint32_t *)(base + *(uint32_t *)(base + 8) + (p1[k] - 1) * 4);

        for (j = 0; j < p3[1]; j++) {
            obj = (uint32_t *)func_ov002_021d2aa0(p3, j);
            uint32_t a = func_ov002_021a1868(p2, obj[0]);
            uint32_t b = func_ov002_02198700(*(uint32_t *)(p0 + 0xbc), obj[1]);

            for (i = 0; i < *(uint32_t *)list; i++) {
                uint8_t *items = list + *(uint32_t *)(list + 4);
                uint16_t type = *(uint16_t *)(items + i * 4);
                val = *(int16_t *)(items + i * 4 + 2);

                switch (type) {
                case 1:
                case 2:
                case 3:
                    x = func_ov002_021aa850(a);
                    if (x == func_ov002_021aa850(b)) {
                        break;
                    }
                    uint32_t m = type - 1;
                    if (m == func_ov002_021ac8d8(a, b)) {
                        obj[8] += val;
                    }
                    break;
                case 4:
                case 5:
                case 6:
                case 7:
                    if (p2 == func_ov002_021aa850(b)) {
                        break;
                    }
                    s = type - 4;

                    uint32_t t;
                    if (obj[4] == 0) {
                        t = func_ov002_021aa780(a);
                    } else {
                        uint32_t f = 0;
                        if ((int32_t)obj[4] <= 0) {
                            f = 1;
                        }
                        uint32_t w = func_ov002_021a38c4(p2, f);
                        h = func_0208f694(obj[4]);
                        t = func_ov002_021a3ac0(func_ov002_021aa780(a), w, h);
                    }
                    v = func_ov002_021a16ec(p2);
                    if (s == func_ov002_021ac8f4(t, v, func_ov002_021aab4c(a), b)) {
                        obj[8] += val;
                    }
                    break;
                default:
                    break;
                }
            }
        }
    }

    {
        FfcCtx *c = &ctx;
        if (c->w1 != 0) {
            if (c->flag != 0) {
                func_02052d3c(c->w1, c->w2);
            }
            func_02052c04(c->w1);
        }
        func_02053290(c);
    }
}
