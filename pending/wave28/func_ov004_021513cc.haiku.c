#include "ffc/types.h"

typedef struct {
    uint8_t x;
} Small;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint16_t e;
    uint32_t f;
} Elem;

typedef struct {
    Elem *data;
    uint32_t count;
    uint32_t cap;
} Arr;

extern void func_ov004_02152224(Arr *arr, Elem *src, Small s);

void func_ov004_021513cc(Arr *arr, Elem *src)
{
    if (arr->count < arr->cap) {
        Elem *p = &arr->data[arr->count];
        if (p) {
            p->a = src->a;
            p->b = src->b;
            p->c = src->c;
            p->d = src->d;
            p->e = src->e;
            p->f = src->f;
        }
        arr->count++;
    } else {
        Small s;
        s.x = 0;
        func_ov004_02152224(arr, src, s);
    }
}
