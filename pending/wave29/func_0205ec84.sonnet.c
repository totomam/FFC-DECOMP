#include "ffc/types.h"

extern void func_0200d5d4(void *object, void *value, uint32_t x);

typedef struct {
    uint8_t pad[0x44];
    uint32_t *arr;
    uint32_t count;
    uint32_t cap;
} Obj;

typedef union { uint8_t b; uint32_t w; } U;

void func_0205ec84(Obj *o, uint32_t value) {
    uint8_t z = 0;
    if (o->count < o->cap) {
        o->count = o->count + 1;
        o->arr[o->count - 1] = value;
        return;
    }
    {
        volatile uint8_t a;
        U u;
        a = z;
        u.b = a;
        func_0200d5d4(&o->arr, &value, u.w);
    }
}
