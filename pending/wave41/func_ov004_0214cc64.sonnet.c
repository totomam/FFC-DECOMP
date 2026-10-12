/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
uint32_t *func_0205681c(uint32_t size);
uint32_t func_ov004_0214bb38(uint32_t *obj, uint32_t x, uint32_t y, uint32_t a, uint32_t b, uint32_t c);
void func_020695ec(void *p);
void func_0200d5d4(void *object, uint32_t *value, uint32_t flag);
}

struct Vec { uint32_t *data; uint32_t size; uint32_t cap; };
struct Obj {
    uint8_t pad[0xb8]; uint32_t x; uint32_t y; uint8_t pad2[0x10]; Vec v; uint32_t pad3[2]; uint32_t *tab;
};

static inline void push(Vec &v, uint32_t val) {
    if (v.size < v.cap) { v.data[v.size++] = val; }
    else { uint8_t f = 0; func_0200d5d4(&v, &val, f); }
}

extern "C" void func_ov004_0214cc64(Obj *p, uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t *obj = func_0205681c(0xb0);
    uint32_t val = (uint32_t)obj;
    if (obj) val = func_ov004_0214bb38(obj, p->x, p->y, a, b, c);
    func_020695ec(p);
    push(p->v, val);
    p->tab[c] = val;
}
