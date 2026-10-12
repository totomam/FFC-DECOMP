#include "ffc/types.h"

typedef struct {
    uint8_t *buf;
    uint32_t pad4;
    uint32_t end;
    uint32_t off;
} Ctx;

extern int32_t func_ov001_02178364(uint32_t a, uint32_t b, uint8_t *p, int32_t len, uint32_t *out, int32_t *n, uint32_t x);
extern void func_02090398(uint8_t *dst, uint8_t *src, int32_t len);

int32_t func_ov001_02178678(uint32_t a, uint32_t b, Ctx *c, uint32_t *d, int32_t flag, uint32_t x)
{
    uint8_t *base = c->buf;
    uint32_t end = c->end;
    uint32_t off = c->off;
    int32_t total;
    int32_t rem = end - off;
    total = 0;
    int32_t ret;
    uint32_t out;
    int32_t n;

    if (rem == 0) {
        return total;
    }
    do {
        ret = func_ov001_02178364(a, b, base + (off + total), rem, &out, &n, x);
        if (ret != 0) {
            return ret;
        }
        if (n != 0) {
            total += n;
            rem -= n;
        }
    } while (n != 0 && rem != 0);

    if (flag != 0) {
        if (total > 0) {
            func_02090398(base, base + total, rem + 1);
            end -= total;
        }
    } else {
        off += total;
    }
    c->end = end;
    c->off = off;
    if (d != 0) {
        *d = out;
    }
    return 0;
}
