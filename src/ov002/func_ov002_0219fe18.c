#include "ffc/types.h"

extern void *func_0205d620(void *object);
extern void *func_ov002_0219fe80(void *object);

typedef struct {
    uint8_t *base;      /* 0x00 */
    uint32_t size;      /* 0x04 */
    uint32_t pad[2];    /* 0x08 */
    uint32_t count;     /* 0x10 */
} Obj;

void *func_ov002_0219fe18(void *obj)
{
    Obj *o = (Obj *)obj;
    uint8_t *lo = o->base + o->count * 56;
    uint8_t *hi = lo + o->size * 56;

    while (hi > lo) {
        hi -= 56;
        func_0205d620(hi);
    }
    o->size = 0;
    func_ov002_0219fe80(o);
    return o;
}
