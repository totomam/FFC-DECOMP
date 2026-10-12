#include "ffc/types.h"

extern void func_02083ce4(void *a, const void *b, uint32_t n);
extern void func_02083c10(void *a, uint32_t b, uint32_t n);
extern void func_02084ca4(void *a, const void *b, uint32_t n);
extern uint8_t data_020a5d44[];
extern uint8_t data_020a5d45[];

typedef struct {
    uint32_t w[5];
    uint8_t pad[0x54 - 0x14];
    uint32_t f54;
    uint32_t f58;
    uint32_t f5c;
} S;

#define BSWAP(x, m) ((((x) << 24) & (m)) | ((((x) << 8) & ((m) >> 8)) | ((((x) >> 8) & ((m) >> 16)) | ((uint8_t)((x) >> 24)))))

void func_02083d68(S *s, const void *src)
{
    uint32_t buf[2];
    uint32_t a;
    uint32_t b;
    uint32_t n;
    uint32_t m;
    uint32_t t;

    t = s->f58;
    a = (t << 9) + (s->f54 << 3);
    m = 0xff000000u;
    buf[1] = BSWAP(a, m);
    b = (s->f5c << 9) + (t >> 23);
    buf[0] = BSWAP(b, m);

    func_02083ce4(s, data_020a5d44, 1);

    n = 0x40 - s->f54;
    if (n < 8) {
        func_02083ce4(s, data_020a5d45, n);
    }

    func_02083c10(s, 0, 0x38 - s->f54);
    func_02083ce4(s, buf, 8);

    s->w[0] = BSWAP(s->w[0], m);
    s->w[1] = BSWAP(s->w[1], m);
    s->w[2] = BSWAP(s->w[2], m);
    s->w[3] = BSWAP(s->w[3], m);
    s->w[4] = BSWAP(s->w[4], m);

    func_02084ca4(s, src, 0x14);
}
