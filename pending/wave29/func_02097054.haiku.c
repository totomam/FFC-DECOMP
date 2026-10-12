#include "ffc/types.h"

extern void *func_0205681c(uint32_t size, uint32_t a, uint32_t b, uint32_t c, uint32_t d, void *ap);
extern void func_020970e8(uint32_t *p);
extern char data_020b305c[];

typedef struct {
    uint32_t a;
    void *obj;
} Thing;

Thing *func_02097054(Thing *self, uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t zero;
    uint32_t *obj;

    self->a = a;
    obj = (uint32_t *)func_0205681c(0x10, a, b, c, a, &b);
    if (obj != 0) {
        obj[1] = 1;
        obj[2] = 1;
        obj[0] = (uint32_t)data_020b305c;
        obj[3] = a;
    }
    self->obj = obj;
    zero = 0;
    func_020970e8(&zero);
    return self;
}
