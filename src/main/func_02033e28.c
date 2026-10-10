#include "ffc/types.h"

extern uint8_t func_02035dac(const void *object);

typedef struct {
    uint32_t hdr[2];
    uint32_t a[4];
    uint32_t b[4];
} Obj;

void func_02033e28(void *p, uint32_t idx, const void *obj) {
    Obj *o = (Obj *)p;
    o->a[idx] = 0;
    o->b[idx] = func_02035dac(obj);
}
