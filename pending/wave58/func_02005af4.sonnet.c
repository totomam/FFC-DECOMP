#include "ffc/types.h"

extern void func_02091a24(const void *msg);
extern uint32_t func_0208f42c(void);
extern void *func_0205681c(uint32_t size);
extern void func_02090380(void *dst, const void *src, uint32_t len);
extern void func_02090398(void *dst, const void *src, uint32_t len);
extern void func_02056844(void *p);
extern void func_02005cf8(void *obj, const void *src, const void *end);
extern void *func_020059cc(void *obj);
extern uint8_t data_020a7e54[];
extern uint8_t data_020a7e70[];
extern uint8_t data_020a7e14[];
extern int8_t data_020a7e10[];

typedef struct {
    uint32_t flag : 1;
    uint32_t cap : 31;
} Hdr;

typedef struct {
    uint8_t flag : 1;
    uint8_t len : 7;
} Hdr8;

void *func_02005af4(void *self, uint32_t pos, uint32_t n, uint8_t *d, ...)
{
    uint8_t *e;
    Hdr *h = (Hdr *)self;
    Hdr8 *h8 = (Hdr8 *)self;
    uint32_t *w = (uint32_t *)self;
    uint32_t heap;
    uint32_t len, cap, cnt, m, newlen, tail, rem;
    uint8_t *data;
    uint8_t *buf;
    uint32_t tmp[3];

    e = *(uint8_t **)((char *)&d + 4);
    heap = h->flag ? 1 : 0;
    if (heap) {
        len = w[1];
        data = (uint8_t *)w[2];
        cap = h->cap;
    } else {
        len = h8->len;
        data = (uint8_t *)self + 1;
        cap = 11;
    }
    if (pos > len) {
        func_02091a24(data_020a7e54);
        func_0208f42c();
    }
    rem = len - pos;
    cnt = (rem < n) ? rem : n;
    m = (uint32_t)(e - d);
    if (m > 0x7ffffffe || (len - cnt) > (0x7ffffffe - m)) {
        func_02091a24(data_020a7e70);
        func_0208f42c();
    }
    newlen = (len - cnt) + m;
    tail = len - (pos + cnt);

    if (newlen < cap) {
        tmp[0] = 0;
        tmp[1] = 0;
        tmp[2] = 0;
        if (tail != 0 && (uint32_t)(data + pos + m) < (uint32_t)e && (uint32_t)e <= (uint32_t)(data + len)) {
            func_02005cf8(tmp, d, e);
            d = (((Hdr *)tmp)->flag) ? (uint8_t *)tmp[2] : (uint8_t *)tmp + 1;
        }
        if (tail != 0) {
            func_02090398(data + pos + m, data + pos + cnt, tail);
        }
        func_02090398(data + pos, d, m);
        data[newlen] = (uint8_t)data_020a7e10[1];
        if (heap) {
            w[1] = newlen;
        } else {
            h8->len = newlen;
        }
        func_020059cc(tmp);
    } else {
        cap = (cap + 15) & ~15u;
        while (cap < newlen + 1) {
            cap = ((cap << 1) + 15) & ~15u;
        }
        buf = (uint8_t *)func_0205681c(cap);
        if (buf == 0) {
            func_02091a24(data_020a7e14);
            func_0208f42c();
        }
        if (pos != 0) {
            func_02090380(buf, data, pos);
        }
        func_02090398(buf + pos, d, m);
        if (tail != 0) {
            func_02090380(buf + pos + m, data + pos + cnt, tail);
        }
        buf[newlen] = (uint8_t)data_020a7e10[0];
        if (heap) {
            func_02056844(data);
        } else {
            h->flag = 1;
        }
        w[2] = (uint32_t)buf;
        w[1] = newlen;
        h->cap = cap;
        h->flag = 1;
    }
    return self;
}
