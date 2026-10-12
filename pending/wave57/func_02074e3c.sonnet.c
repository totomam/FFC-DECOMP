#include "ffc/types.h"

extern void *data_0213e1f8;
extern void func_0208763c(void *p);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern void *func_0205681c(uint32_t n);
extern void *func_02056830(uint32_t n);
extern void func_02023514(void *a, void *b, void *c, void *d);
extern void func_02087678(void *p);

typedef struct {
    void *a;
    void *b;
    void *c;
    void *volatile p1;
    volatile uint8_t f1;
    void *volatile p0;
    volatile uint8_t f0;
} Loc;

void func_02074e3c(uint32_t idx, uint8_t *base, int32_t n)
{
    uint32_t cur;
    uint32_t off;
    Loc s;
    uint32_t t;
    cur = 0;
    uint8_t *p;
    uint8_t *g;
    uint8_t *fp;
    uint8_t *r5;
    uint8_t *r6;
    uint8_t *buf;
    uint32_t l;

    if (n <= 0) {
        return;
    }
    off = idx << 2;
    volatile uint32_t k;
    t = 0x4238;
    k = t;
    t -= 0x80;
    k = t;
    do {
        p = base + cur;
        switch (*p) {
        case 0:
            g = (uint8_t *)data_0213e1f8;
            s.p0 = fp = (uint8_t *)(*(uint32_t *)(g + 0x40) + 0x4238);
            s.f0 = 1;
            if (s.f0) {
                func_0208763c(fp);
            }
            g = (uint8_t *)data_0213e1f8;
            r5 = *(uint8_t **)(off + *(uint32_t *)(g + 0x40) + 0x4138);
            func_02084ca4(p + 4, r5 + 4 + 12 * *(uint16_t *)(r5 + 2), 12);
            *(uint16_t *)(r5 + 2) = (*(uint16_t *)(r5 + 2) + 1) % 256;
            if (s.f0) {
                func_02087678((void *)s.p0);
            }
            break;
        case 1:
            g = (uint8_t *)data_0213e1f8;
            s.p1 = fp = (uint8_t *)(*(uint32_t *)(g + 0x40) + 0x4238);
            s.f1 = 1;
            if (s.f1) {
                func_0208763c(fp);
            }
            g = (uint8_t *)data_0213e1f8;
            r6 = *(uint8_t **)(off + *(uint32_t *)(g + 0x40) + k);
            r5 = func_0205681c(12);
            if (r5 != 0) {
                l = (uint32_t)(*(uint16_t *)(p + 2) - 4);
                *(uint32_t *)(r5 + 4) = l;
                *(uint8_t *)(r5 + 8) = p[1];
                buf = func_02056830(l);
                *(uint8_t **)r5 = buf;
                func_02084ca4(p + 4, buf, l);
            }
            s.a = r6 + 4;
            s.c = r5;
            func_02023514(&s.b, r6, &s.a, &s.c);
            if (s.f1) {
                func_02087678((void *)s.p1);
            }
            break;
        default:
            break;
        }
        cur = (uint16_t)(cur + *(uint16_t *)(p + 2));
    } while ((int32_t)cur < n);
}
