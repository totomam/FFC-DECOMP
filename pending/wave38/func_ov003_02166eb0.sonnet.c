#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *obj, uint32_t zero, uint32_t f, uint32_t d, uint32_t f2, uint32_t g);
extern uint32_t data_ov003_0217b01c[];

typedef struct {
    uint32_t vtable;
    uint32_t pad[32];
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
    uint32_t f;
    uint32_t g;
    uint32_t h;
    uint32_t i;
    uint32_t j;
    uint32_t k;
    uint32_t l;
} Obj;

void *func_ov003_02166eb0(uint32_t a, volatile uint32_t b, volatile uint32_t c, uint32_t d,
                          uint32_t e, uint32_t f, uint32_t g, uint32_t h,
                          uint32_t i, uint32_t j, uint32_t k, uint32_t l)
{
    Obj *obj = (Obj *)func_0205681c(0xb4);
    if (obj != 0) {
    uint32_t u; func_02056c9c(obj, 0, f, u, f, g);
    obj->vtable = (uint32_t)data_ov003_0217b01c;
    obj->a = a;
    obj->b = b;
    obj->c = c;
    obj->d = d;
    obj->e = e;
    obj->f = f;
    obj->g = g;
    obj->h = h;
    obj->i = i;
    obj->j = j;
    obj->k = k;
    obj->l = l;
    }
    return obj;
}
