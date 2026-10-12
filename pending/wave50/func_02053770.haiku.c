/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { uint32_t v; Num(uint32_t x) : v(x) {} ~Num() {} };
inline uint32_t diff(const Num &a, uint32_t b) { return a.v - b; }

struct Item { uint32_t a, b, c, d; };
struct Queue { Item *buf; uint32_t count; uint32_t cap; };

extern "C" {
void func_02053d60(void *object, void *item, uint8_t flag);

void func_02053770(Queue *q, Item it) {
    uint32_t n = q->count;
    q->count = diff(n, n);
    if (q->count < q->cap) {
        Item *p = q->buf + q->count;
        if (p) {
            p->a = it.a;
            p->b = it.b;
            p->c = it.c;
            p->d = it.d;
        }
        q->count = q->count + 1;
    } else {
        volatile uint8_t flag = 0;
        func_02053d60(q, &it, flag);
    }
}
}
