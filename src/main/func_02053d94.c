#include "ffc/types.h"

typedef struct { uint8_t b; } Byte1;
extern void func_02053df4(void *self, int32_t n, Byte1 v);

typedef struct { uint32_t a, b, c, d; } Elem;
typedef struct { Elem *data; int32_t size; } Vec;

void func_02053d94(Vec *self, Elem *first, Elem *last) {
    int32_t n = last - first;
    if (n != 0) {
        uint8_t buf[4];
        uint8_t *p = &buf[1];
        *p = 0;
        Byte1 z = *(Byte1 *)p;
        func_02053df4(self, n, z);
        Elem *dst = self->data + self->size;
        while (first != last) {
            if (dst != 0) {
                dst->a = first->a;
                dst->b = first->b;
                dst->c = first->c;
                dst->d = first->d;
            }
            first++;
            dst++;
            self->size++;
        }
    }
}
