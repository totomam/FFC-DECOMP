#include "ffc/types.h"

extern int32_t func_0209a76c(int32_t a, int32_t b);
extern void func_0201e8e0(void *out, int32_t idx);
extern void func_0201d3a8(int32_t a, int32_t b, void *c, void *d, void *e, void *f, void *g);
extern void func_02056858(void *p);

typedef struct {
    uint8_t *base;
    int32_t count;
} Arr;

typedef struct {
    uint8_t *begin;
    int32_t *pcount;
    int32_t count;
    int32_t zero;
    uint8_t *keep;
} Iter;

void func_0201d344(int32_t a, int32_t b, int32_t c, int32_t d)
{
    Arr arr;
    Iter it;
    int32_t idx;
    uint8_t *end;
    uint8_t *base;
    int32_t n;

    idx = func_0209a76c(b - a, 0x18);
    if (idx <= 0x14) {
        idx = 0;
    }
    func_0201e8e0(&arr, idx);
    base = arr.base;
    n = arr.count;
    it.zero = 0;
    it.count = n;
    end = base + n * 0x18;
    it.keep = base;
    it.begin = base;
    it.pcount = &it.count;
    func_0201d3a8(a, b, it.begin, it.pcount, end, &it.count, &c);
    func_02056858(it.keep);
}
