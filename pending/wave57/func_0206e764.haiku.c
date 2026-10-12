#include "ffc/types.h"

typedef struct {
    int8_t *buf;
    uint32_t head;
    uint32_t size;
} Ring;

extern uint32_t func_0206f250(Ring *r, uint32_t n);
extern void func_02090398(int8_t *dst, int8_t *src, uint32_t n);
extern void func_0206f22c(Ring *r, uint32_t p, uint32_t v);
extern void func_0206f340(Ring *r, int8_t *buf, uint32_t off, uint32_t len, uint32_t size);

void func_0206e764(Ring *r, int8_t *cur, uint8_t *beg, uint32_t unk)
{
    uint8_t *end;
    uint32_t len;
    uint8_t *p;
    int8_t *dst;
    int8_t *wp;
    int32_t d;
    int fits;
    int ok;

    end = *(uint8_t **)(&unk + 1);
    len = end - beg;

    if (len == 0) {
        return;
    }
    fits = 0;
    if (len <= r->size && r->head <= r->size - len) {
        fits = 1;
    }
    ok = 1;
    if (fits == 0) {
        ok = 0;
        func_0206f250(r, r->head + len - r->size);
    }
    if (ok != 0) {
        wp = r->buf + r->head;
        d = wp - cur;
        r->head += len;
        if (d != 0) {
            func_02090398(wp + len - d, cur, d);
        }
        dst = cur;
        for (p = beg; p != end; p++) {
            *dst++ = (int8_t)*p;
        }
    } else {
        uint32_t q;
        uint32_t off = cur - r->buf;
        q = func_0206f250(r, r->head + len - r->size);
        func_0206f22c(r, q, 0);
        dst = cur;
        for (p = beg; p != end; p++) {
            *dst++ = (int8_t)*p;
        }
        func_0206f340(r, r->buf, off, len, r->size);
    }
}
