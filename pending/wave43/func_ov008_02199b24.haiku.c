/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
extern void *data_020b93b8;
extern int func_0201e954(void *a, uint32_t b, void *c);
extern int func_02036cd8(const void *object);
extern void func_ov005_02197684(void *a, const void *b, uint32_t c);
extern void func_ov008_0219a878(void *a, const void *b, uint32_t c);
}

struct Num {
    uint32_t v;
    Num(uint32_t x) : v(x) {}
    ~Num() {}
};
inline uint32_t diff(const Num &a, uint32_t b) { return a.v - b; }

typedef struct Obj {
    uint8_t pad0[0xf0];
    uint32_t *f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t pad1[0x141 - 0xfc];
    uint8_t f141;
} Obj;

extern "C" void func_ov008_02199b24(Obj *p)
{
    uint32_t i;
    uint32_t v;
    uint32_t x;
    uint8_t flag;
    uint32_t *cnt;
    volatile uint32_t *vf;
    uint32_t first;

    vf = &p->f4;
    first = *vf;
    p->f4 = diff(*vf, first);
    cnt = &p->f4;
    for (i = 0; i < 0x40; i++) {
        func_0201e954(data_020b93b8, i, &v);
        if (func_02036cd8(&v) != 0) {
            func_ov005_02197684(&x, &v, 1);
            if (p->f4 < p->f8) {
                p->f0[(*cnt)++] = x;
            } else {
                flag = 0;
                func_ov008_0219a878(&p->f0, &x, flag);
            }
        }
    }
    if (p->f4 != 0) {
        p->f141 = (p->f4 - 1) >> 3;
    } else {
        p->f141 = 0;
    }
}
