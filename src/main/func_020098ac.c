#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void *func_02009928(void *object);

typedef struct {
    uint8_t *base;      /* 0x00 */
    uint32_t size;      /* 0x04 */
    uint32_t pad[2];    /* 0x08 */
    uint32_t count;     /* 0x10 */
} Obj;

void *func_020098ac(void *obj)
{
    Obj *o = (Obj *)obj;
    uint8_t *lo = o->base + o->count * 12;
    uint8_t *hi = lo + o->size * 12;

    while (hi > lo) {
        hi -= 12;
        func_020059cc(hi);
    }
    o->size = 0;
    func_02009928(o);
    return o;
}
