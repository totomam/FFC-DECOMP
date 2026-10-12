#include "ffc/types.h"

extern void func_0200b65c(uint32_t *arr, uint32_t x);
extern void func_020095b8(void *dst, uint32_t *src);
extern void func_0200b618(void *slot, uint32_t *val, uint32_t v);
extern void *func_020059cc(void *object);

typedef struct {
    uint8_t pad[0xe8];
    uint8_t *items;
    uint32_t count;
    uint32_t cap;
} Obj;

void func_02031754(Obj *o, uint32_t p, uint32_t q)
{
    uint8_t z;
    uint8_t *zp;
    uint32_t val;
    uint32_t arr[3];
    uint32_t i;
    uint8_t *e;

    zp = &z;
    val = p;
    for (i = 0; i < 3; i++) {
        arr[i] = 0;
    }
    func_0200b65c(arr, q);
    if (o->count < o->cap) {
        e = o->items + o->count * 16;
        if (e != 0) {
            *(uint32_t *)e = val;
            func_020095b8(e + 4, arr);
        }
        o->count = o->count + 1;
    } else {
        *zp = 0;
        func_0200b618(&o->items, &val, *zp);
    }
    func_020059cc(arr);
}
