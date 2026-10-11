#include "ffc/types.h"

extern void func_02056bf4(void *a, void *b);

struct Obj;
typedef void (*ObjFn)(struct Obj *);
struct Obj {
    ObjFn *vtbl;
};

void func_ov003_0214df60(uint8_t *p)
{
    uint32_t off = 0x418;
    struct Obj *obj;
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    volatile uint8_t flag;
    uint8_t t;
    uint16_t old;

    obj = *(struct Obj **)(p + off);
    if (obj == 0) {
        return;
    }
    old = *ime;
    *ime = 0;
    t = 0;
    if (old) {
        t = 1;
    }
    flag = t;
    func_02056bf4(*(void **)(p + 0x194), *(void **)(p + off));
    *(struct Obj **)(p + off) = 0;
    (void)*ime;
    *ime = flag;
    if (obj != 0) {
        obj->vtbl[1](obj);
    }
}
