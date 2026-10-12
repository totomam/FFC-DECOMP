#include "ffc/types.h"

typedef struct { uint32_t w[7]; } Elem;
typedef struct { Elem *data; uint32_t size; uint32_t cap; uint32_t *pcap; uint32_t cnt; } Tmp;
typedef struct { Elem *data; uint32_t size; uint32_t cap; } Vec;

extern uint32_t func_02068034(Vec *v, uint32_t n);
extern void func_02068394(Tmp *t, uint32_t cap, uint32_t x);
extern void func_02068324(Tmp *t);

void func_020680b4(Vec *v, uint32_t n, Elem *src)
{
    Tmp t;
    uint8_t pad[4];
    uint32_t cap;
    uint32_t cur;
    Elem *dst;
    Elem *end;
    Elem *b;

    t.data = 0;
    t.size = 0;
    t.cap = 0;
    t.cnt = 0;
    t.pcap = &v->cap;
    cap = func_02068034(v, v->size + n - v->cap);
    pad[0] = 0;
    func_02068394(&t, cap, *(uint32_t *)pad);
    t.cnt = v->size;
    dst = t.data + v->size + t.size;
    while (n) {
        if (dst) *dst = *src;
        t.size++;
        n--;
        dst++;
    }
    b = v->data;
    end = b + v->size;
    dst = t.data + t.cnt;
    if (end > b) {
        do {
            end--;
            dst--;
            if (dst) *dst = *end;
            t.cnt--;
            t.size++;
        } while (end > b);
    }
    v->size = 0;
    cap = v->cap; v->cap = t.cap; t.cap = cap;
    dst = v->data; v->data = t.data; t.data = dst;
    v->size = t.size;
    t.size = 0;
    func_02068324(&t);
}
