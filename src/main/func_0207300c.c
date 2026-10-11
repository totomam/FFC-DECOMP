#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t size);
extern void func_02092878(void *dst, const uint8_t *text);
extern uint8_t data_020b227c[];

typedef struct {
    void *vt;
    void *buf;
    uint32_t n;
} Obj;

Obj *func_0207300c(Obj *p, const uint8_t *s)
{
    uint32_t mul = 1;
    p->vt = data_020b227c;
    p->n = 0;
    p->buf = func_02056830((func_02092864(s) + 1) * mul);
    func_02092878(p->buf, s);
    return p;
}
