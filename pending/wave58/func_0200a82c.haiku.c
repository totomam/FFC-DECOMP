#include "ffc/types.h"

typedef struct Str {
    uint32_t hdr;
    uint32_t len;
    uint16_t *ptr;
} Str;

extern void func_02091a24(const void *msg);
extern void func_0208f42c(void);
extern uint16_t *func_0205681c(uint32_t size);
extern void func_02093b7c(void *dst, const void *src, uint32_t count);
extern void func_02090398(void *dst, const void *src, uint32_t bytes);
extern void func_02056844(void *p);
extern void func_0200aa48(Str *out, const void *first, const void *last);
extern void func_02093b88(void *dst, const void *src, uint32_t count);
extern void *func_0200a678(void *object);
extern const char data_020aaf40[];
extern const char data_020aaf5c[];
extern const char data_020aae14[];
extern const uint16_t data_020aaddc[];

Str *func_0200a82c(Str *self, uint32_t pos, uint32_t count, const uint16_t *first, const uint16_t *last)
{
    int flag;
    uint32_t cap;
    uint32_t len;
    uint16_t *data;
    uint32_t rem;
    uint32_t cnt;
    int32_t dn;
    uint32_t newlen;
    uint32_t tail;
    uint32_t alloc;
    uint16_t *nd;
    Str tmp;

    flag = (self->hdr & 1) ? 1 : 0;
    if (flag) {
        cap = self->hdr >> 1;
        data = self->ptr;
        len = self->len;
    } else {
        data = (uint16_t *)((uint8_t *)self + 2);
        len = (((uint8_t *)self)[0] >> 1) & 0x7f;
        cap = 5;
    }

    if (pos > len) {
        func_02091a24(data_020aaf40);
        func_0208f42c();
    }

    rem = len - pos;
    cnt = *(rem < count ? &rem : &count);
    dn = last - first;

    if ((uint32_t)dn > 0x7ffffffe || (len - cnt) > (0x7ffffffe - (uint32_t)dn)) {
        func_02091a24(data_020aaf5c);
        func_0208f42c();
    }

    newlen = (len - cnt) + dn;
    tail = len - (pos + cnt);

    if (newlen >= cap) {
        alloc = (cap + 7) & ~7u;
        if (alloc < newlen + 1) {
            do {
                alloc = ((alloc << 1) + 7) & ~7u;
            } while (alloc < newlen + 1);
        }
        nd = func_0205681c(alloc << 1);
        if (nd == 0) {
            func_02091a24(data_020aae14);
            func_0208f42c();
        }
        if (pos != 0) {
            func_02093b7c(nd, data, pos);
        }
        func_02090398(nd + pos, first, dn * 2);
        if (tail != 0) {
            func_02093b7c(nd + pos + dn, data + pos + cnt, tail);
        }
        nd[newlen] = data_020aaddc[2];
        if (flag) {
            func_02056844(data);
        }
        self->hdr = (alloc << 1) | 1;
        self->ptr = nd;
        self->len = newlen;
        return self;
    }

    tmp.hdr = 0;
    tmp.len = 0;
    tmp.ptr = 0;

    if (tail != 0 && (data + pos + dn) < last && last <= (data + len)) {
        func_0200aa48(&tmp, first, last);
        if (tmp.hdr & 1) {
            first = tmp.ptr;
        } else {
            first = (const uint16_t *)((const uint8_t *)&tmp + 2);
        }
    }

    if (tail != 0) {
        func_02093b88(data + pos + dn, data + pos + cnt, tail);
    }
    func_02093b88(data + pos, first, dn);
    data[newlen] = data_020aaddc[1];

    if (flag) {
        self->len = newlen;
    } else {
        ((uint8_t *)self)[0] = (((uint8_t *)self)[0] & 1) | ((newlen & 0x7f) << 1);
    }
    func_0200a678(&tmp);
    return self;
}
