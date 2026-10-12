#include "ffc/types.h"

struct Stream {
    int32_t a[9];
    uint8_t *cur;
    int32_t left;
};

struct Ctx {
    uint32_t pad[7];
    struct Stream *st;
    int32_t lim;
};

extern int32_t data_020b31c8[];
extern int32_t data_020b31d0;
extern int func_0208f758(struct Stream *s);
extern int func_0208f800(uint8_t b, struct Stream *s);

int func_02098284(struct Ctx *c, int32_t flag)
{
    int32_t n;
    uint8_t buf[12];
    int32_t i;
    int32_t r;
    int32_t left;
    uint16_t h;

    {
        int32_t *pn = (data_020b31c8[2] < c->lim) ? &c->lim : &data_020b31d0;
        n = *pn;
    }

    for (i = 0; i < n; i++) {
        left = c->st->left;
        c->st->left = left - 1;
        if (left != 0) {
            uint8_t *p = c->st->cur;
            c->st->cur = p + 1;
            r = *p;
        } else {
            r = func_0208f758(c->st);
        }
        if (r == -1) {
            return 0xffff;
        }
        buf[i] = (uint8_t)r;
    }

    h = *(uint16_t *)buf;

    if (flag == 0 && n > 0) {
        do {
            n--;
            if (func_0208f800(buf[n], c->st) == -1) {
                return 0xffff;
            }
        } while (n > 0);
    }
    return h;
}
