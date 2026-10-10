#include "ffc/types.h"

extern void *func_0200958c(void *object);
extern void *func_0203b5d0(void *object);

typedef struct {
    uint8_t *base;      /* 0x00 */
    uint32_t size;      /* 0x04 */
    uint32_t pad[2];    /* 0x08 */
    uint32_t count;     /* 0x10 */
} Obj;

void *func_0203b568(void *obj)
{
    Obj *o = (Obj *)obj;
    uint8_t *lo = o->base + o->count * 12;
    uint8_t *hi = lo + o->size * 12;

    while (hi > lo) {
        hi -= 12;
        func_0200958c(hi);
    }
    o->size = 0;
    func_0203b5d0(o);
    return o;
}
