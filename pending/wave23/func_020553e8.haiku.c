#include "ffc/types.h"

typedef struct Obj {
    void **vt;
    int32_t pad;
    int32_t count;
} Obj;

void func_020553e8(Obj *p)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint16_t old;
    int32_t n;
    uint16_t val;

    old = *ime;
    *ime = 0;
    n = p->count - 1;
    p->count = n;
    (void)*ime;
    val = 0;
    if (old != 0) {
        val = 1;
    }
    *ime = val;
    if (n > 0) {
        return;
    }
    if (p != 0) {
        ((void (*)(Obj *))p->vt[1])(p);
    }
}
