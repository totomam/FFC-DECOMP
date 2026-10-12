#include "ffc/types.h"

typedef struct {
    uint32_t a, b, c, d;
} Elem;

typedef struct {
    Elem *data;
    uint32_t count;
    uint32_t cap;
} Vec;

extern void func_02053ce0(Vec *v, uint32_t n);
extern void func_0206591c(Vec *v, uint32_t n);

void func_02065638(Vec *v, uint32_t n)
{
    uint32_t flag = 1;
    uint32_t ok = 0;
    Elem *p;
    Elem tmp;

    if (n <= v->cap) {
        if (v->count <= v->cap - n) {
            ok = flag;
        }
    }
    if (ok == 0) {
        flag = 0;
        func_02053ce0(v, v->count + n - v->cap);
    }
    if (flag != 0) {
        p = (Elem *)((uint8_t *)v->data + v->count * 16);
        if (n != 0) {
            do {
                if (p != 0) {
                    *p = tmp;
                }
                v->count = v->count + 1;
                p++;
                n--;
            } while (n != 0);
        }
    } else {
        func_0206591c(v, n);
    }
}
