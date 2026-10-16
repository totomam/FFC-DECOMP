#include "ffc/types.h"
extern uint32_t func_ov002_021aac08(const void *object);
extern uint32_t func_0205681c(uint32_t a);
extern uint32_t func_ov002_021c8664(uint32_t a, void *b, uint32_t c);
typedef struct { uint8_t b; } Al;
extern void func_0200d5d4(void *object, void *value, Al a);
typedef struct { uint32_t *data; uint32_t size; uint32_t cap; } Vec;
void func_ov002_021c8710(Vec *v, void *p) {
    uint32_t x = *(uint16_t *)(func_ov002_021aac08(p) + 0x54);
    uint32_t r = func_0205681c(8);
    uint32_t val;
    if (r != 0) r = func_ov002_021c8664(r, p, x);
    val = r;
    if (v->size < v->cap) {
        uint32_t n = ++v->size;
        v->data[n - 1] = val;
        return;
    } else {
        uint8_t f = 0;
        Al a;
        a.b = f;
        func_0200d5d4(v, &val, a);
    }
}
