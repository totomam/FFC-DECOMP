/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void *func_02052d90(void *mar, uint32_t index);
void func_0200d5d4(void *object, const void *src, uint8_t flag);
void func_ov005_021961ac(void *obj, uint8_t value);
}

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};
inline int diff(const Num &a, int b) { return a.v - b; }

struct Vec {
    uint32_t *data;
    uint32_t size;
    uint32_t cap;
    uint32_t x;
    inline void push(const uint32_t &v) {
        if (size < cap) {
            data[size++] = v;
        } else {
            uint8_t f = 0;
            func_0200d5d4(this, &v, f);
        }
    }
};

struct Obj {
    uint8_t pad0[0xBC];
    void *mar;
    uint32_t idx;
    uint8_t pad1[0xFC - 0xC4];
    void *p;
    uint8_t pad2[0x108 - 0x100];
    Vec vec;
    uint32_t pad3;
    uint32_t cnt;
};

extern "C" void func_ov008_021a4844(Obj *a)
{
    uint8_t i;
    uint32_t n = a->vec.size;
    a->vec.size = diff(n, n);
    i = 0;
    if (*(uint32_t *)((uint8_t *)func_02052d90(a->mar, a->idx) + 8) > 0) {
        do {
            uint8_t *x = (uint8_t *)func_02052d90(a->mar, a->idx);
            uint32_t val = *(uint16_t *)(x + *(uint32_t *)(x + 0xC) + i * 4);
            a->vec.push(val);
            i = (uint8_t)(i + 1);
        } while (i < *(uint32_t *)((uint8_t *)func_02052d90(a->mar, a->idx) + 8));
    }
    uint32_t sz = a->vec.size;
    a->vec.x = 0;
    if (sz != 0) a->vec.x = (sz - 1) >> 3;
    func_ov005_021961ac(a->p, (uint8_t)(a->cnt + 1));
}
