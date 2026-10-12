#include "ffc/types.h"

typedef struct { uint8_t v; } Byte;
typedef struct { uint32_t a, b, c; } Item;
typedef struct { Item *arr; uint32_t count; } List;

extern void func_02022468(void *p, uint32_t n, Byte v);

void func_0202240c(List *p, uint32_t n) {
    Byte x;
    Item tmp;
    Item *src;
    Item *dst;
    if (n == 0) return;
    x.v = 0;
    func_02022468(p, n, x);
    dst = &p->arr[p->count];
    if (n == 0) return;
    tmp.a = 0;
    tmp.b = 0;
    tmp.c = 0;
    src = &tmp;
    do {
        if (dst != 0) {
            *dst = *src;
        }
        p->count++;
        dst++;
        n--;
    } while (n != 0);
}
