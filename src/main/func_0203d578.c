#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } Elem;
typedef struct { uint8_t *data; int32_t count; } Arr;

extern void *func_020059cc(void *object);
extern int32_t func_0209a76c(int32_t num, int32_t den);
extern void func_02090398(void *dst, const void *src, uint32_t n);

void *func_0203d578(Arr *self, Elem *first, Elem *last) {
    Elem *p;
    int32_t n;

    if (first != last) {
        for (p = first; p < last; p++) {
            func_020059cc(p);
        }
        n = func_0209a76c((int32_t)(self->data + self->count * 12 - (uint8_t *)last), 12);
        func_02090398(first, last, n * 12);
        self->count -= func_0209a76c((int32_t)((uint8_t *)last - (uint8_t *)first), 12);
    }
    return first;
}
