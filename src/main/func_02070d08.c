#include "ffc/types.h"

extern void func_0207cb18(uint16_t v);
extern void func_0207cb24(uint16_t v);
extern int func_0207d3d8(void *a, void *b, void *c, int d, int e, int f, int g, int h, int i);

typedef struct {
    uint8_t pad[6];
    uint16_t f6;
} Obj;

int func_02070d08(Obj *p, void *b, void *c, void *d)
{
    struct { uint16_t x; } loc;
    uint16_t *pv = &loc.x;
    int ret;
    int r;
    *pv = p->f6;
    func_0207cb18(p->f6);
    ret = 1;
    r = func_0207d3d8(c, b, d, 0, 0, 0, 7, 10, 1);
    func_0207cb24(*pv);
    if (r == 0) {
        ret = 0;
    }
    return ret;
}
