/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" {
extern void func_0201e954(uint32_t a, uint32_t b, void *c);
extern uint32_t func_02036cd8(const void *object);
extern void func_ov005_02197684(void *a, void *b, uint32_t c);
extern void func_ov010_021bf39c(void *p, void *q, uint32_t flag);
extern uint32_t data_020b93b8;

void func_ov010_021beb20(uint8_t *p)
{
    uint32_t i;
    uint32_t val;
    uint32_t obj[4];
    uint8_t flag;
    uint32_t tab[4];
    uint32_t off = 0x12 << 4;
    uint32_t c0;

    c0 = *(uint32_t *)(p + off);
    *(uint32_t *)(p + off) = diff(c0, c0);
    tab[0] = off - 4;
    tab[1] = off + 4;
    tab[2] = (uint32_t)(p + off);
    tab[3] = off - 4;
    for (i = 0; i < 0x40; i++) {
        func_0201e954(data_020b93b8, i, obj);
        if (func_02036cd8(obj) != 0) {
            func_ov005_02197684(&val, obj, 1);
            if (*(uint32_t *)tab[2] < *(uint32_t *)(p + tab[1])) {
                uint32_t n = *(uint32_t *)tab[2];
                *(uint32_t *)tab[2] = n + 1;
                ((uint32_t *)(*(uint8_t **)(p + tab[0])))[n] = val;
            } else {
                flag = 0;
                func_ov010_021bf39c(p + tab[0], &val, flag);
            }
        }
    }
    if (*(uint32_t *)(p + off) == 0) {
        *(uint32_t *)(p + 0xfc) = 0;
    } else {
        *(uint32_t *)(p + 0xfc) = (*(uint32_t *)(p + off) - 1) >> 3;
    }
}
}
