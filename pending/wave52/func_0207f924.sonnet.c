#include "ffc/types.h"

extern void func_02084b2c(void *dst, int val, uint32_t n);
extern int func_0207f6bc(void *p, uint32_t a1, uint32_t a2, uint32_t *v, int flag);
extern int func_0207ef1c(uint32_t *ctx, uint32_t *rng, uint32_t n);
extern int func_0207fc28(void *p, uint32_t x);

int func_0207f924(void *p, uint32_t a1, uint32_t a2, uint32_t *out)
{
    uint32_t v = 0;
    uint32_t rng[2];
    uint32_t ctx[2];
    uint32_t *tbl;
    int st = 5;
    uint32_t flag = 1;

    func_02084b2c(out, 0, 0x54);

    if (func_0207f6bc(p, a1, a2, &v, flag) == 0) {
        flag += 0xff;
        out[0] = flag;
        out[0x14] = v;
        st = 0;
    } else if (func_0207f6bc(p, a1, a2, &v, 0) == 0) {
        out[0] = 0;
        out[0x14] = v;
        out[0x13] = 0;
        tbl = *(uint32_t **)((uint8_t *)p + 0x20);
        if ((v << 3) < tbl[2]) {
            ctx[0] = (uint32_t)p;
            ctx[1] = tbl[1] + (v << 3);
            st = 8;
            if (func_0207ef1c(ctx, rng, 8) == 0) {
                out[0x13] = rng[1] - rng[0];
                if (func_0207fc28(p, rng[0]) != 0) {
                    out[0] |= st << 7;
                }
            }
        }
        if (st == 8 && 0) {}
        st = 0;
    }
    out[0] |= 0x200;
    return st;
}
