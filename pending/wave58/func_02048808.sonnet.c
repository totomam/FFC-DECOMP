#include "ffc/types.h"

typedef struct {
    uint32_t flags;
    uint32_t size;
    char *heap;
} Str;

typedef struct { uint8_t a:1; uint8_t sz:7; } Flag2;
typedef struct {
    uint32_t big : 1;
    uint32_t rest : 31;
} Flag;

extern void func_02091a24(const void *msg);
extern uint32_t func_0208f42c(void);
extern char *func_0205681c(uint32_t n);
extern void func_02056844(void *p);
extern void func_02090380(void *dst, const void *src, uint32_t len);
extern void func_02090398(void *dst, const void *src, uint32_t len);
extern void *func_020903cc(void *dst, int c, uint32_t len);
extern const int8_t data_020af6cc[];
extern const char data_020afd20[];
extern const char data_020afd3c[];
extern const char data_020a7e14[];

Str *func_02048808(Str *s, uint32_t pos, uint32_t n1in, uint32_t n2, uint8_t c)
{
    uint32_t isLarge;
    if (((Flag *)s)->big) {
        isLarge = 1u;
    } else {
        isLarge = 0u;
    }
    uint32_t rem;
    char *base;
    uint32_t size;
    uint32_t cap;
    uint32_t n1;
    uint32_t newsize;
    uint32_t tail;

    if (!isLarge) {
        base = (char *)s + 1;
        size = ((Flag2 *)s)->sz;
        cap = 11;
    } else {
        base = s->heap;
        size = s->size;
        cap = s->flags >> 1;
    }

    if (pos > size) {
        func_02091a24(data_020afd20);
        func_0208f42c();
    }

    rem = size - pos;
    { const uint32_t *pp = (rem < n1in) ? &rem : &n1in; n1 = *pp; }

    if (n2 > 0x7ffffffe || (size - n1) > (0x7ffffffe - n2)) {
        func_02091a24(data_020afd3c);
        func_0208f42c();
    }

    newsize = size - n1 + n2;
    tail = size - (pos + n1);

    if (newsize >= cap) {
        uint32_t nc = (cap + 15) & ~15u;
        char *nb;

        while (nc < newsize + 1) {
            nc = ((nc << 1) + 15) & ~15u;
        }

        nb = func_0205681c(nc);
        if (nb == 0) {
            func_02091a24(data_020a7e14);
            func_0208f42c();
        }

        if (pos != 0) {
            func_02090380(nb, base, pos);
        }
        char *np = nb + pos;
        func_020903cc(np, c, n2);
        if (tail != 0) {
            func_02090380(np + n2, base + pos + n1, tail);
        }
        nb[newsize] = data_020af6cc[1];

        if (isLarge) {
            func_02056844(base);
        } else {
            ((Flag *)s)->big = 1;
        }
        s->heap = nb;
        s->size = newsize;
        ((Flag *)s)->rest = nc;
    } else {
        if (tail != 0) {
            func_02090398(base + pos + n2, base + pos + n1, tail);
        }
        func_020903cc(base + pos, c, n2);
        base[newsize] = data_020af6cc[2];
        if (!isLarge) {
            ((Flag2 *)s)->sz = newsize;
        } else {
            s->size = newsize;
        }
    }

    return s;
}
