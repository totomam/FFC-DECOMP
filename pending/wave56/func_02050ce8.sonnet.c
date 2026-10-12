#include "ffc/types.h"

typedef struct { uint32_t w[5]; } Elem;
typedef struct { Elem *data; int32_t size; int32_t cap; int32_t *pcap; int32_t cnt; } Vec;
typedef struct { uint8_t c; } Al;

extern int32_t func_02050c68(Vec *v, int32_t x);
extern void func_02050ddc(Vec *tmp, int32_t a, Al b);
extern void func_02050dcc(Vec *tmp);

void func_02050ce8(Vec *v, int32_t n, Elem *src) {
    Al al;
    Vec tmp;
    int32_t t;
    Elem *d;
    Elem *end;
    Elem *dst;
    Elem *dd;

    al.c = 0;
    tmp.data = 0;
    tmp.size = 0;
    tmp.cap = 0;
    tmp.cnt = 0;
    tmp.pcap = &v->cap;
    func_02050ddc(&tmp, func_02050c68(v, v->size + n - v->cap), al);
    tmp.cnt = v->size;
    dd = tmp.data + tmp.size + v->size;
    {
        int32_t k = n;
        if (n != 0) {
            do {
                if (dd) *dd = *src;
                dd++;
                src++;
            } while (--k != 0);
        }
    }
    tmp.size += n;
    end = v->data + v->size;
    dst = tmp.data + tmp.cnt;
    while (end > v->data) {
        end--;
        dst--;
        if (dst) *dst = *end;
        tmp.cnt--;
        tmp.size++;
    }
    v->size = 0;
    t = tmp.cap;
    tmp.cap = v->cap;
    v->cap = t;
    d = v->data;
    v->data = tmp.data;
    tmp.data = d;
    v->size = tmp.size;
    tmp.size = 0;
    func_02050dcc(&tmp);
}
