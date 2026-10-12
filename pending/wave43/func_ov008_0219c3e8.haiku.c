/* cflags: -lang c++ */
#include "ffc/types.h"

struct S {
    uint8_t pad[0xec];
    uint32_t *arr;
    uint32_t cnt;
    uint32_t cap;
    uint8_t pad2[0x106 - 0xf8];
    uint8_t flag;
};

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};

inline int diff(const Num &a, int b) { return a.v - b; }

extern "C" {
extern void *data_020b93b8;
void func_0201e954(void *obj, uint32_t i, void *out);
uint32_t func_02036cd8(const void *object);
void func_ov005_02197684(void *a, void *b, uint32_t c);
void func_ov008_0219a878(void *a, void *b, uint32_t c);

void func_ov008_0219c3e8(struct S *p)
{
    uint32_t tmp8;
    uint32_t tmp12;
    uint8_t b;
    int i;

    int n = p->cnt;
    p->cnt = diff(n, n);
    for (i = 0; i < 0x40; i++) {
        func_0201e954(data_020b93b8, i, &tmp12);
        if (func_02036cd8(&tmp12) != 0) {
            func_ov005_02197684(&tmp8, &tmp12, 1);
            if (p->cnt < p->cap) {
                p->arr[p->cnt++] = tmp8;
            } else {
                b = 0;
                func_ov008_0219a878(&p->arr, &tmp8, b);
            }
        }
    }
    if (p->cnt == 0) {
        p->flag = 0;
    } else {
        p->flag = (uint8_t)((p->cnt - 1) >> 3);
    }
}
}
