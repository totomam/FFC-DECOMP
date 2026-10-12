/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }

struct Obj {
    uint8_t pad[0xe8];
    uint32_t *arr;   /* 0xe8 */
    uint32_t cnt;    /* 0xec */
    uint32_t max;    /* 0xf0 */
};

extern "C" {
extern void *data_020b93b8;
extern void func_0201e954(void *a, int b, void *c);
extern int func_02036cd8(const void *object);
extern void func_ov005_02197684(void *a, void *b, int c);
struct Fl { uint8_t b; };
extern void func_ov013_021c07cc(void *a, void *b, Fl c);

void func_ov013_021bff04(Obj *p) {
    Fl f;
    uint32_t v;
    uint32_t a;
    int i;
    uint32_t *pc = &p->cnt;
    uint32_t old = *(volatile uint32_t *)&p->cnt;

    *pc = diff(Num(p->cnt), old);
    for (i = 0; i < 0x40; i++) {
        func_0201e954(data_020b93b8, i, &a);
        if (func_02036cd8(&a)) {
            func_ov005_02197684(&v, &a, 1);
            if (p->cnt < p->max) {
                uint32_t n = *pc + 1;
                *pc = n;
                p->arr[n - 1] = v;
            } else {
                f.b = 0;
                func_ov013_021c07cc(&p->arr, &v, f);
            }
        }
    }
    if (p->cnt != 0) {
        *(uint32_t *)((uint8_t *)p + 0x10c) = (p->cnt - 1) >> 3;
    } else {
        *(uint32_t *)((uint8_t *)p + 0x10c) = 0;
    }
}
}
