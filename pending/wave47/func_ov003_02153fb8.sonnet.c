#include "ffc/types.h"

extern void *func_02052d90(uint32_t mar, uint32_t index);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    int64_t x;
    int64_t y;
} Vec64;

uint32_t func_ov003_02153fb8(uint8_t *p, Pair v)
{
    uint32_t i;
    uint32_t count;
    uint8_t *m;
    uint8_t *rec;
    uint8_t *tbl;
    Vec64 d;
    uint64_t sum;
    uint32_t t[4];
    Pair *pv;
    Pair sa, sb, sc;
    pv = &v;

    m = (uint8_t *)func_02052d90(*(uint32_t *)(p + 0xe4), *(uint32_t *)(p + 0xe8));
    count = *(uint32_t *)(m + 0x60);
    if (count <= 1) {
        return 0;
    }
    i = 1;
    for (;;) {
        m = (uint8_t *)func_02052d90(*(uint32_t *)(p + 0xe4), *(uint32_t *)(p + 0xe8));
        tbl = m + *(uint32_t *)(m + 0x64);
        rec = m + *(uint32_t *)(tbl + (i << 2));
        t[0] = *(uint32_t *)(rec + 8);
        t[1] = *(uint32_t *)(rec + 0xc);
        t[2] = *(uint32_t *)(rec + 4);
        t[3] = 0;
        sa.a=t[0]; sa.b=t[1]; sb=sa; sc.a=t[0]<<12; sc.b=t[1]<<12;
        d.x = (int32_t)((sc.b) - pv->b);
        d.y = (int32_t)(sc.a - pv->a);
        sum = func_0209a71c(d.x, d.x) + 0x1000 + func_0209a71c(d.y, d.y);
        *(volatile uint16_t *)0x040002b0 = 1;
        *(volatile uint64_t *)0x040002b8 = sum;
        while (*(volatile uint16_t *)0x040002b0 & 0x8000) {
        }
        if ((int32_t)*(volatile uint32_t *)0x040002b4 <= (int32_t)(t[2] << 12)) {
            return i;
        }
        i++;
        m = (uint8_t *)func_02052d90(*(uint32_t *)(p + 0xe4), *(uint32_t *)(p + 0xe8));
        count = *(uint32_t *)(m + 0x60);
        if (!(i < count)) {
            break;
        }
    }
    return 0;
}
