/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_0201ed30(uint32_t a, uint32_t b, uint32_t c, void *d);
uint32_t func_02036cd8(const void *object);
void func_ov005_02197684(void *a, void *b, uint32_t c);
void func_ov008_0219a878(void *a, void *b, uint32_t c);
extern uint32_t data_020b93b8;
void func_ov008_0219b03c(void *q);
}

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

struct Obj {
    uint8_t pad0[0xe0];
    uint32_t *arr;
    uint32_t cnt;
    uint32_t cap;
    uint8_t pad1[0x118 - 0xec];
    uint32_t f118;
};

void func_ov008_0219b03c(void *q)
{
    Obj *p = (Obj *)q;
    uint32_t local[6];
    uint32_t out;
    uint8_t i;

    volatile uint32_t *vc = &p->cnt; int n = *vc;
    p->cnt = diff(*vc, n);

    for (i = 0; i < 8; i++) {
        func_0201ed30(data_020b93b8, p->f118, i, local);
        if (func_02036cd8(local)) {
            func_ov005_02197684(&out, local, 1);
            if (p->cnt < p->cap) {
                p->arr[p->cnt++] = out;
            } else {
                uint8_t flag = 0;
                func_ov008_0219a878(&p->arr, &out, flag);
            }
        }
    }
}
