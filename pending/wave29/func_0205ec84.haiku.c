#include "ffc/types.h"

extern void func_0200d5d4(void *object, void *value, uint32_t x);

typedef struct {
    uint8_t pad[0x44];
    uint32_t *arr;
    uint32_t count;
    uint32_t cap;
} Obj;

void func_0205ec84(Obj *o, uint32_t value) {
    uint8_t a;
    volatile uint8_t c;
    uint32_t t;
    if (o->count < o->cap) {
        o->count = o->count + 1;
        o->arr[o->count - 1] = value;
        return;
    }
    c = 0;
    a = c;
    t = a;
    func_0200d5d4(&o->arr, &value, t);
}
