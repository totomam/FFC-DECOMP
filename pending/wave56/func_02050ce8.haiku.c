#include "ffc/types.h"

typedef struct { uint32_t w[5]; } Elem;
typedef struct { Elem *data; int32_t size; int32_t cap; } Vec;

extern int32_t func_02050c68(Vec *v, int32_t x);
extern void func_02050ddc(Vec *tmp, int32_t a, int32_t b);
extern void func_02050dcc(Vec *tmp);

void func_02050ce8(Vec *v, int32_t n, Elem *src) {
    uint8_t arr[8];
    Vec tmp;
    int32_t *pcap;
    int32_t cnt;
    int32_t t;
    Elem *d;
    Elem *end;
    Elem *dst;

    arr[3] = 0;
    pcap = &v->cap;
    tmp.data = 0;
    tmp.size = 0;
    tmp.cap = 0;
    cnt = 0;
    func_02050ddc(&tmp, func_02050c68(v, v->size + n - v->cap), arr[3]);
    dst = tmp.data + (v->size + tmp.size);
    {
        int32_t k = n;
        if (n != 0) {
            do {
                *dst = *src;
                dst++;
                src++;
            } while (--k != 0);
        }
    }
    tmp.size += n;
    cnt = v->size;
    end = v->data + v->size;
    dst = tmp.data + cnt;
    while (end > v->data) {
        end--;
        dst--;
        *dst = *end;
        cnt--;
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
