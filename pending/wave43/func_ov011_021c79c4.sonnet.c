/* cflags: -lang c++ */
#include "ffc/types.h"
struct S { uint8_t a; uint8_t b; };
extern "C" {
extern uint8_t func_02036360(const void *object);
extern void func_0200d5d4(void *object, uint32_t *i, S v);
}
struct Num {
    uint32_t v;
    Num(uint32_t x) : v(x) {}
    ~Num() {}
};
inline uint32_t diff(const Num &a, uint32_t b) { return a.v - b; }
struct Item { uint8_t d[0x60]; };
struct Obj {
    uint8_t pad[0x124];
    uint32_t *arr;
    uint32_t cnt;
    uint32_t cap;
    uint8_t pad2[0x10];
    Item items[5];
    uint8_t pad3[0x336 - 0x140 - 0x1e0];
    uint8_t flag;
};
extern "C" void func_ov011_021c79c4(Obj *p)
{
    uint32_t i;
    uint32_t n = p->cnt;
    p->cnt = diff(n, n);
    for (i = 0; i < 5; i++) {
        if (!p->flag || func_02036360(&p->items[i])) {
            if (p->cnt < p->cap) {
                p->arr[p->cnt++] = i;
            } else {
                S s; s.b = 0;
                func_0200d5d4(&p->arr, &i, s);
            }
        }
    }
}
