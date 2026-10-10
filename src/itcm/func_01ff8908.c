/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct Vt { void *s0; void *s1; void (*f)(void *); } Vt;
typedef struct Obj { Vt *vt; uint32_t a; uint32_t b; uint32_t flag; } Obj;
typedef struct Outer { uint32_t pad[12]; Obj *p; } Outer;

extern Outer data_0213e01c;
extern uint8_t data_02fe0000;

void func_01ff8908(void)
{
    Obj *o = data_0213e01c.p;
    if (!(int8_t)o->flag) {
        o->vt->f(o);
    }
    uint8_t *base = (uint8_t *)&data_02fe0000;
    uint32_t v;
    base += 0x3000;
    v = *(uint32_t *)(base + 0xff8);
    *(uint32_t *)(base + 0xff8) = v | 0x1000;
}
