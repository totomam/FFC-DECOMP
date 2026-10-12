#include "ffc/types.h"

typedef struct { uint32_t w[7]; } Elem;
typedef struct { Elem *data; uint32_t size; uint32_t cap; } Vec;

extern uint32_t func_02068034(Vec *v, uint32_t n);
extern void func_02068394(Vec *t, uint32_t cap, uint32_t x);
extern void func_02068324(Vec *t);

void func_020680b4(Vec *v, uint32_t n, Elem *src)
{
    Vec tmp;
    uint8_t pad[4];
    uint32_t old;
    uint32_t cap;
    uint32_t i;
    uint32_t j;
    Elem *dst;
    Elem *end;
    uint32_t *pc;

    pc = &v->cap;
    tmp.size = 0;
    tmp.cap = 0;
    tmp.data = 0;
    old = v->size;
    pad[0] = 0;
    cap = func_02068034(v, v->size + n - v->cap);
    func_02068394(&tmp, cap, *(uint32_t *)pad);

    dst = tmp.data + old;
    for (i = 0; i < n; i++) {
        if (dst) {
            *dst = *src;
        }
        tmp.size++;
        dst++;
    }

    end = v->data + old;
    j = old;
    while (end > v->data) {
        end--;
        dst = tmp.data + j;
        j--;
        dst--;
        if (dst) {
            *dst = *end;
        }
        tmp.size++;
    }

    v->size = 0;
    cap = v->cap;
    v->cap = tmp.cap;
    tmp.cap = cap;
    dst = v->data;
    v->data = tmp.data;
    tmp.data = dst;
    v->size = tmp.size;
    tmp.size = 0;
    func_02068324(&tmp);
}
